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
extern int fn_8265C9E0();
extern int fn_82B90110();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_8202EE50;
extern unsigned int lbl_821AAD20;


void fn_82B99548(int param_1,int param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  
  uVar14 = *(int *)(param_1 + 0x40) + param_2;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  if (*(int *)(param_1 + 0xf0) == 0) {
    lVar8 = ((ulonglong)*(uint *)(param_1 + 0xdc) & 0xffffff) << 8;
    if (0xfffffff < ((ulonglong)*(uint *)(param_1 + 0xdc) & 0xfffffff) << 4) {
      lVar8 = -1;
    }
    iVar9 = fn_8265C9E0(lVar8);
    *(int *)(param_1 + 0xf0) = iVar9;
    if (iVar9 == 0) {
      return;
    }
  }
  if (((uVar14 & 0xfffffffc) != *(uint *)(param_1 + 0xe8)) || (param_3 != *(int *)(param_1 + 0xec)))
  {
    uVar16 = *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xe8) = uVar14 & 0xfffffffc;
    *(int *)(param_1 + 0xec) = param_3;
    uVar15 = (ulonglong)*(uint *)(param_1 + 0xf0);
    lVar8 = (longlong)(int)(uVar14 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
            (longlong)(int)(uVar16 >> 2) * (longlong)*(int *)(param_1 + 0x88) +
            (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
            (ulonglong)*(uint *)(param_1 + 0x20);
    if (uVar16 < *(uint *)(param_1 + 0xcc)) {
      do {
        (**(code **)(param_1 + 0x8c))(uVar15,lVar8);
        uVar16 = uVar16 + 4;
        uVar15 = uVar15 + 0x100;
        lVar8 = (ulonglong)*(uint *)(param_1 + 0x88) + lVar8;
      } while (uVar16 < *(uint *)(param_1 + 0xcc));
    }
  }
  iVar9 = *(int *)(param_1 + 200);
  uVar16 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0xc4);
  uVar12 = *(int *)(param_1 + 0x68) + uVar16;
  if (uVar16 < uVar12) {
    iVar13 = uVar12 - uVar16;
    do {
      iVar13 = iVar13 + -1;
      iVar11 = ((uVar16 & 0xfffffffc | uVar14 - iVar9 & 3) << 2 | uVar16 & 3) * 0x10;
      iVar10 = iVar11 + *(int *)(param_1 + 0xf0);
      puVar17 = (undefined4 *)param_4;
      *puVar17 = *(undefined4 *)(iVar11 + *(int *)(param_1 + 0xf0));
      puVar17[1] = *(undefined4 *)(iVar10 + 4);
      puVar17[2] = *(undefined4 *)(iVar10 + 8);
      puVar17[3] = *(undefined4 *)(iVar10 + 0xc);
      param_4 = param_4 + 0x10;
      uVar16 = uVar16 + 1;
    } while (iVar13 != 0);
  }
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_8202EE50;
  fVar5 = lbl_8202EE4C;
  fVar4 = lbl_8202EE48;
  fVar3 = lbl_820288C0;
  fVar2 = lbl_82002C5C;
  uVar15 = param_4;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (uVar15 = param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10,
     (uVar15 & 0xffffffff) < (param_4 & 0xffffffff))) {
    lVar8 = (((param_4 - uVar15) - 1 & 0xffffffff) >> 4) + 1;
    do {
      pfVar1 = (float *)uVar15;
      if (((((float)(longlong)(int)(*pfVar1 * fVar4 + fVar2) * fVar5 == *(float *)(param_1 + 0x24))
           && ((float)(longlong)(int)(pfVar1[1] * fVar3 + fVar2) * fVar6 ==
               *(float *)(param_1 + 0x28))) &&
          ((float)(longlong)(int)(pfVar1[2] * fVar4 + fVar2) * fVar5 == *(float *)(param_1 + 0x2c)))
         && ((float)(longlong)(int)(pfVar1[3] * *(float *)(param_1 + 0x80) + fVar2) *
             *(float *)(param_1 + 0x84) == *(float *)(param_1 + 0x30))) {
        pfVar1[1] = fVar7;
        pfVar1[3] = fVar7;
        pfVar1[2] = fVar7;
        *pfVar1 = fVar7;
      }
      lVar8 = lVar8 + -1;
      uVar15 = uVar15 + 0x10;
    } while (lVar8 != 0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82B90110(param_1,uVar15 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

