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
extern int fn_82BC0088();


void fn_82BC0618(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[3];
  if ((int)uVar2 < 0) {
    do {
      uVar2 = param_1[1] + 1;
      param_1[1] = uVar2;
      if (*(uint *)*param_1 <= uVar2) {
        iVar3 = 0;
        goto LAB_82bc06b8;
      }
      iVar3 = *(int *)(((uint *)*param_1)[2] + uVar2 * 4);
      param_1[2] = iVar3;
    } while ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0));
    uVar2 = *(int *)(iVar3 + 4) - 1;
  }
  param_1[3] = uVar2 - 1;
  if (uVar2 < *(uint *)(param_1[2] + 4)) {
    piVar1 = (int *)(uVar2 * 4 + *(int *)(param_1[2] + 8));
  }
  else {
    piVar1 = (int *)fn_82BC0088();
  }
  iVar3 = *piVar1;
LAB_82bc06b8:
  param_1[4] = iVar3;
  return;
}

