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
extern int fn_8265C940();
extern int fn_82925600();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_8202EE50;
extern unsigned int lbl_821AAD20;


void fn_8292F280(int param_1,longlong param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x40) + param_2;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar10 = fn_8265C940(*(int *)(param_1 + 0xdc) << 8,0x24810000);
    *(int *)(param_1 + 0xf0) = iVar10;
    if (iVar10 == 0) {
      return;
    }
  }
  uVar16 = uVar13 & 0xfffffffc;
  if ((uVar16 != *(uint *)(param_1 + 0xe8)) || (param_3 != *(int *)(param_1 + 0xec))) {
    uVar17 = *(uint *)(param_1 + 0xc4);
    uVar2 = (uint)uVar16;
    *(uint *)(param_1 + 0xe8) = uVar2;
    *(int *)(param_1 + 0xec) = param_3;
    uVar16 = (ulonglong)*(uint *)(param_1 + 0xf0);
    lVar15 = (longlong)(int)(uVar2 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
             (longlong)(int)(uVar17 >> 2) * (longlong)*(int *)(param_1 + 0x88) +
             (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
             (ulonglong)*(uint *)(param_1 + 0x20);
    if (uVar17 < *(uint *)(param_1 + 0xcc)) {
      do {
        (**(code **)(param_1 + 0x8c))(uVar16,lVar15);
        uVar17 = uVar17 + 4;
        uVar16 = uVar16 + 0x100;
        lVar15 = (ulonglong)*(uint *)(param_1 + 0x88) + lVar15;
      } while (uVar17 < *(uint *)(param_1 + 0xcc));
    }
  }
  uVar17 = *(uint *)(param_1 + 200);
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x3c) - (ulonglong)*(uint *)(param_1 + 0xc4);
  uVar16 = *(uint *)(param_1 + 0x68) + uVar12;
  if ((uVar12 & 0xffffffff) < (uVar16 & 0xffffffff)) {
    lVar15 = uVar16 - uVar12;
    uVar16 = param_4;
    do {
      uVar3 = uVar12 & 0x3ffffffc;
      param_4 = uVar16 + 0x10;
      uVar2 = (uint)uVar12;
      uVar12 = uVar12 + 1;
      puVar11 = (undefined4 *)
                (((uint)((uVar3 | uVar13 - uVar17 & 3) << 2) | uVar2 & 3) * 0x10 +
                *(int *)(param_1 + 0xf0));
      puVar14 = (undefined4 *)uVar16;
      *puVar14 = *puVar11;
      puVar14[1] = puVar11[1];
      puVar14[2] = puVar11[2];
      puVar14[3] = puVar11[3];
      lVar15 = lVar15 + -1;
      uVar16 = param_4;
    } while (lVar15 != 0);
  }
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_8202EE50;
  fVar7 = lbl_8202EE4C;
  fVar6 = lbl_8202EE48;
  fVar5 = lbl_820288C0;
  fVar4 = lbl_82002C5C;
  uVar13 = param_4;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (uVar13 = param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10,
     (uVar13 & 0xffffffff) < (param_4 & 0xffffffff))) {
    lVar15 = (((param_4 - uVar13) - 1 & 0xffffffff) >> 4) + 1;
    do {
      pfVar1 = (float *)uVar13;
      if (((((float)(longlong)(int)(*pfVar1 * fVar6 + fVar4) * fVar7 == *(float *)(param_1 + 0x24))
           && ((float)(longlong)(int)(pfVar1[1] * fVar5 + fVar4) * fVar8 ==
               *(float *)(param_1 + 0x28))) &&
          ((float)(longlong)(int)(pfVar1[2] * fVar6 + fVar4) * fVar7 == *(float *)(param_1 + 0x2c)))
         && ((float)(longlong)(int)(pfVar1[3] * *(float *)(param_1 + 0x80) + fVar4) *
             *(float *)(param_1 + 0x84) == *(float *)(param_1 + 0x30))) {
        *pfVar1 = fVar9;
        pfVar1[1] = fVar9;
        pfVar1[2] = fVar9;
        pfVar1[3] = fVar9;
      }
      uVar13 = uVar13 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,uVar13 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

