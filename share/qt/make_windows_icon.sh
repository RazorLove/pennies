#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/pennies.ico

convert ../../src/qt/res/icons/pennies-16.png ../../src/qt/res/icons/pennies-32.png ../../src/qt/res/icons/pennies-48.png ${ICON_DST}
