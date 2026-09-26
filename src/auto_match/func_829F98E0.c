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
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829F98E0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int in_r0;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 in_vs32 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs63 [16];
  float in_register_00010330;
  float in_register_00010334;
  float in_register_00010338;
  float in_vr51;
  float in_register_00010350;
  float in_register_00010354;
  float in_register_00010358;
  float in_vr53;
  float in_register_00010360;
  float in_register_00010364;
  float in_register_00010368;
  float in_vr54;
  float in_register_00010370;
  float in_register_00010374;
  float in_register_00010378;
  float in_vr55;
  float in_register_000103a0;
  float in_register_000103b0;
  float in_register_000103b4;
  float in_register_000103b8;
  float in_vr59;
  undefined4 in_register_000103e0;
  
  puVar10 = (ushort *)(param_1 + 0x1c3fc);
  lVar12 = 0x12c0;
  do {
    if (*puVar10 == param_3) {
      *puVar10 = (ushort)param_2;
    }
    puVar10 = puVar10 + 8;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar2 = (param_3 + 0xdc4c) * 4;
  iVar3 = (param_2 + 0xdc4c) * 4;
  iVar9 = (param_2 + 0x33f3) * 0x10 + param_1;
  altv207_13(in_vs63,in_vs35);
  iVar4 = (param_2 + 0xdd14) * 4;
  altv300_21(in_vs32,in_vs41);
  altv300_21(in_vs32,in_vs38);
  iVar5 = (param_2 + 0xde40) * 4;{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(auVar13, &_vt0, 16); }
  puVar6 = (undefined4 *)(in_r0 + iVar9 & 0xfffffff0);
  *puVar6 = in_register_000103e0;
  puVar6[1] = in_register_000103e0;
  puVar6[2] = in_register_000103e0;
  puVar6[3] = in_register_000103e0;
  iVar1 = *(int *)(iVar4 + param_1);
  uVar8 = *(int *)(iVar3 + param_1) + *(int *)(iVar2 + param_1);
  *(uint *)(iVar3 + param_1) = uVar8;
  uVar11 = *(int *)((param_3 + 0xdd14) * 4 + param_1) + iVar1;
  *(uint *)(iVar4 + param_1) = uVar11;
  trapWord(6,(ulonglong)uVar8,0);
  *(int *)(iVar5 + param_1) = *(int *)((param_3 + 0xde40) * 4 + param_1) + *(int *)(iVar5 + param_1)
  ;
  *(short *)((param_2 + 0x1bbb8) * 2 + param_1) =
       (short)((((ulonglong)uVar11 & 0xffffff) << 8) / (ulonglong)uVar8);
  trapWord(6,(ulonglong)*(uint *)(iVar3 + param_1),0);
  *(short *)((param_2 + 0x1be10) * 2 + param_1) =
       (short)((((ulonglong)*(uint *)(iVar5 + param_1) & 0xffffff) << 8) /
              (ulonglong)*(uint *)(iVar3 + param_1));
  altv207_13(auVar13,in_vs42);
  altv300_21(auVar13,in_vs58);
  pfVar7 = (float *)(in_r0 + iVar9 & 0xfffffff0);
  *pfVar7 = in_register_000103b0 * in_register_000103a0;
  pfVar7[1] = in_register_000103b4 * in_register_000103a0;
  pfVar7[2] = in_register_000103b8 * in_register_000103a0;
  pfVar7[3] = in_vr59 * in_register_000103a0;
  *(undefined4 *)(iVar2 + param_1) = 0;
  altv207_13(in_vs38,in_vs35);
  altv207_13(auVar13,in_vs41);
  if (in_register_00010360 < in_register_00010350) {
    in_register_00010350 = in_register_00010360;
  }
  if (in_register_00010364 < in_register_00010354) {
    in_register_00010354 = in_register_00010364;
  }
  if (in_register_00010368 < in_register_00010358) {
    in_register_00010358 = in_register_00010368;
  }
  if (in_vr54 < in_vr53) {
    in_vr53 = in_vr54;
  }
  pfVar7 = (float *)(in_r0 + (param_2 + 0x34bb) * 0x10 + param_1 & 0xfffffff0);
  *pfVar7 = in_register_00010350;
  pfVar7[1] = in_register_00010354;
  pfVar7[2] = in_register_00010358;
  pfVar7[3] = in_vr53;
  altv207_13(auVar13,in_vs43);
  altv207_13(in_vs36,in_vs35);
  if (in_register_00010370 < in_register_00010330) {
    in_register_00010370 = in_register_00010330;
  }
  if (in_register_00010374 < in_register_00010334) {
    in_register_00010374 = in_register_00010334;
  }
  if (in_register_00010378 < in_register_00010338) {
    in_register_00010378 = in_register_00010338;
  }
  if (in_vr55 < in_vr51) {
    in_vr55 = in_vr51;
  }
  pfVar7 = (float *)(in_r0 + (param_2 + 0x3583) * 0x10 + param_1 & 0xfffffff0);
  *pfVar7 = in_register_00010370;
  pfVar7[1] = in_register_00010374;
  pfVar7[2] = in_register_00010378;
  pfVar7[3] = in_vr55;
  return;
}

