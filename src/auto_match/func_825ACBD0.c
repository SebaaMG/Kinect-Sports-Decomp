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


undefined4 fn_825ACBD0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    piVar2 = (int *)*puVar1;
  }
  uVar4 = (param_1[4] + param_1[3]) - 1;
  if (((piVar2 == (int *)0x0) || ((int *)*piVar2 == (int *)0x0)) ||
     (piVar2 = *(int **)*piVar2, piVar2 == (int *)0x0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if (*(uint *)(iVar3 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar3 + 8);
  }
  return *(undefined4 *)(uVar4 * 4 + *(int *)(iVar3 + 4));
}

