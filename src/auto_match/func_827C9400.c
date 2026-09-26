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


void fn_827C9400(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x184);
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar5 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    do {
      uVar9 = (longlong)*piVar5 * (longlong)piVar5[6];
      uVar3 = *(uint *)(param_1 + 0x118);
      trapWord(6,uVar9,0);
      uVar7 = (ulonglong)(uint)piVar5[8] -
              (longlong)(int)((ulonglong)(uint)piVar5[8] / (uVar9 & 0xffffffff)) *
              (longlong)(int)uVar9;
      iVar1 = (int)uVar9 / (int)uVar3;
      trapWord(6,(ulonglong)uVar3,0);
      trapWord(5,(ulonglong)uVar3 &
                 ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (uVar7 == 0) {
        uVar7 = uVar9;
      }
      if (iVar4 == 0) {
        uVar9 = uVar7 - 1;
        trapWord(6,(longlong)iVar1,0);
        *(int *)(iVar2 + 0x48) = (int)uVar9 / iVar1 + 1;
        trapWord(5,(longlong)iVar1 &
                   ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      }
      iVar10 = 0;
      if (iVar1 << 1 != 0) {
        lVar8 = (uVar7 & 0x3fffffff) * 4 +
                (ulonglong)
                *(uint *)(*(int *)((*(int *)(iVar2 + 0x40) + 0xe) * 4 + iVar2) + iVar4 * 4);
        lVar6 = lVar8 + -4;
        do {
          iVar10 = iVar10 + 1;
          lVar6 = lVar6 + 4;
          *(undefined4 *)lVar6 = *(undefined4 *)((int)lVar8 + -4);
        } while (iVar10 < iVar1 << 1);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  return;
}

