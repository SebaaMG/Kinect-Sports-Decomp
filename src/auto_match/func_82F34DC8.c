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


undefined8 fn_82F34DC8(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    iVar1 = param_1[0x4f];
    param_1[0x4f] = iVar1 + 1;
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,iVar1);
    if ((int)uVar2 < 0) {
      param_1[0x4f] = param_1[0x4f] + -1;
    }
  }
  return uVar2;
}

