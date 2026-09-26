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
extern int fn_82A5C0A8();


undefined8 fn_82A4B0D8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)(param_1 + 0x54);
  (**(code **)(*(int *)(param_1 + 0x54) + 8))(piVar2);
  puVar4 = *(undefined4 **)(param_1 + 0x144);
  uVar3 = 0;
  while ((puVar4 != (undefined4 *)0x0 && (-1 < (int)uVar3))) {
    if (puVar4 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar4;
      puVar4 = (undefined4 *)puVar4[1];
    }
    uVar3 = fn_82A5C0A8(uVar1,param_2,param_3);
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  return uVar3;
}

