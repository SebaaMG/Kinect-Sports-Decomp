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
extern int fn_8265C9E0();
extern int fn_8289E318();
extern int fn_828A7268();
extern int fn_828A7CE0();
extern int fn_82BA02A8();


undefined4 * fn_828A7F70(undefined4 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_8265C9E0(0x20);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828A7268(uVar1,param_2);
  }
  *param_1 = (int)uVar2;
  fn_828A7CE0(param_1 + 1,uVar2);
  fn_82BA02A8(param_1,uVar2,uVar2);
  uVar2 = fn_8265C9E0(1);
  param_1[2] = (int)uVar2;
  fn_8289E318(param_1 + 3,uVar2);
  fn_82BA02A8(param_1 + 2,uVar2,uVar2);
  return param_1;
}

