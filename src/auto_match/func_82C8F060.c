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
extern V16 vectorAddSignedByteSaturate();
extern V16 vectorShiftLeftIntegerByte();
extern V16 vectorSplatImmediateSignedByte();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C8F060(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int in_r0;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  uint in_register_00010000;
  uint in_ACC;
  uint in_register_00010008;
  uint in_vr0;
  uint in_register_00010060;
  uint in_register_00010064;
  uint in_register_00010068;
  uint in_vr6;
  uint in_register_00010070;
  uint in_register_00010074;
  uint in_register_00010078;
  uint in_vr7;
  undefined4 in_register_000103c0;
  undefined4 in_register_000103c4;
  undefined4 in_register_000103c8;
  undefined4 in_vr60;
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  if (*(int *)(param_1 + 0x3a0c) != 1) {
    return;
  }{ V16 _vt0 = vectorSplatImmediateSignedByte(0xf); memcpy(auVar7, &_vt0, 16); }
  iVar6 = *(int *)(param_1 + 0xef8);
  iVar5 = *(int *)(param_1 + 0xefc);
  iVar4 = *(int *)(param_1 + 0xf00);{ V16 _vt1 = vectorShiftLeftIntegerByte(auVar7,auVar7); memcpy(auVar7, &_vt1, 16); }
  lVar3 = (longlong)(*(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xd0) >> 4);
  if (0 < lVar3) {
    do {
      altv207_13(auVar7,in_vs43);
      altv207_13(in_vs43,in_vs39);
      altv207_13(in_vs43,in_vs38);
      altv207_13(in_vs43,in_vs40);
      altv207_13(auVar7,in_vs42);
      altv207_13(auVar7,in_vs41);{ V16 _vt2 = vectorAddSignedByteSaturate(in_vs45,in_vs45); memcpy(in_vs45, &_vt2, 16); }{ V16 _vt3 = vectorAddSignedByteSaturate(in_vs44,in_vs44); memcpy(in_vs44, &_vt3, 16); }{ V16 _vt4 = vectorAddSignedByteSaturate(in_vs43,in_vs43); memcpy(in_vs43, &_vt4, 16); }{ V16 _vt5 = vectorAddSignedByteSaturate(in_vs40,in_vs40); memcpy(in_vs40, &_vt5, 16); }{ V16 _vt6 = vectorAddSignedByteSaturate(in_vs42,in_vs42); memcpy(in_vs39, &_vt6, 16); }{ V16 _vt7 = vectorAddSignedByteSaturate(in_vs41,in_vs41); memcpy(in_vs38, &_vt7, 16); }
      puVar1 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
      *puVar1 = in_register_000103f0;
      puVar1[1] = in_register_000103f4;
      puVar1[2] = in_register_000103f8;
      puVar1[3] = in_vr63;
      puVar1 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
      *puVar1 = in_register_000103e0;
      puVar1[1] = in_register_000103e4;
      puVar1[2] = in_register_000103e8;
      puVar1[3] = in_vr62;
      puVar1 = (undefined4 *)(iVar6 + 0x20U & 0xfffffff0);
      *puVar1 = in_register_000103d0;
      puVar1[1] = in_register_000103d4;
      puVar1[2] = in_register_000103d8;
      puVar1[3] = in_vr61;
      puVar1 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
      *puVar1 = in_register_000103c0;
      puVar1[1] = in_register_000103c4;
      puVar1[2] = in_register_000103c8;
      puVar1[3] = in_vr60;
      iVar6 = iVar6 + 0x40;
      puVar2 = (uint *)(in_r0 + iVar5 & 0xfffffff0);
      *puVar2 = in_register_00010070 ^ in_register_00010000;
      puVar2[1] = in_register_00010074 ^ in_ACC;
      puVar2[2] = in_register_00010078 ^ in_register_00010008;
      puVar2[3] = in_vr7 ^ in_vr0;
      iVar5 = iVar5 + 0x10;
      puVar2 = (uint *)(in_r0 + iVar4 & 0xfffffff0);
      *puVar2 = in_register_00010060 ^ in_register_00010000;
      puVar2[1] = in_register_00010064 ^ in_ACC;
      puVar2[2] = in_register_00010068 ^ in_register_00010008;
      puVar2[3] = in_vr6 ^ in_vr0;
      iVar4 = iVar4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
  }
  return;
}

