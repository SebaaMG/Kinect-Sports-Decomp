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


void fn_824B1880(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_1[1] - *param_1 >> 5 != param_1[4]) {
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
    }
    iVar2 = param_1[3];
    param_1[3] = iVar2 + 0x20;
    if (iVar2 + 0x20 == param_1[1]) {
      param_1[3] = *param_1;
    }
    param_1[4] = param_1[4] + 1;
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  puVar1 = (undefined8 *)param_1[3];
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = param_1[3];
  param_1[3] = iVar2 + 0x20;
  if (iVar2 + 0x20 == param_1[1]) {
    param_1[3] = *param_1;
  }
  param_1[2] = param_1[3];
  return;
}

