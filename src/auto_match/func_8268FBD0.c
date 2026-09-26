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
extern int fn_82F63CA0();


void fn_8268FBD0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 8);
  iVar4 = param_2 * 0xc + param_1;
  uVar2 = *(int *)(param_1 + 0xc) + 3;
  iVar1 = *(uint *)(param_1 + 8) * 8 + *(uint *)(iVar4 + 0x20);
  (**(code **)(**(int **)(param_1 + 4) + 0x10))
            (*(int **)(param_1 + 4),
             ((ulonglong)*(uint *)(iVar4 + 0x1c) -
             (((iVar1 - 1U >> (uVar2 & 0x3f)) + uVar3) - 1 & ~(uVar3 - 1))) +
             (ulonglong)*(uint *)(iVar4 + 0x20),
             ((iVar1 - 1U >> (uVar2 & 0x3f)) + uVar3) - 1 & ~(uVar3 - 1));
  (**(code **)(**(int **)(param_1 + 4) + 8))
            (*(int **)(param_1 + 4),*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x20));
  if (param_2 + 1U < *(uint *)(param_1 + 0x19c)) {
    fn_82F63CA0(iVar4 + 0x1c,iVar4 + 0x28,((*(uint *)(param_1 + 0x19c) - param_2) + -1) * 0xc);
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  return;
}

