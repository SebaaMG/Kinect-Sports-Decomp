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
extern int fn_8267C498();
extern int fn_826C90C8();
extern int fn_82700248();
extern unsigned int uStack_24;


void fn_826CC448(int param_1)

{
  int iVar1;
  undefined4 uStack_24;
  
  if ((*(byte *)(param_1 + 0x1cc) & 8) == 0) {
    *(byte *)(param_1 + 0x1cc) = *(byte *)(param_1 + 0x1cc) | 8;
    fn_826C90C8(param_1,0);
    uStack_24 = ((((U64)(uStack_24)) & (~(((U64)0xFFFFFF) << 8))) | ((((U64)((((U64)(uStack_24) >> 8) & 0xFFFFFF) & 0xffff)) & ((U64)0xFFFFFF)) << 8));
    uStack_24 = (uint)(((U64)(uStack_24) >> 8) & 0xFFFFFF);
    iVar1 = fn_82700248((ulonglong)*(uint *)(param_1 + 0xa0) + 0xa2c,5);
    *(undefined4 *)(iVar1 + 4) = 2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(int *)(iVar1 + 8) != 0) {
      fn_8267C498();
    }
    *(int *)(iVar1 + 8) = param_1;
    if (*(int *)(iVar1 + 0xc) != 0) {
      fn_8267C498();
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0xff;
    *(uint *)(iVar1 + 0x1c) = uStack_24;
  }
  return;
}

