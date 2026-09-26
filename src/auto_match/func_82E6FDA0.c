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


undefined8 fn_82E6FDA0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    iVar1 = *param_2;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
    uVar2 = (**(code **)(iVar1 + 0x34))(param_2,*(undefined2 *)(param_1 + 2),uVar2,uVar3);
  }
  return uVar2;
}

