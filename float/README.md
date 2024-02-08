# FLOAT PACKAGE

A balance vehicle package specifically tailored for one wheeled skateboards, as invented by Ben Smither in 2007: http://www.robosys.co.uk/

Includes all the basics such as PID control, ATR, and Turntilt - but also has popular features such as remote support,  dirty landings, push start, and many more. See help text in the tool/app for details on any feature.

Now includes Quicksaves in the AppUI!

<H3><font color=yellow>NEW USERS: DO NOT LOAD UNTIL YOU'VE CONFIGURED MOTOR AND IMU!!!</font></H3>

After loading do not forget to configure your details in the Specs tab: voltages and ADC values (default assumes 15s pack and 3.0V ADC cutoffs).

Once you've adjusted your voltages the default tune should provide you with a well behaving, rideable board. If it acts weird it's most likely a motor configuration or IMU calibration issue!

<H2>DISCLAIMER</H2>

This package is not endorsed by the vesc-project. Use at your own risk.

<H2>CREDITS</H2>

Based on Mitch Lustig's original Balance Package, but specifically tailored for one wheeled skateboards.

Ported by Nico Aleman, heavily based on SurfDado's ATR Firmware: https://pev.dev/t/atr-firmware-101/43

Removed unneeded parameters, added new features and behaviors and a more user-friendly configuration menu with usable default/min/max values and informative Help text.

<H2>RELEASE NOTES</H2>

Release Changelogs: https://pev.dev/t/float-package-changelogs/499

<H3>BUILD INFO</H3>

Source code can be found here: https://github.com/NicoAleman/vesc_pkg-float

#### &nbsp;
#### Build Info

run zsh m.sh to build custom package
be sure to export 
export VESC_TOOL="/Applications/VESC Tool.app/Contents/MacOS/VESC Tool"
export C_INCLUDE_PATH=/opt/homebrew/Cellar/arm-none-eabi-gcc/13.2.0/lib/gcc/arm-none-eabi/13.2.0/include:$C_INCLUDE_PATH
<!-- think this is the only one needed... -->
export PATH=$PATH:/System/Volumes/Data/Applications/ArmGNUToolchain/12.2.rel1/arm-none-eabi/bin
<!-- dont think this ones needed... -->
export QT_QPA_PLATFORM_PLUGIN_PATH=/System/Volumes/Data/Users/hunter/Qt/5.11.0/plugins/platforms/

<!-- see Connect to Your VESC from Desktop on for connecting to board https://spinningmag.net/articles/vesc-guide/#hardware-10 -->