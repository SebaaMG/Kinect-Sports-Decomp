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


undefined8 fn_82F06BE8(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x1c28) < 1) {
    return 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_3[1];
    *param_4 = param_4[1];
  }
  puVar2 = param_2 + 2;
  if (*(int *)(param_1 + 0x1c28) != 1) {
    if (*(int *)(param_1 + 0x1c28) != 2) {
      uVar1 = param_2[6];
      param_2[4] = uVar1;
      *puVar2 = uVar1;
      *param_2 = uVar1;
      uVar1 = param_2[7];
      param_2[5] = uVar1;
      param_2[3] = uVar1;
      param_2[1] = uVar1;
      return 1;
    }
    uVar1 = param_2[4];
    *puVar2 = uVar1;
    *param_2 = uVar1;
    param_2[3] = param_2[5];
    param_2[1] = param_2[5];
    return 1;
  }
  *param_2 = *puVar2;
  param_2[1] = param_2[3];
  return 1;
}

