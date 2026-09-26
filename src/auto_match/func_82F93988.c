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
extern int fn_8265C990();
extern int fn_82F93A00();
extern unsigned int uStack00000014;


void fn_82F93988(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack00000014;
  
  uStack00000014 = param_1;
  iVar1 = fn_82F93A00(0xffffffff832641a4);
  if (iVar1 == 0) {
    fn_8265C990(uStack00000014,0x20ff4000);
  }
  else {
    piVar2 = (int *)fn_82F93A00(0xffffffff832641a4);
    (**(code **)(*piVar2 + 0xc))(piVar2,uStack00000014);
  }
  return;
}

