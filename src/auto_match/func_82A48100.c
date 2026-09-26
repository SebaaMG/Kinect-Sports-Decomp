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
extern int fn_82A45808();
extern int fn_82A474B0();
extern int fn_82A47590();
extern unsigned int uStack_50;


void fn_82A48100(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uStack_50;
  
  if (*(int **)(param_1 + 0x20c) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1 + 0x20c);
  }
  uVar2 = *(uint *)(iVar6 + 0x10);
  uVar1 = *(uint *)(iVar6 + 0xc);
  uVar7 = 0;
  *(undefined1 *)(param_1 + 0x1d2) = 1;
  uVar4 = ((ulonglong)uVar2 + (ulonglong)uVar1) - 0x80;
  if (*(int *)(param_1 + 0x1c0) != 0) {
    uVar5 = (ulonglong)uStack_50;
    do {
      uVar2 = fn_82A474B0(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 4),uVar7,
                            (uVar4 & 0xffffffff) >> 9);
      if (uVar2 != 0) {
        uVar5 = (uVar4 & 0xffffffff) >> 7 & 3;
        uStack_50 = uVar2;
      }
      *(uint *)(param_1 + 0x1cc) = uStack_50;
      *(char *)(param_1 + 0x1d0) = (char)uVar5;
      uVar3 = fn_82A47590(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 4),uVar7);
      *(undefined4 *)(param_1 + 0x1c8) = uVar3;
      *(undefined1 *)(param_1 + 0x1d1) = 3;
      fn_82A45808(*(undefined4 *)(param_1 + 0x1d8),uVar7,(undefined4 *)(param_1 + 0x1c8));
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c0));
  }
  return;
}

