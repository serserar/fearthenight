#!/bin/bash

#"Usage: cube2font infile outfile outborder[:inborder] pad offset advance charwidth charheight texwidth texheight [spacewidth spaceheight texdir]"
#"Usage: tessfont infile outfile supersample border[:border2[:outline:outline2]] radius pad offsetx[:offsety] advance charwidth charheight texwidth texheight [spacewidth spaceheight scale texdir]"
#supersample is between 1 and 32
#radius is the border radius
#~/projects/cpp/resseract/src/build/tessfont %APP_FONT%.ttf %APP_FONT% 4 15 1 1 54 54 512 512 0 0 %APP_FONTPATH%

APPFONT=$1
APPFONTPATH=$2
echo $APPFONT
~/projects/cpp/resseract/src/build/tessfont $APPFONT.ttf $APPFONT 1 4:15:4:15 1 1 1 54 54 512 512 0 0 0 $APPFONTPATH

