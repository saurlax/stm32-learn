# STM32 Learn with Keil Studio 🥰

🎉 This repository stores all my beginner projects for stm32. 

## How to run

I use **Keil Studio Desktop** instead of Keil μVision. So if you want to run these projects locally, you need to meet the following conditions.

- MSVC
- VSCode with [Arm Keil Studio Pack](https://marketplace.visualstudio.com/items?itemName=Arm.keil-studio-pack) plugin.
- A STM32F103C8 series microcontroller (STM32F103C8T6 for me)
- A ST-LINK debugger (some CMSIS-DAP currently not supported [based on my testing](https://github.com/ARM-software/vscode-embedded-debug/issues/16))

After meeting the above requirements, you only need to open the folder using VSCode, then right-click on `vcpkg-configuration.json` in the root directory, and click **Activate Environment** to automatically configure the environment.

Open the **Device Manager** badge, click on **Add Device**, and follow the prompts to configure your device. The following is my device configuration, which may be helpful to you.

```
Pack: Keil::STM32F1xx_DFP@2.4.1
Device: stlink-v2
Manufacturer: STMicroelectronics
Product: STM32 STLink
Serial: 16004a002933353739303541
VendorID: 0x483
ProductID: 0x3748
```

Afterwards, click on the **CMSIS** badge to build, run, and debug.