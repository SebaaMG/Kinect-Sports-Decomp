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
extern int fn_82F68B6C();


void fn_8239C118(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 0xffffffff821b4c08;
    break;
  case 1:
    uVar1 = 0xffffffff821b4c1c;
    break;
  case 2:
    uVar1 = 0xffffffff821b4c30;
    break;
  case 3:
    uVar1 = 0xffffffff821b4c48;
    break;
  case 4:
    uVar1 = 0xffffffff821b4c60;
    break;
  case 5:
    uVar1 = 0xffffffff821b4c78;
    break;
  case 6:
    uVar1 = 0xffffffff821b4c90;
    break;
  case 7:
    uVar1 = 0xffffffff821b4cac;
    break;
  case 8:
    uVar1 = 0xffffffff821b4cc8;
    break;
  case 9:
    uVar1 = 0xffffffff821b4cdc;
    break;
  case 10:
    uVar1 = 0xffffffff821b4cf4;
    break;
  case 0xb:
    uVar1 = 0xffffffff821b4d00;
    break;
  case 0xc:
    uVar1 = 0xffffffff821b4d18;
    break;
  case 0xd:
    uVar1 = 0xffffffff821b4d24;
    break;
  case 0xe:
    uVar1 = 0xffffffff821b4d34;
    break;
  case 0xf:
    uVar1 = 0xffffffff821b4d48;
    break;
  case 0x10:
    uVar1 = 0xffffffff821b4d60;
    break;
  case 0x11:
    uVar1 = 0xffffffff821b4d74;
    break;
  case 0x12:
    uVar1 = 0xffffffff821b4d98;
    break;
  case 0x13:
    uVar1 = 0xffffffff821b4da8;
    break;
  case 0x14:
    uVar1 = 0xffffffff821b4dc0;
    break;
  case 0x15:
    uVar1 = 0xffffffff821b4de0;
    break;
  case 0x16:
    uVar1 = 0xffffffff821b4df4;
    break;
  case 0x17:
    uVar1 = 0xffffffff821b4e08;
    break;
  case 0x18:
    uVar1 = 0xffffffff821b4e1c;
    break;
  case 0x19:
    uVar1 = 0xffffffff821b4e30;
    break;
  case 0x1a:
    uVar1 = 0xffffffff821b4e48;
    break;
  case 0x1b:
    uVar1 = 0xffffffff821b4e60;
    break;
  case 0x1c:
    uVar1 = 0xffffffff821b4e78;
    break;
  case 0x1d:
    uVar1 = 0xffffffff821b4e90;
    break;
  case 0x1e:
    uVar1 = 0xffffffff821b4ea8;
    break;
  case 0x1f:
    uVar1 = 0xffffffff821b4ebc;
    break;
  case 0x20:
    uVar1 = 0xffffffff821b4ed0;
    break;
  case 0x21:
    uVar1 = 0xffffffff821b4ee4;
    break;
  case 0x22:
    uVar1 = 0xffffffff821b4f00;
    break;
  case 0x23:
    uVar1 = 0xffffffff821b4f14;
    break;
  case 0x24:
    uVar1 = 0xffffffff821b4f34;
    break;
  case 0x25:
    uVar1 = 0xffffffff821b4f4c;
    break;
  case 0x26:
    uVar1 = 0xffffffff821b4f64;
    break;
  case 0x27:
    uVar1 = 0xffffffff821b4f84;
    break;
  case 0x28:
    uVar1 = 0xffffffff821b4f9c;
    break;
  case 0x29:
    uVar1 = 0xffffffff821b4fb4;
    break;
  case 0x2a:
    uVar1 = 0xffffffff821b4fcc;
    break;
  case 0x2b:
    uVar1 = 0xffffffff821b4fe0;
    break;
  case 0x2c:
    uVar1 = 0xffffffff821b4ff8;
    break;
  case 0x2d:
    uVar1 = 0xffffffff821b5014;
    break;
  case 0x2e:
    uVar1 = 0xffffffff821b502c;
    break;
  case 0x2f:
    uVar1 = 0xffffffff821b5044;
    break;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    if (param_2 < 0x23) {
      return;
    }
    if (0x28 < param_2) {
      return;
    }
  }
  fn_82F68B6C(*(undefined4 *)(param_1 + 0xa4),uVar1,0);
  return;
}

