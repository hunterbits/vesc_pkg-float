#!/bin/zsh
make clean VESC_TOOL="/Applications/VESC\ Tool.app/Contents/MacOS/VESC\ Tool" QT_DEBUG_PLUGINS=1
touch float.vescpkg
make VESC_TOOL="/Applications/VESC\ Tool.app/Contents/MacOS/VESC\ Tool" QT_DEBUG_PLUGINS=1
make VESC_TOOL="/Applications/VESC\ Tool.app/Contents/MacOS/VESC\ Tool" QT_DEBUG_PLUGINS=1