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


void fn_83014FE0(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = param_2 + 4;
  uVar3 = (ulonglong)param_3 * 0x8421085 >> 0x20;
  param_1[3] = 0;
  uVar3 = ((param_3 - uVar3 & 0xffffffff) >> 1) + uVar3 >> 4;
  lVar4 = (ulonglong)param_3 - ((uVar3 & 0x7ffffff) * 0x20 - uVar3);
  param_1[1] = (int)lVar4;
  iVar2 = *(int *)((int)((lVar4 + 1U & 0xffffffff) << 2) + param_2);
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    return;
  }
  do {
    piVar1 = (int *)param_1[2];
    if (piVar1[1] == param_3) {
      return;
    }
    iVar2 = *piVar1;
    param_1[3] = (int)piVar1;
    param_1[2] = iVar2;
  } while (iVar2 != 0);
  return;
}

