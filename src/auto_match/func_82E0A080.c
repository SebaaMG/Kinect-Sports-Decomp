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
extern int fn_82CFBBF0();


longlong fn_82E0A080(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14)) {
    lVar3 = 0;
    do {
      iVar1 = fn_82CFBBF0(lVar3 + (ulonglong)*(uint *)(param_1 + 0x20),param_2);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while ((int)lVar2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x14));
  }
  return -1;
}

