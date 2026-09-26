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
extern int fn_82647460();
extern int fn_82A1E2C0();
extern int fn_82A1E650();
extern int fn_82A1E658();


undefined8 fn_82C0E450(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x114))(param_1,4);
  (**(code **)(*param_1 + 0x118))(param_1,4);
  iVar1 = (**(code **)(*param_1 + 0xf4))(param_1);
  if ((iVar1 != 1) || (iVar1 = (**(code **)(*param_1 + 0xf8))(param_1), iVar1 != 1)) {
    (**(code **)(*param_1 + 0x60))(param_1);
    if (param_1[0x42] != 0) {
      fn_82A1E2C0();
      (**(code **)(*param_1 + 0xb4))(param_1);
    }
    if (param_1[0x43] != 0) {
      fn_82A1E2C0();
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    if (param_1[0x44] != 0) {
      fn_82A1E2C0();
      (**(code **)(*param_1 + 0xbc))(param_1);
    }
    if (param_1[0x45] != 0) {
      fn_82A1E2C0();
      (**(code **)(*param_1 + 0xc0))(param_1);
    }
  }
  if (param_1[0x42] != 0) {
    do {
      fn_82A1E2C0(param_1[0x42]);
      (**(code **)(*param_1 + 0xc4))(param_1);
      iVar1 = fn_82A1E650(param_1[0x42],1);
    } while (iVar1 == 0x102);
    fn_82A1E658(param_1[0x42]);
    param_1[0x42] = 0;
  }
  if (param_1[0x43] != 0) {
    do {
      fn_82A1E2C0(param_1[0x43]);
      (**(code **)(*param_1 + 200))(param_1);
      iVar1 = fn_82A1E650(param_1[0x43],1);
    } while (iVar1 == 0x102);
    fn_82A1E658(param_1[0x43]);
    param_1[0x43] = 0;
  }
  if (param_1[0x44] != 0) {
    do {
      fn_82A1E2C0(param_1[0x44]);
      (**(code **)(*param_1 + 0xcc))(param_1);
      iVar1 = fn_82A1E650(param_1[0x44],1);
    } while (iVar1 == 0x102);
    fn_82A1E658(param_1[0x44]);
    param_1[0x44] = 0;
  }
  if (param_1[0x45] != 0) {
    do {
      fn_82A1E2C0(param_1[0x45]);
      (**(code **)(*param_1 + 0xd0))(param_1);
      iVar1 = fn_82A1E650(param_1[0x45],1);
    } while (iVar1 == 0x102);
    fn_82A1E658(param_1[0x45]);
    param_1[0x45] = 0;
  }
  if (param_1[0xc] != 0) {
    fn_82647460();
    param_1[0xc] = 0;
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 8))();
    param_1[0xb] = 0;
  }
  (**(code **)(*param_1 + 0x9c))(param_1);
  return 0;
}

