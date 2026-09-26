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
extern unsigned int lbl_82057B9C;
extern unsigned int lbl_82057BC8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832187F4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_829E5AB0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  fVar1 = lbl_82057BC8;
  if (param_3 == *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30)) {
    lVar11 = 3;
    uVar9 = (((ulonglong)*(uint *)(param_1 + 0x14) - (ulonglong)*(uint *)(param_1 + 0xc)) + 1 &
            0xffffffff) / 3;
    uVar7 = (((ulonglong)*(uint *)(param_1 + 0x18) - (ulonglong)*(uint *)(param_1 + 0x10)) + 1 &
            0xffffffff) / 3;
    iVar8 = (int)uVar7;
    iVar4 = *(int *)(param_1 + 0x30) + 1;
    lVar6 = 0;
    pfVar3 = (float *)&lbl_82057B9C;
    fVar1 = lbl_821AAD20;
    do {
      iVar2 = (int)lVar6;
      pfVar3 = pfVar3 + 3;
      lVar6 = lVar6 + uVar7;
      uVar5 = (longlong)(int)(iVar2 + *(uint *)(param_1 + 0x10)) * (longlong)iVar4 +
              (ulonglong)*(uint *)(param_1 + 0xc) + uVar9;
      uVar10 = (longlong)iVar4 * (longlong)iVar8 + uVar5;
      fVar1 = (((*(float *)((int)((uVar10 + uVar9 & 0xffffffff) << 3) + param_2) -
                *(float *)((int)((uVar10 & 0xffffffff) << 3) + param_2)) -
               *(float *)((int)((uVar5 + uVar9 & 0xffffffff) << 3) + param_2)) +
              *(float *)((int)((uVar5 & 0xffffffff) << 3) + param_2)) * *pfVar3 *
              (lbl_82057B9C / (float)(uint)(iVar8 * (int)uVar9)) + fVar1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    fVar1 = fVar1 / lbl_832187F4;
  }
  return (double)fVar1;
}

