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
extern int fn_82810360();
extern int fn_82862178();
extern unsigned int lbl_832116B4;
extern unsigned int lbl_832116CC;
extern unsigned int lbl_832116D0;
extern unsigned int lbl_832116D4;
extern unsigned int lbl_832116D8;


void fn_82864528(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_82862178();
  lbl_832116B4 = param_2;
  fn_82810360(iVar1,0xffffffff832116c0);
  lbl_832116CC = *(undefined4 *)(iVar1 + 0xc);
  lbl_832116D0 = *(undefined4 *)(iVar1 + 0x10);
  lbl_832116D4 = *(undefined4 *)(iVar1 + 0x14);
  lbl_832116D8 = *(undefined4 *)(iVar1 + 0x18);
  return;
}

