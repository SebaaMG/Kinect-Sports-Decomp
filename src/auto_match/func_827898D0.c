typedef unsigned int uint32_t;

uint32_t fn_827898D0(uint32_t* p) {
    return ((((p[0x24/4] * 5 + p[0x60/4]) * 12 + p[0x50/4] + p[0x40/4]) << 6)
            + p[0x74/4] + p[0x64/4] + p[0x54/4] + p[0x38/4] + p[0x44/4] + p[0x28/4]) << 2;
}
