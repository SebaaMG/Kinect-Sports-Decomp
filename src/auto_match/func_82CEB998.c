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


undefined8 fn_82CEB998(int param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar2 = *(int *)(param_1 + 0xc) + param_2;
    }
    else {
      iVar2 = -1;
      if (param_3 < 3) {
        iVar2 = *(int *)(param_1 + 0x10) - param_2;
      }
    }
  }
  uVar1 = 0;
  if (iVar2 < 0) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x10) < iVar2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10);
    return 1;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return uVar1;
}

