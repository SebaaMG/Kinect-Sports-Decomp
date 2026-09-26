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


longlong fn_82F64D08(ushort *param_1,ushort *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*param_2;
  lVar3 = *param_1 - uVar2;
  if (lVar3 == 0) {
    iVar1 = (int)param_1 - (int)param_2;
    do {
      if (uVar2 == 0) break;
      param_2 = param_2 + 1;
      uVar2 = (ulonglong)*param_2;
      lVar3 = *(ushort *)(iVar1 + (int)param_2) - uVar2;
    } while (lVar3 == 0);
  }
  if ((int)lVar3 < 0) {
    lVar3 = -1;
  }
  else if (0 < (int)lVar3) {
    lVar3 = 1;
  }
  return lVar3;
}

