#!/bin/sh
echo Creating HDD image
dd if=/dev/zero of=HddIsaac.img bs=512 count=16065
echo Attaching to /dev/loop2
losetup /dev/loop2 HddIsaac.img
echo Formating...
fdisk /dev/loop2 << EOF
n
p
1
1
w
EOF
losetup -d /dev/loop2
losetup /dev/loop2 HddIsaac.img
losetup -o 32256 /dev/loop3 /dev/loop2
mkfs /dev/loop3
echo Mounting....
mount /dev/loop3 HdIsaac/
echo Installing boot
mkdir -p ./HdIsaac/boot/grub
cp -rv /boot/grub/stage* ./HdIsaac/boot/grub
cat > ./HdIsaac/boot/grub/menu.lst << EOF
default 0
timeout 10

title=IsaacOS
root (hd0,0)
kernel /IsaacKernel
EOF
echo syncing and unmounting
umount ./HdIsaac
sync
grub --device-map=/dev/null  << EOF
device (hd0) HdIsaac.img 
root (hd0,0)
setup (hd0)
EOF
