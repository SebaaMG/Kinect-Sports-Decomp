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
extern int fn_8249E728();
extern unsigned int lbl_82186E64;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FB8;
extern unsigned int lbl_8327F880;
extern V16 vectorSubtractFloatingPoint();


ulonglong fn_8249E5D8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  int in_r0;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float afStack_30 [4];
  float afStack_20 [8];
  
  fVar3 = lbl_8218E8E8;
  if (param_2 == 2) {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x88);
    puVar4 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    uVar9 = *puVar4;
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar4 = (undefined4 *)(param_1 + 0x70U & 0xfffffff0);
    uVar13 = puVar4[1];
    uVar14 = puVar4[2];
    uVar15 = puVar4[3];
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    vectorSubtractFloatingPoint(in_vs32,in_vs44);
    puVar5 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar13;
    puVar5[2] = uVar14;
    puVar5[3] = uVar15;
    puVar4 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *puVar4 = uVar9;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    if ((fVar3 < ABS(fVar1 - fVar2)) || (bVar6 = true, fVar3 < ABS(afStack_30[0] - afStack_20[0])))
    {
      bVar6 = false;
    }
    uVar8 = (ulonglong)!bVar6;
  }
  else {
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0xd0) < 0) {
        return 0;
      }
      uVar8 = 1;
      goto LAB_8249e708;
    }
    if (param_2 < 4) {
      return 0;
    }
    fVar3 = lbl_8327F880 * lbl_82186E64 * lbl_8327F880 * lbl_82186E64;
    fVar1 = lbl_8327F880 * lbl_82191FB8 * lbl_8327F880 * lbl_82191FB8;
    if ((fVar3 <= *(float *)(param_1 + 0xb8)) || (uVar7 = 1, *(float *)(param_1 + 0xbc) <= fVar1)) {
      uVar7 = 0;
    }
    if ((fVar3 <= *(float *)(param_1 + 0xbc)) || (uVar8 = 1, *(float *)(param_1 + 0xb8) <= fVar1)) {
      uVar8 = 0;
    }
    uVar8 = uVar8 | uVar7;
  }
  if ((int)uVar8 == 0) {
    return uVar8;
  }
LAB_8249e708:
  fn_8249E728(param_1,param_2,0,uVar8);
  return uVar8;
}

