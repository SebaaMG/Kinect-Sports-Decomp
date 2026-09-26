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
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8208EDA8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A6B9E0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = 0;
  dVar7 = (double)(lbl_82002AE0 / (float)(longlong)*(int *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar4 = 0;
    dVar8 = (double)lbl_82002C5C;
    dVar9 = (double)lbl_8208EDA8;
    do {
      uVar1 = *(int *)(param_1 + 0xfc) / (1 << (uVar5 & 0x3f));
      dVar6 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)(longlong)(int)uVar1 *
                                                                  dVar7) * dVar9 + dVar8));
      iVar3 = (int)dVar6;
      if (iVar3 < 4) {
        iVar3 = 4;
      }
      iVar2 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      uVar5 = uVar5 + 1;
      *(int *)(*(int *)(param_1 + 0x160) + iVar4) = iVar3;
      iVar4 = iVar4 + 4;
    } while ((int)uVar5 < *(int *)(param_1 + 0xf4));
  }
  *(undefined4 *)(param_1 + 0x138) = **(undefined4 **)(param_1 + 0x160);
  return;
}

