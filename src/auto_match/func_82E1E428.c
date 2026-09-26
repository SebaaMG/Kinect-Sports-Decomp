typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;

typedef struct {
    uint32_t field_00;
    uint32_t field_04;
    uint8_t field_08;
    uint8_t field_09;
    uint8_t field_0A;
    uint8_t field_0B;
    uint8_t field_0C;
    uint8_t field_0D;
    uint8_t field_0E;
    uint8_t field_0F;
    uint32_t field_10;
    uint8_t field_14;
    uint8_t field_15;
    uint16_t pad_16;
    uint32_t field_18;
    uint32_t field_1C;
    uint8_t pad_20[0x1C];  // 0x3C - 0x20 = 0x1C (28 bytes)
    uint32_t field_3C;
    uint32_t field_40;
    uint32_t field_44;
    uint32_t field_48;
    uint32_t field_4C;
    uint32_t field_50;
    uint32_t field_54;
    uint32_t field_58;
    uint8_t field_5C;
    uint8_t field_5D;
    uint16_t pad_5E;
    uint32_t field_60;
} Struct_82E1E428;

void fn_82E1E428(Struct_82E1E428* ptr) {
    ptr->field_00 = 0;
    ptr->field_04 = 0;
    ptr->field_08 = 0;
    ptr->field_09 = 0;
    ptr->field_0A = 0;
    ptr->field_0B = 0;
    ptr->field_0C = 0;
    ptr->field_0D = 0;
    ptr->field_0E = 0;
    ptr->field_0F = 0;
    ptr->field_10 = 0;
    ptr->field_14 = 0;
    ptr->field_15 = 0;
    ptr->field_18 = 0;
    ptr->field_1C = 0;
    ptr->field_3C = 0;
    ptr->field_40 = 0;
    ptr->field_44 = 0;
    ptr->field_48 = 0;
    ptr->field_4C = 0;
    ptr->field_50 = 0;
    ptr->field_54 = 0;
    ptr->field_58 = 0;
    ptr->field_5C = 0;
    ptr->field_5D = 0;
    ptr->field_60 = 0;
}
