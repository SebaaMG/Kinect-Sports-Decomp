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
extern int fn_82CE4118();
extern int fn_82D813C0();
extern int fn_82D81690();
extern int fn_82DC82C8();


void fn_82DB3FD0(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  lVar2 = (ulonglong)*(uint *)(iVar1 + 0x10) - 1;
  *(int *)(iVar1 + 0x10) = (int)lVar2;
  if (lVar2 == 0) {
    fn_82DC82C8(iVar1 + 0x14,param_1);
    fn_82D813C0(param_1,iVar1 + 8);
    fn_82D81690(param_1,iVar1 + 0xc);
    fn_82CE4118(iVar1);
  }
  return;
}

