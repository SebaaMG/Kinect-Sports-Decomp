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
extern int fn_8265CA60();


void fn_82897568(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  param_1[4] = param_2;
  param_1[1] = param_3;
  uVar3 = (ulonglong)*(uint *)(param_2 + 8);
  if (uVar3 == 0) {
    param_1[2] = 0;
  }
  else {
    lVar1 = ((ulonglong)*(uint *)(param_2 + 8) & 0x3fffffff) << 2;
    if (0x3fffffff < uVar3) {
      lVar1 = -1;
    }
    iVar2 = fn_8265CA60(lVar1);
    param_1[2] = iVar2;
  }
  if ((param_1[2] != 0) && (uVar3 != 0)) {
    iVar2 = 0;
    do {
      *(undefined4 *)(param_1[2] + iVar2) = 0;
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}

