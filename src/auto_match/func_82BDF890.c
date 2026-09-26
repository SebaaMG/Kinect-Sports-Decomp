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


undefined8 fn_82BDF890(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    if (param_2 == 1) {
switchD_82bdf8e0_caseD_19:
      uVar1 = 16000;
      goto LAB_82bdfaf4;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 5;
      }
      goto switchD_82bdf8e0_caseD_3a;
    }
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return 6;
      }
      switch(param_2) {
      case 1:
        uVar1 = 0x2580;
        break;
      case 2:
        uVar1 = 12000;
        break;
      case 3:
        uVar1 = 0x3840;
        break;
      case 4:
        uVar1 = 0x41a0;
        break;
      case 5:
        uVar1 = 0x4b00;
        break;
      case 6:
        uVar1 = 0x5460;
        break;
      case 7:
        goto switchD_82bdf8e0_caseD_7;
      case 8:
        uVar1 = 0x6720;
        break;
      case 9:
        uVar1 = 0x7080;
        break;
      case 10:
        uVar1 = 0x79e0;
        break;
      default:
        return 5;
      case 0xc:
        uVar1 = 10000;
        break;
      case 0xd:
        uVar1 = 0x28a0;
        break;
      case 0xe:
        uVar1 = 0x2a30;
        break;
      case 0xf:
        uVar1 = 0x2bc0;
        break;
      case 0x10:
        uVar1 = 0x2d50;
        break;
      case 0x11:
        uVar1 = 0x3070;
        break;
      case 0x12:
        uVar1 = 0x3200;
        break;
      case 0x13:
        uVar1 = 0x3390;
        break;
      case 0x14:
        uVar1 = 0x3520;
        break;
      case 0x15:
        uVar1 = 14000;
        break;
      case 0x16:
        uVar1 = 0x39d0;
        break;
      case 0x17:
        uVar1 = 0x3b60;
        break;
      case 0x18:
        uVar1 = 0x3cf0;
        break;
      case 0x19:
        goto switchD_82bdf8e0_caseD_19;
      case 0x1a:
        uVar1 = 0x4010;
        break;
      case 0x1b:
        uVar1 = 0x4330;
        break;
      case 0x1c:
        uVar1 = 0x44c0;
        break;
      case 0x1d:
        uVar1 = 18000;
        break;
      case 0x1e:
        uVar1 = 0x47e0;
        break;
      case 0x1f:
        uVar1 = 0x4970;
        break;
      case 0x20:
        uVar1 = 0x4c90;
        break;
      case 0x21:
        uVar1 = 20000;
        break;
      case 0x22:
        uVar1 = 0x4fb0;
        break;
      case 0x23:
        uVar1 = 0x5140;
        break;
      case 0x24:
        uVar1 = 0x52d0;
        break;
      case 0x25:
        uVar1 = 22000;
        break;
      case 0x26:
        uVar1 = 0x5780;
        break;
      case 0x27:
        uVar1 = 0x5910;
        break;
      case 0x28:
        uVar1 = 0x5aa0;
        break;
      case 0x29:
        uVar1 = 0x5c30;
        break;
      case 0x2a:
        uVar1 = 0x5f50;
        break;
      case 0x2b:
        uVar1 = 0x60e0;
        break;
      case 0x2c:
        uVar1 = 0x6270;
        break;
      case 0x2d:
        uVar1 = 0x6400;
        break;
      case 0x2e:
        uVar1 = 26000;
        break;
      case 0x2f:
        uVar1 = 0x68b0;
        break;
      case 0x30:
        uVar1 = 0x6a40;
        break;
      case 0x31:
        uVar1 = 0x6bd0;
        break;
      case 0x32:
        uVar1 = 28000;
        break;
      case 0x33:
        uVar1 = 0x6ef0;
        break;
      case 0x34:
        uVar1 = 0x7210;
        break;
      case 0x35:
        uVar1 = 0x73a0;
        break;
      case 0x36:
        uVar1 = 30000;
        break;
      case 0x37:
        uVar1 = 0x76c0;
        break;
      case 0x38:
        uVar1 = 0x7850;
        break;
      case 0x39:
        uVar1 = 0x7b70;
        break;
      case 0x3a:
        goto switchD_82bdf8e0_caseD_3a;
      case 0x3b:
        uVar1 = 0x2260;
      }
      goto LAB_82bdfaf4;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (param_2 != 3) {
          return 5;
        }
        uVar1 = 48000;
        goto LAB_82bdfaf4;
      }
switchD_82bdf8e0_caseD_3a:
      uVar1 = 32000;
      goto LAB_82bdfaf4;
    }
  }
switchD_82bdf8e0_caseD_7:
  uVar1 = 24000;
LAB_82bdfaf4:
  *param_3 = uVar1;
  return 0;
}

