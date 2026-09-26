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


void fn_8304C908(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar3 = *(uint *)(iVar1 + 0xd0);
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(byte *)(iVar1 + 0xdb) = *(byte *)(iVar1 + 0xdb) & 0x7f;
                    /* WARNING: Could not recover jumptable at 0x8304c94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x20))
            (*(int **)(param_1 + 0x10),((ulonglong)uVar3 * (ulonglong)uVar2) / 48000 & 0xffffffff);
  return;
}

