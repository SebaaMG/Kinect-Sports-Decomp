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


undefined8 fn_822CF640(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_2 == 6) {
    return 2;
  }
  if (param_2 == 7) {
    return 3;
  }
  iVar1 = *(int *)(param_1 + 0x1c8);
  if ((iVar1 < 0) || ((1 < iVar1 && ((iVar1 < 4 || (5 < iVar1)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((param_2 < 0) || ((1 < param_2 && ((param_2 < 4 || (5 < param_2)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (iVar1 == 0) {
    if (bVar3) {
      return 4;
    }
    return 1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 4) {
      return 4;
    }
    if (bVar2) {
      if (bVar3) {
        return 4;
      }
      return 1;
    }
  }
  if (!bVar3) {
    return 4;
  }
  return 0;
}

