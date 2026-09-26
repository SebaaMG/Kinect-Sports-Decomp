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


undefined8 fn_82BBD3B8(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 2:
  case 8:
  case 9:
    uVar2 = 8;
    break;
  case 3:
    uVar3 = 5;
    uVar2 = 1;
    goto LAB_82bbd40c;
  case 4:
    uVar3 = 5;
    *param_1 = 5;
    param_1[1] = 6;
    uVar1 = 3;
    param_1[3] = 0;
    goto LAB_82bbd51c;
  case 5:
    uVar3 = 5;
    uVar2 = 6;
    goto LAB_82bbd444;
  case 6:
  case 0xe:
    uVar2 = 8;
    goto LAB_82bbd494;
  case 7:
    uVar3 = 10;
    uVar2 = 2;
LAB_82bbd40c:
    *param_1 = uVar3;
    uVar1 = 4;
    param_1[3] = uVar2;
    goto LAB_82bbd518;
  case 10:
    uVar2 = 8;
    goto LAB_82bbd464;
  default:
    uVar3 = 0;
    uVar1 = 0;
    goto LAB_82bbd510;
  case 0xf:
    uVar3 = 4;
    uVar1 = 4;
LAB_82bbd510:
    *param_1 = uVar3;
    goto LAB_82bbd514;
  case 0x10:
    uVar3 = 0xb;
    uVar2 = 10;
LAB_82bbd444:
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = 0;
    return 3;
  case 0x11:
    uVar3 = 0xb;
    *param_1 = 10;
    uVar1 = 3;
    param_1[3] = 0;
    goto LAB_82bbd518;
  case 0x18:
  case 0x1e:
    uVar2 = 0x10;
    break;
  case 0x19:
  case 0x1f:
    uVar2 = 0x10;
    goto LAB_82bbd464;
  case 0x1a:
  case 0x20:
    uVar2 = 0x10;
    goto LAB_82bbd494;
  case 0x24:
    uVar2 = 0x20;
    break;
  case 0x25:
    uVar2 = 0x20;
LAB_82bbd464:
    uVar3 = 0;
    *param_1 = uVar2;
    uVar1 = 2;
    param_1[1] = uVar2;
    param_1[3] = 0;
    goto LAB_82bbd51c;
  case 0x26:
    uVar2 = 0x20;
LAB_82bbd494:
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    return 4;
  }
  uVar3 = 0;
  *param_1 = uVar2;
  uVar1 = 1;
LAB_82bbd514:
  param_1[3] = uVar3;
LAB_82bbd518:
  param_1[1] = uVar3;
LAB_82bbd51c:
  param_1[2] = uVar3;
  return uVar1;
}

