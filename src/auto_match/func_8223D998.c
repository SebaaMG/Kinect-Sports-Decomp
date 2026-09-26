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


longlong fn_8223D998(int *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  while( true ) {
    while( true ) {
      if ((longlong)param_3 < 1) {
        return lVar2;
      }
      if (*(int *)param_1[8] == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)param_1[0xc];
      }
      uVar3 = (ulonglong)iVar1;
      if ((longlong)uVar3 < 1) break;
      if ((longlong)param_3 < (longlong)uVar3) {
        uVar3 = param_3;
      }
      fn_82F68CC0(param_2,*(int *)param_1[8],uVar3 & 0xffffffff);
      param_2 = (uVar3 & 0xffffffff) + param_2;
      lVar2 = uVar3 + lVar2;
      param_3 = param_3 - uVar3;
      *(int *)param_1[0xc] = *(int *)param_1[0xc] - (int)uVar3;
      *(int *)param_1[8] = *(int *)param_1[8] + (int)uVar3;
    }
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
    if (iVar1 == -1) break;
    *(undefined1 *)param_2 = (char)iVar1;
    lVar2 = lVar2 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  return lVar2;
}

