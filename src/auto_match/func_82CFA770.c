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


longlong fn_82CFA770(int *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = param_1[4];
  lVar3 = (ulonglong)(uint)param_1[5] - (ulonglong)uVar2;
  lVar4 = param_2;
  if ((int)lVar3 < (int)param_2) {
    do {
      lVar4 = lVar4 - lVar3;
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if (iVar1 != 0) {
        return param_2 - lVar4;
      }
      uVar2 = param_1[4];
      lVar3 = (ulonglong)(uint)param_1[5] - (ulonglong)uVar2;
    } while ((int)lVar3 < (int)lVar4);
  }
  param_1[4] = uVar2 + (int)lVar4;
  return param_2;
}

