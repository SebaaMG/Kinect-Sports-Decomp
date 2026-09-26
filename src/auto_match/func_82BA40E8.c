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
extern int fn_82AB15D0();
extern int fn_82B9B590();
extern int fn_82BA0B10();


void fn_82BA40E8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = (**(code **)(**(int **)(iVar2 + 0x5d0) + 0x1c))();
  iVar2 = fn_82B9B590(*(undefined4 *)(param_1 + 0x10),0,uVar1,0xffffffff82b7c800,iVar2);
  if (iVar2 == 1) {
    fn_82BA0B10(param_1);
  }
  else if (iVar2 == 3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820deb50,0x229);
  }
  return;
}

