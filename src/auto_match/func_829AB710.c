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
extern int fn_829AB4E8();


undefined8 fn_829AB710(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[0x6e] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    uVar1 = (**(code **)param_1[0x6e])(param_1);
    if ((int)uVar1 == 1) {
      fn_829AB4E8(param_1);
      param_1[5] = 0xca;
    }
    break;
  case 0xca:
    uVar1 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    uVar1 = (**(code **)param_1[0x6e])(param_1);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  return uVar1;
}

