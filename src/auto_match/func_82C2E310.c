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

void fn_82C2E310(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = 0;
  dVar9 = (double)(lbl_82002AE0 / (float)(longlong)*(int *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar6 = 0;
    dVar10 = (double)lbl_82002C5C;
    dVar11 = (double)lbl_8208EDA8;
    do {
      uVar2 = *(uint *)(param_1 + 0xfc);
      uVar3 = 1 << (uVar7 & 0x3f);
      uVar1 = (int)uVar2 / (int)uVar3;
      trapWord(6,(ulonglong)uVar3,0);
      trapWord(5,(ulonglong)uVar3 &
                 ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
      dVar8 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)(longlong)(int)uVar1 *
                                                                  dVar9) * dVar11 + dVar10));
      iVar5 = (int)dVar8;
      if (iVar5 < 4) {
        iVar5 = 4;
      }
      iVar4 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
      uVar7 = uVar7 + 1;
      *(int *)(iVar6 + *(int *)(param_1 + 0x160)) = iVar5;
      iVar6 = iVar6 + 4;
    } while ((int)uVar7 < *(int *)(param_1 + 0xf4));
  }
  *(undefined4 *)(param_1 + 0x138) = **(undefined4 **)(param_1 + 0x160);
  return;
}

