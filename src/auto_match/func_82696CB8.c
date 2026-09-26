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
extern int fn_82696480();
extern int fn_82696BC8();


void fn_82696CB8(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 8))(param_2);
  if ((iVar2 < 2) || (bVar1 = true, 5 < iVar2)) {
    bVar1 = false;
  }
  if (bVar1) {
    fn_82696480(param_1,param_2 + -0x1a);
  }
  else {
    fn_82696BC8(param_1,param_2 + -4);
  }
  return;
}

