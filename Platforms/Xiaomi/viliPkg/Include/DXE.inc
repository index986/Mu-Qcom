  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/vili/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/vili/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/vili/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/HWIODxe/HWIODxe.inf

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/vili/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/vili/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/vili/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/vili/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/vili/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/vili/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/vili/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/vili/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/vili/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf
