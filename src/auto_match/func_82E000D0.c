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


longlong fn_82E000D0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = param_1[5];
  lVar4 = 0;
  if (0 < iVar1) {
    uVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x34))(param_1,uVar3);
      lVar4 = lVar2 + lVar4;
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < iVar1);
  }
  return lVar4;
}

