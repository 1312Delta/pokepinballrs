// Copyright (c) 2018 huderlem

#ifndef OPTIONS_H
#define OPTIONS_H

#include <stdbool.h>
#include "gfx.h"

struct GbaToPngOptions {
    char *paletteFilePath;
    // Can only be used for 4bpp images that hold multiple 16-color palettes.
    char *paletteMapFilePath;
    int bitDepth;
    bool hasTransparency;
    int width;
    int metatileWidth;
    int metatileHeight;
    bool pinballHatchSprite;
    char *tilemapFilePath;
    bool isAffineMap;
    bool isTiled;
    int dataWidth;
};

struct PngToGbaOptions {
    int numTiles;
    enum NumTilesMode numTilesMode;
    int bitDepth;
    int metatileWidth;
    int metatileHeight;
    bool pinballHatchSprite;
    char *tilemapFilePath;
    bool isAffineMap;
    bool isTiled;
    int dataWidth;
};

#endif // OPTIONS_H
