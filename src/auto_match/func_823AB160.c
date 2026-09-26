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


undefined8 fn_823AB160(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x7c))(param_1,param_3);
    if ((param_4 != iVar2) && (iVar2 = (**(code **)(*param_1 + 0x6c))(param_1,param_3), iVar2 == 0))
    {
      param_1[0xc] = 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

