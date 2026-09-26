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


undefined1 * fn_82DBE718(undefined1 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar2 = 1;
    break;
  default:
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}

