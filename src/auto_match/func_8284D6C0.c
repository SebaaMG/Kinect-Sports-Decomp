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
extern int fn_82815578();
extern int fn_82849D18();


void fn_8284D6C0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 300) != 0) {
    iVar3 = 0;
    do {
      fn_82815578(*(undefined4 *)(iVar3 + *(int *)(param_2 + 0x4c) + 4));
      iVar1 = iVar3 + *(int *)(param_2 + 0x4c);
      if (*(int *)(iVar1 + 0xc) != 0) {
        fn_82849D18(*(undefined4 *)(iVar1 + 8));
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 300));
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    (**(code **)(param_3 + 0x2c))();
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    (**(code **)(param_3 + 0x1c))();
  }
  (**(code **)(param_3 + 0xc))(param_2);
  return;
}

