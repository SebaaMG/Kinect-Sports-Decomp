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


undefined8 fn_82C0C690(int *param_1)

{
  int iVar2;
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0xc))();
  iVar2 = (**(code **)(*param_1 + 0xf4))(param_1);
  if ((iVar2 == 5) && (iVar2 = (**(code **)(*param_1 + 0xf8))(param_1), iVar2 == 5)) {
    uVar1 = (**(code **)(*(int *)param_1[0xb] + 0x68))();
    (**(code **)(*param_1 + 0x120))(param_1,1);
    (**(code **)(*param_1 + 0x124))(param_1,1);
    (**(code **)(*param_1 + 0xc4))(param_1);
    (**(code **)(*param_1 + 200))(param_1);
    (**(code **)(*param_1 + 0xcc))(param_1);
    (**(code **)(*param_1 + 0xd0))(param_1);
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  return uVar1;
}

