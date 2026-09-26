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


undefined8 fn_8267E160(undefined4 *param_1,longlong param_2)

{
  char cVar2;
  undefined8 uVar1;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar3 = (uint)param_2;
  uVar5 = 0;
  puVar4 = param_1;
  if (uVar3 != 0) {
    do {
      cVar2 = (**(code **)(*(int *)*puVar4 + 8))();
      if (cVar2 == '\0') break;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar3);
  }
  if (uVar5 == uVar3) {
    if (uVar3 != 0) {
      param_1 = param_1 + -1;
      do {
        param_1 = param_1 + 1;
        (**(code **)(*(int *)*param_1 + 0xc))();
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    uVar1 = 1;
  }
  else {
    if (uVar5 != 0) {
      param_1 = param_1 + uVar5;
      do {
        param_1 = param_1 + -1;
        uVar5 = uVar5 - 1;
        (**(code **)(*(int *)*param_1 + 0x10))();
      } while (uVar5 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

