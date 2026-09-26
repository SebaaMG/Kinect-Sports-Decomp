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


void fn_83022C08(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int in_r0;
  int iVar10;
  ulonglong uVar11;
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float in_register_000103a0;
  float in_register_000103a4;
  float in_register_000103a8;
  float in_vr58;
  float in_register_000103b0;
  float in_register_000103b4;
  float in_register_000103b8;
  float in_vr59;
  float in_register_000103c0;
  float in_register_000103c4;
  float in_register_000103c8;
  float in_vr60;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  
  uVar11 = (ulonglong)(*(ushort *)(param_1 + 2) >> 2);
  iVar10 = *(int *)*param_1;
  if (uVar11 == 0) {
    return;
  }
  altv207_13(in_vs32,in_vs40);
  altv207_13(in_vs32,in_vs39);
  altv207_13(in_vs32,in_vs38);
  altv207_13(in_vs32,in_vs37);
  do {
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs42);
    fVar1 = in_register_000103b0 * in_register_000103f0;
    fVar3 = in_register_000103b4 * in_register_000103f4;
    fVar5 = in_register_000103b8 * in_register_000103f8;
    fVar7 = in_vr59 * in_vr63;
    fVar2 = in_register_000103a0 * in_register_000103e0;
    fVar4 = in_register_000103a4 * in_register_000103e4;
    fVar6 = in_register_000103a8 * in_register_000103e8;
    fVar8 = in_vr58 * in_vr62;
    in_register_000103f0 = in_register_000103f0 + in_register_000103d0;
    in_register_000103f4 = in_register_000103f4 + in_register_000103d4;
    in_register_000103f8 = in_register_000103f8 + in_register_000103d8;
    in_vr63 = in_vr63 + in_vr61;
    in_register_000103e0 = in_register_000103e0 + in_register_000103c0;
    in_register_000103e4 = in_register_000103e4 + in_register_000103c4;
    in_register_000103e8 = in_register_000103e8 + in_register_000103c8;
    in_vr62 = in_vr62 + in_vr60;
    pfVar9 = (float *)(in_r0 + iVar10 & 0xfffffff0);
    *pfVar9 = fVar1;
    pfVar9[1] = fVar2;
    pfVar9[2] = fVar3;
    pfVar9[3] = fVar4;
    pfVar9 = (float *)(in_r0 + iVar10 + 0x10 & 0xfffffff0);
    *pfVar9 = fVar5;
    pfVar9[1] = fVar6;
    pfVar9[2] = fVar7;
    pfVar9[3] = fVar8;
    iVar10 = iVar10 + 0x20;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  return;
}

