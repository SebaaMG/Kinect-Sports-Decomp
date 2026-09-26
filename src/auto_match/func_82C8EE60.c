typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorShiftRightAlgebraicByte();
extern V16 vectorSplatImmediateSignedByte();
extern V16 vectorSubtractUnsignedByteModulo();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C8EE60(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs35 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs37 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar10 [16];
  undefined4 in_register_00010140;
  undefined4 in_register_00010144;
  undefined4 in_register_00010148;
  undefined4 in_vr20;
  undefined4 in_register_00010150;
  undefined4 in_register_00010154;
  undefined4 in_register_00010158;
  undefined4 in_vr21;
  undefined4 in_register_00010160;
  undefined4 in_register_00010164;
  undefined4 in_register_00010168;
  undefined4 in_vr22;
  undefined4 in_register_00010170;
  undefined4 in_register_00010174;
  undefined4 in_register_00010178;
  undefined4 in_vr23;
  undefined4 in_register_00010180;
  undefined4 in_register_00010184;
  undefined4 in_register_00010188;
  undefined4 in_vr24;
  undefined4 in_register_00010190;
  undefined4 in_register_00010194;
  undefined4 in_register_00010198;
  undefined4 in_vr25;{ V16 _vt0 = vectorSplatImmediateSignedByte(0xf); memcpy(auVar3, &_vt0, 16); }
  lVar2 = (longlong)(param_4 >> 4);{ V16 _vt1 = vectorSplatImmediateSignedByte(1); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorShiftLeftIntegerByte(auVar3,auVar3); memcpy(auVar3, &_vt2, 16); }
  if (lVar2 < 1) {
    return;
  }
  param_1 = param_1 + 0x20;
  param_2 = param_2 - param_3;
  do {{ V16 _vt3 = vectorSubtractUnsignedByteModulo(in_vs44,auVar3); memcpy(auVar9, &_vt3, 16); }{ V16 _vt4 = vectorSubtractUnsignedByteModulo(in_vs43,auVar3); memcpy(auVar8, &_vt4, 16); }{ V16 _vt5 = vectorSubtractUnsignedByteModulo(in_vs41,auVar3); memcpy(auVar7, &_vt5, 16); }{ V16 _vt6 = vectorSubtractUnsignedByteModulo(in_vs39,auVar3); memcpy(auVar6, &_vt6, 16); }{ V16 _vt7 = vectorSubtractUnsignedByteModulo(in_vs37,auVar3); memcpy(auVar5, &_vt7, 16); }{ V16 _vt8 = vectorSubtractUnsignedByteModulo(in_vs35,auVar3); memcpy(auVar4, &_vt8, 16); }
    vectorShiftRightAlgebraicByte(auVar9,auVar10);
    vectorShiftRightAlgebraicByte(auVar8,auVar10);
    vectorShiftRightAlgebraicByte(auVar7,auVar10);
    vectorShiftRightAlgebraicByte(auVar6,auVar10);
    vectorShiftRightAlgebraicByte(auVar5,auVar10);
    vectorShiftRightAlgebraicByte(auVar4,auVar10);
    puVar1 = (undefined4 *)(param_1 - 0x20U & 0xfffffff0);
    *puVar1 = in_register_00010190;
    puVar1[1] = in_register_00010194;
    puVar1[2] = in_register_00010198;
    puVar1[3] = in_vr25;
    puVar1 = (undefined4 *)(param_1 - 0x10U & 0xfffffff0);
    *puVar1 = in_register_00010180;
    puVar1[1] = in_register_00010184;
    puVar1[2] = in_register_00010188;
    puVar1[3] = in_vr24;
    puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = in_register_00010170;
    puVar1[1] = in_register_00010174;
    puVar1[2] = in_register_00010178;
    puVar1[3] = in_vr23;
    puVar1 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_00010160;
    puVar1[1] = in_register_00010164;
    puVar1[2] = in_register_00010168;
    puVar1[3] = in_vr22;
    param_1 = param_1 + 0x40;
    puVar1 = (undefined4 *)(param_2 + param_3 & 0xfffffff0);
    *puVar1 = in_register_00010150;
    puVar1[1] = in_register_00010154;
    puVar1[2] = in_register_00010158;
    puVar1[3] = in_vr21;
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = in_register_00010140;
    puVar1[1] = in_register_00010144;
    puVar1[2] = in_register_00010148;
    puVar1[3] = in_vr20;
    param_3 = param_3 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

