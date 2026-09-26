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
extern int fn_828AA110();


void fn_828AA188(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((puVar1 <= param_2) || (bVar3 = true, param_2 < (undefined8 *)*param_1)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *param_1;
    if (puVar1 == (undefined8 *)param_1[2]) {
      fn_828AA110(param_1,1);
    }
    puVar1 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)(((int)((int)param_2 - uVar2) >> 4) * 0x10 + *param_1);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
    }
  }
  else {
    if (puVar1 == (undefined8 *)param_1[2]) {
      fn_828AA110(param_1,1);
    }
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
    }
  }
  param_1[1] = param_1[1] + 0x10;
  return;
}

