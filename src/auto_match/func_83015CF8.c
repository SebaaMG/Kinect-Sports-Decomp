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
extern int fn_82FA5190();


int * fn_83015CF8(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar1 = (int *)param_3[2];
  iVar2 = *param_3;
  uVar3 = param_3[1];
  piVar4 = (int *)param_3[3];
  iVar5 = *piVar1;
  *param_1 = iVar2;
  param_1[1] = uVar3;
  param_1[3] = (int)piVar4;
  param_1[2] = iVar5;
  uVar6 = (ulonglong)uVar3;
  while (iVar5 == 0) {
    uVar6 = uVar6 + 1;
    param_1[1] = (int)uVar6;
    if (0x1e < (uVar6 & 0xffffffff)) break;
    param_1[3] = 0;
    iVar5 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + iVar2);
    param_1[2] = iVar5;
  }
  if (piVar4 == (int *)0x0) {
    *(int *)((int)(((ulonglong)uVar3 + 1 & 0xffffffff) << 2) + (int)param_2) = *piVar1;
  }
  else {
    *piVar4 = *piVar1;
  }
  fn_82FA5190(*param_2);
  param_2[0x20] = param_2[0x20] + -1;
  return param_1;
}

