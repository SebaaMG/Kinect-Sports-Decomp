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
extern unsigned int lbl_8200129C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern float lbl_8200D8C4;
extern unsigned int lbl_82014570;
extern unsigned int lbl_820145B8;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82759248(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uStack_4;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\0')) {
    iVar7 = *(int *)(param_2 + 0xc);
    if (iVar7 == 0) {
      iVar7 = 0x40;
    }
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  uVar6 = 1;
  if (1 < *(ushort *)(param_1 + 10)) {
    iVar7 = 8;
    fVar2 = lbl_821AAD20;
    do {
      iVar8 = iVar7 + *(int *)(param_1 + 0xc);
      fVar3 = (float)*(byte *)(iVar7 + *(int *)(param_1 + 0xc)) - (float)*(byte *)(iVar8 + -8);
      if (lbl_821AAD20 < fVar3) {
        fVar3 = lbl_82002AE0 / fVar3;
        uVar5 = (uint)*(byte *)(iVar8 + -3) - (uint)*(byte *)(iVar8 + 5);
        uVar1 = (int)uVar5 >> 0x1f;
        fVar4 = (float)(longlong)(int)((uVar5 ^ uVar1) - uVar1) * fVar3;
        if (fVar2 < fVar4) {
          fVar2 = fVar4;
        }
        uVar5 = (uint)*(byte *)(iVar8 + -2) - (uint)*(byte *)(iVar8 + 6);
        uVar1 = (int)uVar5 >> 0x1f;
        fVar4 = (float)(longlong)(int)((uVar5 ^ uVar1) - uVar1) * fVar3;
        if (fVar2 < fVar4) {
          fVar2 = fVar4;
        }
        uVar5 = (uint)*(byte *)(iVar8 + -1) - (uint)*(byte *)(iVar8 + 7);
        uVar1 = (int)uVar5 >> 0x1f;
        fVar4 = (float)(longlong)(int)((uVar5 ^ uVar1) - uVar1) * fVar3;
        if (fVar2 < fVar4) {
          fVar2 = fVar4;
        }
        uVar5 = (uint)*(byte *)(iVar8 + -4) - (uint)*(byte *)(iVar8 + 4);
        uVar1 = (int)uVar5 >> 0x1f;
        fVar3 = (float)(longlong)(int)((uVar5 ^ uVar1) - uVar1) * fVar3;
        if (fVar2 < fVar3) {
          fVar2 = fVar3;
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 8;
    } while (uVar6 < *(ushort *)(param_1 + 10));
    if (fVar2 != lbl_821AAD20) {
      if (*(char *)(param_1 + 8) != '\0') {
        fVar2 = fVar2 * lbl_820145BC;
      }
      if ((*(char *)(param_1 + 9) == '\x13') && (lbl_82002C5C < ABS(*(float *)(param_1 + 0x10)))) {
        fVar2 = fVar2 / (lbl_8200129C - ABS(*(float *)(param_1 + 0x10)));
      }
      if (fVar2 < lbl_821AAD20) {
        fVar2 = lbl_821AAD20;
      }
      uStack_4 = (uint)(longlong)SQRT((fVar2 + lbl_820145B8) * lbl_8200D8C4);
      if (0x11 < uStack_4) {
        uStack_4 = 0x11;
      }
      return *(int *)(&lbl_82014570 + uStack_4 * 4);
    }
  }
  return 0x40;
}

