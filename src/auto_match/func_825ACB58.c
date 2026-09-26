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


undefined4 fn_825ACB58(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar4 = param_1[3] + param_2;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  if (*(uint *)(iVar2 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar2 + 8);
  }
  return *(undefined4 *)(uVar4 * 4 + *(int *)(iVar2 + 4));
}

