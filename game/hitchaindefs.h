#ifndef HITCHAINDEFS_H
#define HITCHAINDEFS_H

#define HITCHAIN_NOTHING                 0
#define HITCHAIN_UNIT                    1
#define HITCHAIN_GROUND                  2
#define HITCHAIN_BUILDING                3
#define HITCHAIN_TERRAINOBJECT           4
#define HITCHAIN_INDIRECT                5
#define HITCHAIN_METALLIC                6

#define FIRST_HITCHAIN_MATERIAL          7

#define HITCHAIN_MATERIAL_SAND           7
#define HITCHAIN_MATERIAL_ROCK           8
#define HITCHAIN_MATERIAL_CONCRETE       9
#define HITCHAIN_MATERIAL_METAL_HARD     10
#define HITCHAIN_MATERIAL_METAL_TIN      11

#ifdef PROJECT_SHADOWGROUNDS

#  define HITCHAIN_MATERIAL_GLASS        12
#  define HITCHAIN_MATERIAL_WOOD         13
#  define HITCHAIN_MATERIAL_METAL_GRATE  14

#  define LAST_HITCHAIN_MATERIAL         14

#  define HITCHAIN_UNIT_TYPE2            15

#  define HITCHAIN_INDIRECT_TYPE2        16
#  define HITCHAIN_INDIRECT_METALLIC     17

#  define HITCHAIN_AMOUNT                18

#else

#  define HITCHAIN_MATERIAL_WOOD         12
#  define HITCHAIN_MATERIAL_GLASS        13
#  define HITCHAIN_MATERIAL_PLASTIC      14
#  define HITCHAIN_MATERIAL_LEAVES       15
#  define HITCHAIN_MATERIAL_LIQUID       16
#  define HITCHAIN_MATERIAL_METAL_GRATE  17
#  define HITCHAIN_MATERIAL_SOIL         18
#  define HITCHAIN_MATERIAL_GRASS        19
#  define HITCHAIN_MATERIAL_SNOW_SHALLOW 20
#  define HITCHAIN_MATERIAL_SNOW_DEEP    21
#  define HITCHAIN_MATERIAL_RESERVED_15  22

#  define LAST_HITCHAIN_MATERIAL         22

#  define HITCHAIN_UNIT_TYPE2            23

#  define HITCHAIN_INDIRECT_TYPE2        24
#  define HITCHAIN_INDIRECT_METALLIC     25

#  define HITCHAIN_AMOUNT                26

#endif

#define HITCHAIN_SOUNDS                  8

namespace game
{
    extern const char *hitChainName[HITCHAIN_AMOUNT];
}

#endif
