typedef unsigned int uint32_t;

uint32_t fn_827898D0(const uint32_t* p)
{
    uint32_t v11 = p[0x24/4] * 5;
    uint32_t v31 = p[0x60/4];
    uint32_t v3 = p[0x50/4];
    uint32_t v4 = p[0x40/4];
    uint32_t v5 = p[0x74/4];
    uint32_t v6 = p[0x64/4];
    uint32_t v7 = p[0x54/4];
    uint32_t v8 = p[0x38/4];
    uint32_t v9 = p[0x44/4];
    uint32_t v10 = p[0x28/4];
    
    v11 = v11 + v31;
    v11 = v11 * 12;
    v11 = v11 + v3;
    v11 = v11 + v4;
    v11 = v11 << 6;
    v11 = v11 + v5;
    v11 = v11 + v6;
    v11 = v11 + v7;
    v11 = v11 + v8;
    v11 = v11 + v9;
    v11 = v11 + v10;
    return v11 << 2;
}
