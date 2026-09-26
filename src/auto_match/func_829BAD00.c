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


void fn_829BAD00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  
  iVar2 = *(int *)(param_1 + 0x1ac);
  iVar3 = *(int *)(param_1 + 0x140);
  iVar6 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 3);
  *(int *)(iVar2 + 0x38) = iVar6;
  iVar10 = 0;
  *(int *)(iVar2 + 0x3c) = *(int *)(param_1 + 0x24) * 4 + iVar6;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar6 = 0;
    piVar11 = (int *)(*(int *)(param_1 + 0xdc) + -0x30);
    do {
      piVar5 = piVar11 + 0xf;
      piVar11 = piVar11 + 0x15;
      uVar8 = (longlong)*piVar5 * (longlong)*piVar11;
      uVar4 = *(uint *)(param_1 + 0x140);
      iVar1 = (int)uVar8 / (int)uVar4;
      uVar9 = (longlong)(iVar3 + 4) * (longlong)iVar1;
      trapWord(6,(ulonglong)uVar4,0);
      trapWord(5,(ulonglong)uVar4 &
                 ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
      iVar7 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,(uVar9 & 0x1fffffff) << 3);
      iVar7 = iVar7 + iVar1 * 4;
      iVar10 = iVar10 + 1;
      *(int *)(*(int *)(iVar2 + 0x38) + iVar6) = iVar7;
      *(int *)(iVar6 + *(int *)(iVar2 + 0x3c)) = (int)((uVar9 & 0xffffffff) << 2) + iVar7;
      iVar6 = iVar6 + 4;
    } while (iVar10 < *(int *)(param_1 + 0x24));
  }
  return;
}

