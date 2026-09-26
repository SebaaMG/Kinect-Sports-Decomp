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


undefined8 fn_82C078F0(int param_1,uint *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x228)) {
  case 1:
    uVar1 = 0x10;
    uVar2 = 0x32595559;
    break;
  case 2:
    uVar1 = 0x10;
    uVar2 = 0x59565955;
    break;
  case 3:
    uVar2 = 0x55590000;
    uVar1 = 0x10;
    goto LAB_82c07974;
  case 4:
    uVar2 = 0;
    uVar1 = 0x18;
    break;
  case 5:
    uVar2 = 0;
    uVar1 = 0x10;
    break;
  case 6:
    uVar2 = 3;
    uVar1 = 0x10;
    break;
  case 7:
    uVar2 = 0;
    uVar1 = 0x20;
    break;
  case 8:
    uVar2 = 0;
    uVar1 = 8;
    break;
  case 9:
    uVar1 = 0xc;
    uVar2 = 0x56555949;
    break;
  case 10:
    uVar1 = 0xc;
    uVar2 = 0x30323449;
    break;
  case 0xb:
    uVar2 = 3;
    uVar1 = 0xc;
    break;
  case 0xc:
    uVar2 = 0x32310000;
    uVar1 = 0xc;
LAB_82c07974:
    uVar2 = uVar2 | 0x5659;
    break;
  default:
    return 0xffffffff80070057;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar2;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = uVar1;
  }
  return 0;
}

