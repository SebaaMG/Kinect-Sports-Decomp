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


undefined8 fn_82BBD220(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 0:
  case 1:
  case 0x21:
  case 0x24:
    uVar2 = 0x20;
    break;
  case 2:
  case 8:
  case 9:
  case 0x2b:
    uVar2 = 8;
    break;
  case 3:
    uVar3 = 5;
    uVar2 = 1;
    goto code_r0x82bbd270;
  case 4:
    uVar3 = 5;
    *param_1 = 5;
    param_1[1] = 6;
    uVar1 = 3;
    param_1[3] = 0;
    goto code_r0x82bbd3b0;
  case 5:
    uVar3 = 5;
    uVar2 = 6;
    goto code_r0x82bbd2a8;
  case 6:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0x27:
  case 0x28:
  case 0x2c:
  case 0x2d:
  case 0x32:
    uVar2 = 8;
    goto code_r0x82bbd2f8;
  case 7:
  case 0x36:
    uVar3 = 10;
    uVar2 = 2;
code_r0x82bbd270:
    *param_1 = uVar3;
    uVar1 = 4;
    param_1[3] = uVar2;
    goto code_r0x82bbd3ac;
  case 10:
    uVar2 = 8;
    goto code_r0x82bbd2c8;
  default:
    uVar3 = 0;
    uVar1 = 0;
    goto code_r0x82bbd3a4;
  case 0xf:
    uVar3 = 4;
    uVar1 = 4;
code_r0x82bbd3a4:
    *param_1 = uVar3;
    goto code_r0x82bbd3a8;
  case 0x10:
  case 0x37:
    uVar3 = 0xb;
    uVar2 = 10;
code_r0x82bbd2a8:
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = 0;
    return 3;
  case 0x11:
  case 0x38:
    uVar3 = 0xb;
    *param_1 = 10;
    uVar1 = 3;
    param_1[3] = 0;
    goto code_r0x82bbd3ac;
  case 0x12:
  case 0x22:
  case 0x25:
  case 0x33:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
    uVar2 = 0x20;
    goto code_r0x82bbd2c8;
  case 0x13:
  case 0x14:
  case 0x23:
  case 0x26:
  case 0x31:
  case 0x34:
  case 0x35:
    uVar2 = 0x20;
    goto code_r0x82bbd2f8;
  case 0x16:
  case 0x17:
    uVar2 = 8;
    param_1[1] = 0x18;
    goto code_r0x82bbd2cc;
  case 0x18:
  case 0x1b:
  case 0x1e:
  case 0x29:
  case 0x2e:
  case 0x2f:
    uVar2 = 0x10;
    break;
  case 0x19:
  case 0x1c:
  case 0x1f:
  case 0x2a:
  case 0x30:
    uVar2 = 0x10;
code_r0x82bbd2c8:
    param_1[1] = uVar2;
code_r0x82bbd2cc:
    uVar3 = 0;
    *param_1 = uVar2;
    uVar1 = 2;
    param_1[3] = 0;
    goto code_r0x82bbd3b0;
  case 0x1a:
  case 0x1d:
  case 0x20:
    uVar2 = 0x10;
code_r0x82bbd2f8:
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    return 4;
  case 0x39:
    *param_1 = 0x20;
    param_1[1] = 0x20;
    param_1[2] = 0x20;
    param_1[3] = 0;
    return 3;
  }
  uVar3 = 0;
  *param_1 = uVar2;
  uVar1 = 1;
code_r0x82bbd3a8:
  param_1[3] = uVar3;
code_r0x82bbd3ac:
  param_1[1] = uVar3;
code_r0x82bbd3b0:
  param_1[2] = uVar3;
  return uVar1;
}

