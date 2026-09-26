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
extern int fn_826BCF78();


longlong fn_82790D60(int param_1,ulonglong param_2,undefined2 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if ((int)param_2 == 0) {
    lVar1 = -param_4;
  }
  else {
    param_1 = param_1 - (int)param_3;
    uVar3 = param_4;
    uVar5 = param_2;
    do {
      lVar1 = fn_826BCF78(*(undefined2 *)(param_1 + (int)param_3));
      lVar2 = fn_826BCF78(*param_3);
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 1;
      iVar4 = (int)lVar1;
      if ((uVar5 == 0) || (iVar4 == 0)) break;
      if (iVar4 != (int)lVar2) goto LAB_82790de8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if ((iVar4 == (int)lVar2) && (((uVar5 & 0xffffffff) != 0 || ((uVar3 & 0xffffffff) != 0)))) {
      lVar1 = param_2 - param_4;
    }
    else {
LAB_82790de8:
      lVar1 = lVar1 - lVar2;
    }
  }
  return lVar1;
}

