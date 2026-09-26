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


undefined8 fn_82C0D268(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0xf4))();
  if ((iVar1 != 1) || (iVar1 = (**(code **)(*param_1 + 0xf8))(param_1), iVar1 != 1)) {
    (**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*param_1 + 0xb4))(param_1);
    (**(code **)(*param_1 + 0xb8))(param_1);
    (**(code **)(*param_1 + 0xbc))(param_1);
    (**(code **)(*param_1 + 0xc0))(param_1);
    (**(code **)(*param_1 + 0xc))(param_1);
    uVar2 = (**(code **)(*(int *)param_1[0xb] + 0x54))();
    (**(code **)(*param_1 + 0x14))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  (**(code **)(*param_1 + 0x120))(param_1,0xffffffffffffffff);
  (**(code **)(*param_1 + 0x124))(param_1,0xffffffffffffffff);
  (**(code **)(*param_1 + 0x108))(param_1,1);
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 1;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x40] = 0;
  (**(code **)(*param_1 + 0xe4))(param_1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0xec))(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*param_1 + 0x14))(param_1);
  return uVar2;
}

