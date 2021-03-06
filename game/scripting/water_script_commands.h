// Copyright 2002-2004 Frozenbyte Ltd.

// from 1750

#define GS_CMD_BASE 1750

GS_CMD(0, GS_CMD_CREATEWATER,           "createWater",           NONE)
GS_CMD(1, GS_CMD_SETWATERNAME,          "setWaterName",          STRING)
GS_CMD(2, GS_CMD_SETWATERPOSITION,      "setWaterPosition",      STRING)
GS_CMD(3, GS_CMD_SETWATERHEIGHT,        "setWaterHeight",        STRING)
GS_CMD(4, GS_CMD_CREATEWATERDECOR,      "createWaterDecor",      NONE)
GS_CMD(5, GS_CMD_UPDATEWATER,           "updateWater",           NONE)
GS_CMD(6, GS_CMD_SETWATERHEIGHTTOVALUE, "setWaterHeightToValue", NONE)
GS_CMD(7, GS_CMD_GETWATERBYNAME,        "getWaterByName",        STRING)

GS_CMD_SIMPLE(8, setWaterAtPosition,      NONE)
GS_CMD_SIMPLE(9, getWaterDepthAtPosition, NONE)

#undef GS_CMD_BASE

// up to 1799
