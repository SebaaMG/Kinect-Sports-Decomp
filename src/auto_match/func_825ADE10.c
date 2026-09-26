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


void fn_825ADE10(undefined4 *param_1,int *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)*param_2;
  piVar3 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    piVar3 = *(int **)*piVar1;
  }
  uVar5 = param_2[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (uVar5 != *(uint *)(param_3 + 8)) {
    do {
      uVar2 = uVar5;
      if (*(uint *)(iVar4 + 8) <= uVar5) {
        uVar2 = uVar5 - *(uint *)(iVar4 + 8);
      }
    } while ((*(longlong *)(*(int *)(uVar2 * 4 + *(int *)(iVar4 + 4)) + 0x40) != param_4) &&
            (uVar5 = uVar5 + 1, uVar5 != *(uint *)(param_3 + 8)));
  }
  param_2[2] = uVar5;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar1;
  }
  param_1[2] = uVar5;
  return;
}

