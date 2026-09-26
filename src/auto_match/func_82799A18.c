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


longlong fn_82799A18(int param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,char param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar3 = -param_4;
  }
  else {
    param_1 = param_1 - (int)param_3;
    uVar4 = param_2;
    uVar5 = param_4;
    do {
      uVar2 = *(ushort *)(param_1 + (int)param_3);
      uVar4 = uVar4 - 1;
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      if ((uVar4 == 0) || (uVar2 == 0)) break;
      if (uVar2 != uVar1) goto LAB_82799a84;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (((uVar2 == uVar1) && ((uVar5 & 0xffffffff) != 0)) &&
       ((param_5 == '\0' || ((uVar4 & 0xffffffff) != 0)))) {
      lVar3 = param_2 - param_4;
    }
    else {
LAB_82799a84:
      lVar3 = (ulonglong)uVar2 - (ulonglong)uVar1;
    }
  }
  return lVar3;
}

