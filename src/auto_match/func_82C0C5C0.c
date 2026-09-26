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


undefined8 fn_82C0C5C0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0xc))();
  iVar1 = (**(code **)(*param_1 + 0xf4))(param_1);
  if ((iVar1 == 3) && (iVar1 = (**(code **)(*param_1 + 0xf8))(param_1), iVar1 == 3)) {
    (**(code **)(*param_1 + 0x114))(param_1,1);
    (**(code **)(*param_1 + 0x118))(param_1,1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80004005;
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  return uVar2;
}

