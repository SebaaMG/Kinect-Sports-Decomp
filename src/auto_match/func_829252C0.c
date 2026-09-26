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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8202E62C;
extern unsigned int lbl_8202EE28;


undefined4 fn_829252C0(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  fVar3 = lbl_8202EE28;
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) == 0) {
    if ((iVar7 == 1) || (iVar7 == 4)) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar7 = 0;
        do {
          iVar6 = param_2 + 8 + iVar7;
          uVar4 = uVar4 + 1;
          fVar2 = SQRT(*(float *)(iVar6 + -8)) * fVar3;
          uVar1 = (uint)fVar2;
          iVar5 = uVar1 * 4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar7) =
               (*(float *)(&lbl_8202E62C + iVar5) - *(float *)(&lbl_8202E628 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_8202E628 + iVar5);
          fVar2 = SQRT(*(float *)(iVar6 + -4)) * fVar3;
          uVar1 = (uint)fVar2;
          iVar5 = uVar1 * 4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar7 + 4) =
               (*(float *)(&lbl_8202E62C + iVar5) - *(float *)(&lbl_8202E628 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_8202E628 + iVar5);
          fVar2 = SQRT(*(float *)(param_2 + 8 + iVar7)) * fVar3;
          uVar1 = (uint)fVar2;
          iVar5 = uVar1 * 4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar7 + 8) =
               (*(float *)(&lbl_8202E62C + iVar5) - *(float *)(&lbl_8202E628 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_8202E628 + iVar5);
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar7 + 0xc) = *(undefined4 *)(iVar6 + 4);
          iVar7 = iVar7 + 0x10;
        } while (uVar4 < *(uint *)(param_1 + 0x68));
      }
    }
    else {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar7 = 0;
        do {
          iVar5 = param_2 + 8 + iVar7;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar7) = *(undefined4 *)(iVar5 + -8);
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar7 + 4) = *(undefined4 *)(iVar5 + -4);
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar7 + 8) =
               *(undefined4 *)(param_2 + 8 + iVar7);
          fVar2 = SQRT(*(float *)(iVar5 + 4)) * fVar3;
          uVar1 = (uint)fVar2;
          iVar5 = uVar1 * 4;
          iVar6 = *(int *)(param_1 + 0x58) + iVar7;
          iVar7 = iVar7 + 0x10;
          *(float *)(iVar6 + 0xc) =
               (*(float *)(&lbl_8202E62C + iVar5) - *(float *)(&lbl_8202E628 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_8202E628 + iVar5);
        } while (uVar4 < *(uint *)(param_1 + 0x68));
      }
    }
  }
  else if ((iVar7 == 1) || (iVar7 == 4)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar7 = 0;
      do {
        iVar6 = iVar7 + param_2 + 8;
        uVar4 = uVar4 + 1;
        *(float *)(iVar7 + *(int *)(param_1 + 0x58)) = SQRT(*(float *)(iVar6 + -8));
        *(float *)(iVar7 + *(int *)(param_1 + 0x58) + 4) = SQRT(*(float *)(iVar6 + -4));
        *(float *)(iVar7 + *(int *)(param_1 + 0x58) + 8) = SQRT(*(float *)(iVar7 + param_2 + 8));
        iVar5 = iVar7 + *(int *)(param_1 + 0x58);
        iVar7 = iVar7 + 0x10;
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar6 + 4);
      } while (uVar4 < *(uint *)(param_1 + 0x68));
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar7 = 0;
      do {
        iVar5 = param_2 + 8 + iVar7;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x58)) = *(undefined4 *)(iVar5 + -8);
        *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x58) + 4) = *(undefined4 *)(iVar5 + -4);
        *(undefined4 *)(iVar7 + *(int *)(param_1 + 0x58) + 8) = *(undefined4 *)(param_2 + 8 + iVar7)
        ;
        *(float *)(iVar7 + *(int *)(param_1 + 0x58) + 0xc) = SQRT(*(float *)(iVar5 + 4));
        iVar7 = iVar7 + 0x10;
      } while (uVar4 < *(uint *)(param_1 + 0x68));
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}

