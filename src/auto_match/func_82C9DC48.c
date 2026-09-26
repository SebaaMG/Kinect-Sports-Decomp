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


void fn_82C9DC48(int param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 1:
    uVar1 = 4;
    param_2 = param_2 + 0xc;
    break;
  case 2:
    uVar1 = 4;
    param_2 = param_2 + 8;
    break;
  case 3:
    uVar1 = 8;
    param_2 = param_2 + 8;
    break;
  case 4:
    uVar1 = 4;
    param_2 = param_2 + 4;
    break;
  case 5:
    (**(code **)(param_1 + 0x3e38))(param_2 + 4,param_4,param_5,4);
    (**(code **)(param_1 + 0x3e38))(param_2 + 0xc,param_4,param_5,4);
    return;
  case 6:
    uVar1 = 8;
    param_2 = param_2 + 4;
    break;
  case 7:
    uVar1 = 0xc;
    param_2 = param_2 + 4;
    break;
  case 8:
    uVar1 = 4;
    break;
  case 9:
    (**(code **)(param_1 + 0x3e38))(param_2,param_4,param_5,4);
    (**(code **)(param_1 + 0x3e38))(param_2 + 0xc,param_4,param_5,4);
    return;
  case 10:
    (**(code **)(param_1 + 0x3e38))(param_2,param_4,param_5,4);
    (**(code **)(param_1 + 0x3e38))(param_2 + 8,param_4,param_5,4);
    return;
  case 0xb:
    (**(code **)(param_1 + 0x3e38))(param_2,param_4,param_5,4);
    (**(code **)(param_1 + 0x3e38))(param_2 + 8,param_4,param_5,8);
    return;
  case 0xc:
    uVar1 = 8;
    break;
  case 0xd:
    (**(code **)(param_1 + 0x3e38))(param_2,param_4,param_5,8);
    (**(code **)(param_1 + 0x3e38))(param_2 + 0xc,param_4,param_5,4);
    return;
  case 0xe:
    uVar1 = 0xc;
    break;
  case 0xf:
    uVar1 = 0x10;
    break;
  default:
    goto switchD_82f20fb0_default;
  }
  (**(code **)(param_1 + 0x3e38))(param_2,param_4,param_5,uVar1);
switchD_82f20fb0_default:
  return;
}

