.. |ARCH| replace:: x86_64
.. |MACHINE| replace:: intel-corei7-64
.. |FIRMWARE_BLOB| replace:: ovmf.secboot.qcow2
.. |QEMU_GUI_FLAGS| replace::

     -vga virtio -display gtk,gl=on

.. |ARTIFACT_COMMANDS| replace::

     # Download and extract the Factory image
     fioctl targets artifacts <target_number> |MACHINE|/lmp-factory-image-|MACHINE|.wic.gz | gunzip > lmp-factory-image-|MACHINE|.wic
     # Download OVMF UEFI Firmware
     fioctl targets artifacts <target_number> |MACHINE|/|FIRMWARE_BLOB| > |FIRMWARE_BLOB|

