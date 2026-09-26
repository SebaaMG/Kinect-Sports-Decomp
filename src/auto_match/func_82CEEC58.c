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
extern int fn_82CEEDF8();
extern int fn_82CFD5A8();


undefined1 * fn_82CEEC58(undefined1 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if ((*(ushort *)(param_2 + 0x10) >> 9 & 1) == 0) {
    switch(*(undefined1 *)(param_2 + 0xc)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x15:
    case 0x18:
    case 0x1e:
    case 0x1f:
    case 0x20:
      break;
    default:
      uVar2 = 0;
      goto LAB_82ceed50;
    case 0x19:
      uVar1 = fn_82CFD5A8(param_2);
      fn_82CEEDF8(param_1,uVar1);
      return param_1;
    }
  }
  uVar2 = 1;
LAB_82ceed50:
  *param_1 = uVar2;
  return param_1;
}

