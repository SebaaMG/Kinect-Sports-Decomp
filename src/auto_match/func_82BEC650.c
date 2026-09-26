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
extern int fn_82BE6720();
extern int fn_82BE67E0();
extern int fn_82BE6A00();
extern int fn_82BE6C60();
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;


undefined8 fn_82BEC650(undefined8 param_1)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82BE67E0(param_1,lbl_8322B1C8,1);
  if ((((iVar2 == 0) || (iVar2 = fn_82BE6720(param_1,0x2b,1), iVar2 == 0)) ||
      (iVar2 = fn_82BE67E0(param_1,lbl_8322B1D0,1), iVar2 == 0)) ||
     ((iVar2 = fn_82BE6720(param_1,0x2a,1), iVar2 == 0 ||
      (iVar2 = fn_82BE6A00(param_1), iVar2 == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BE6C60(param_1,0xd8,1,1);
  }
  return uVar1;
}

