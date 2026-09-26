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
extern int fn_82FA96C8();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_82FAD280(int param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack00000024;
  
  uStack00000024 = param_3;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    param_2 = (ulonglong)*(uint *)(iVar1 + 0xc) + param_2;
    fn_82FA96C8(iVar1,param_2,&stack0x00000024,0);
  }
  return;
}

