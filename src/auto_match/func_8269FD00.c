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
extern int fn_8269F500();


longlong fn_8269FD00(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)(uint)param_1[0x20];
  if (param_1[0x20] == 0) {
    uVar1 = fn_8269F500(param_1);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = (ulonglong)(uint)param_1[0x20];
    if (param_1[0x20] == 0) {
      uVar1 = fn_8269F500(param_1);
    }
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = (**(code **)(*param_1 + 0x58))(param_1);
      lVar2 = (ulonglong)*(uint *)(iVar3 + 0x78) + 8;
    }
    else {
      lVar2 = uVar1 + 8;
    }
  }
  else {
    lVar2 = uVar1 + 0x10;
  }
  return lVar2;
}

