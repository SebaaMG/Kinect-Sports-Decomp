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
extern int fn_823608F8();


void fn_8241F610(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1[2];
  uVar5 = 0;
  if ((param_1[3] - iVar1) / 0x1ac != 0) {
    iVar4 = 0;
    do {
      if (uVar5 == param_1[6]) {
LAB_8241f66c:
        uVar3 = 0;
      }
      else {
        iVar2 = param_1[2];
        uVar3 = 1;
        if (*(int *)(iVar4 + iVar2) == *(int *)(param_1[6] * 0x1ac + iVar2)) goto LAB_8241f66c;
      }
      fn_823608F8(*param_1,*(undefined4 *)(iVar4 + iVar1),uVar3);
      iVar1 = param_1[2];
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x1ac;
    } while (uVar5 < (uint)((param_1[3] - iVar1) / 0x1ac));
  }
  return;
}

