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
extern int fn_83007E90();
extern int fn_830195D8();
extern int fn_83035960();
extern int fn_83036218();
extern int fn_830362B8();


undefined8 fn_83035DB8(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  
  for (puVar1 = *(uint **)(param_1 + 0x10);
      (puVar1 != *(uint **)(param_1 + 0x14) && ((ulonglong)*puVar1 != (param_2 & 0xffffffff)));
      puVar1 = puVar1 + 6) {
  }
  if (puVar1 == *(uint **)(param_1 + 0x14)) {
    puVar1 = (uint *)fn_83036218(param_1 + 0x10,param_2);
    if (puVar1 == (uint *)0x0) {
      return 0x34;
    }
    *puVar1 = (uint)param_2;
    uVar2 = fn_83035960(puVar1,param_1);
    if ((int)uVar2 != 1) {
      fn_830362B8(param_1 + 0x10,param_2);
      return uVar2;
    }
  }
  else {
    puVar1 = puVar1 + 1;
    uVar2 = 1;
  }
  if ((param_4 & 0xffffffff) == 0) {
    fn_83007E90(puVar1 + 2);
  }
  else {
    uVar2 = fn_830195D8(puVar1 + 2,param_3,param_4,1);
  }
  if ((int *)puVar1[1] != (int *)0x0) {
    (**(code **)(*(int *)puVar1[1] + 0x50))();
  }
  return uVar2;
}

