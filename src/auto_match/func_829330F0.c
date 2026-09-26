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
extern int fn_82930800();


undefined8 fn_829330F0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (((((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
      ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18) &&
       (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))) &&
     ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28) &&
      ((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c) &&
       (iVar1 = fn_82930800(param_1 + 0x30,param_2 + 0x30), iVar1 != 0)))))) {
    if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
      uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x10)) >> 5;
    }
    else {
      uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x10))();
    }
    if (uVar2 != 0) {
      if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
        uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x20)) >> 5;
      }
      else {
        uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x20))();
      }
      if (uVar2 != 0) {
        if (*(undefined4 **)(param_1 + 0x24) == (undefined4 *)0x0) {
          uVar2 = (uint)LZCOUNT(*(undefined4 *)(param_2 + 0x24)) >> 5;
        }
        else {
          uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x24))();
        }
        if (uVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

