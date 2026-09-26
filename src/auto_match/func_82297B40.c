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
extern int fn_82F68CC0();


longlong fn_82297B40(int *param_1,longlong param_2,ulonglong param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = 0;
  while( true ) {
    while( true ) {
      if ((longlong)param_3 < 1) {
        return lVar3;
      }
      if (*(int *)param_1[9] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)param_1[0xd];
      }
      uVar5 = (ulonglong)iVar2;
      if ((longlong)uVar5 < 1) break;
      if ((longlong)param_3 < (longlong)uVar5) {
        uVar5 = param_3;
      }
      lVar4 = (uVar5 & 0x7fffffff) * 2;
      fn_82F68CC0(*(int *)param_1[9],param_2,lVar4);
      param_2 = lVar4 + param_2;
      lVar3 = uVar5 + lVar3;
      param_3 = param_3 - uVar5;
      *(int *)param_1[0xd] = *(int *)param_1[0xd] - (int)uVar5;
      *(int *)param_1[9] = (int)lVar4 + *(int *)param_1[9];
    }
    sVar1 = (**(code **)(*param_1 + 0xc))(param_1,*(undefined2 *)param_2);
    if (sVar1 == -1) break;
    param_2 = param_2 + 2;
    lVar3 = lVar3 + 1;
    param_3 = param_3 - 1;
  }
  return lVar3;
}

