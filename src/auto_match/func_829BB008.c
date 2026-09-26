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


void fn_829BB008(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1ac);
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar5 = (int *)(*(int *)(param_1 + 0xdc) + 0xc);
    do {
      uVar8 = (longlong)*piVar5 * (longlong)piVar5[6];
      uVar3 = *(uint *)(param_1 + 0x140);
      trapWord(6,uVar8,0);
      uVar6 = (ulonglong)(uint)piVar5[8] -
              (longlong)(int)((ulonglong)(uint)piVar5[8] / (uVar8 & 0xffffffff)) *
              (longlong)(int)uVar8;
      uVar1 = (int)uVar8 / (int)uVar3;
      trapWord(6,(ulonglong)uVar3,0);
      trapWord(5,(ulonglong)uVar3 &
                 ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (uVar6 == 0) {
        uVar6 = uVar8;
      }
      if (iVar4 == 0) {
        uVar8 = uVar6 - 1;
        trapWord(6,(longlong)(int)uVar1,0);
        *(int *)(iVar2 + 0x48) = (int)uVar8 / (int)uVar1 + 1;
        trapWord(5,(longlong)(int)uVar1 &
                   ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      }
      lVar9 = ((ulonglong)uVar1 & 0x7fffffff) << 1;
      if (0 < (int)lVar9) {
        lVar10 = (uVar6 & 0x3fffffff) * 4 +
                 (ulonglong)
                 *(uint *)(*(int *)((*(int *)(iVar2 + 0x40) + 0xe) * 4 + iVar2) + iVar4 * 4);
        lVar7 = lVar10 + -4;
        do {
          lVar7 = lVar7 + 4;
          *(undefined4 *)lVar7 = *(undefined4 *)((int)lVar10 + -4);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  return;
}

