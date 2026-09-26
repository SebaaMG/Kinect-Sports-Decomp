typedef unsigned int uint32_t;

uint32_t fn_82B45330(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4,
                     uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8,
                     uint32_t a9, uint32_t a10)
{
    uint32_t r3, r4, r5, r6, r7, r8, r9, r10, t9, t10;
    r3 = 1u << a1;
    r4 = 1u << a2;
    r4 |= r3;
    r5 = 1u << a3;
    r5 |= r4;
    r6 = 1u << a4;
    r6 |= r5;
    r7 = 1u << a5;
    r7 |= r6;
    r8 = 1u << a6;
    r8 |= r7;
    r9 = 1u << a7;
    r9 |= r8;
    r10 = 1u << a8;
    r10 |= r9;
    t9 = 1u << a9;
    r10 |= t9;
    t10 = 1u << a10;
    r10 |= t10;
    return r10 & ~1u;
}
