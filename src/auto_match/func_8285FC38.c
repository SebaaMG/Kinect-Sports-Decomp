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
extern int fn_82859E28();
extern int fn_8285FBC0();
extern int iRam8321161c;
extern unsigned int uRam832115d0;
extern unsigned int uRam832115d4;
extern unsigned int uRam832115d8;
extern unsigned int uRam832115dc;
extern unsigned int uRam832115e0;
extern unsigned int uRam8321160c;
extern unsigned int uRam83211610;
extern unsigned int uRam83211614;
extern unsigned int uRam83211618;


void fn_8285FC38(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_82859E28();
  uRam832115d0 = *(undefined4 *)(param_1 + 0x34);
  uRam832115d4 = (undefined4)param_2;
  uRam832115d8 = *(undefined4 *)(param_1 + 0x2c);
  uRam832115dc = *(undefined4 *)(param_1 + 0x30);
  uRam8321160c = *puVar1;
  uRam832115e0 = **(uint **)(param_1 + 0x34) >> 0x1f;
  iRam8321161c = *(int *)(param_1 + 0x44);
  if (iRam8321161c == 0) {
    uRam83211614 = 0;
    uRam83211618 = 0;
  }
  else {
    uRam83211614 = *(undefined4 *)(iRam8321161c + 0x44);
    uRam83211618 = *(undefined4 *)(iRam8321161c + 0x48);
  }
  uRam83211610 = param_3;
  fn_8285FBC0(param_1,param_2);
  return;
}

