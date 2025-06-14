  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/pipa/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
	INF Binaries/pipa/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

  INF Binaries/pipa/QcomPkg/Drivers/PdcDxe/PdcDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

  # Only used for DisplayDxe for Qualcomm Demura
  #INF Binaries/pipa/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/VibratorDxe/VibratorDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
	INF Binaries/pipa/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
	INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/pipa/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/pipa/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/pipa/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/pipa/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/pipa/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
