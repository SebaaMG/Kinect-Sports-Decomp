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
extern int fn_82F65350();


void fn_82E4BB98(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = fn_82F65350();
  uVar2 = uVar2 & 3;
  iVar3 = (int)uVar2;
  iVar4 = 0;
  if (iVar3 != 0) {
    do {
      iVar1 = *param_3 + iVar4;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar1 + param_2) = 0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *param_3 = *param_3 + iVar3;
  return;
}

