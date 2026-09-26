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
extern int fn_82F68B40();
extern int fn_82F68B48();
extern int fn_82F68B4C();
extern int fn_82F68B5C();
extern int fn_82F68B60();
extern int fn_82F68B64();
extern int fn_82F68B70();
extern int fn_82F68B74();
extern int fn_82F68B78();


undefined8 fn_82DA7910(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  switch(*param_2) {
  case 0:
    uVar1 = fn_82F68B48(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 1:
    uVar1 = fn_82F68B78(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  default:
    return 1;
  case 3:
    uVar1 = fn_82F68B64(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 4:
    uVar1 = fn_82F68B60(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 5:
    uVar1 = fn_82F68B74(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 6:
    uVar1 = fn_82F68B70(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 7:
    uVar1 = fn_82F68B78(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 8:
    uVar1 = fn_82F68B78(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 9:
    uVar1 = fn_82F68B78(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 10:
    uVar1 = fn_82F68B78(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xb:
    uVar1 = fn_82F68B70(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xc:
    uVar1 = fn_82F68B4C(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xd:
  case 0xf:
    uVar1 = fn_82F68B40(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xe:
    uVar1 = fn_82F68B5C(*(undefined4 *)(param_2 + 0x1c),param_1);
    return uVar1;
  }
}

