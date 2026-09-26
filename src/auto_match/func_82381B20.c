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
extern int fn_822ABA88();
extern int fn_822CEE40();


undefined4 fn_82381B20(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = **(int **)(*(int *)(param_1 + 4) + 8);
  piVar2 = *(int **)(param_2 * 4 + iVar4);
  piVar5 = *(int **)(((uint)((ulonglong)LZCOUNT(param_2) >> 3) & 4) + iVar4);
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),param_3);
  if ((*(int *)((int)uVar3 + 0x2a4) == *(int *)(iVar4 + 0x2a4)) &&
     (iVar4 = fn_822CEE40(uVar3), iVar4 != 0)) {
    uVar1 = *(undefined4 *)(iVar4 + 0x28);
  }
  else {
    uVar1 = *(undefined4 *)((int)uVar3 + 0x28);
  }
  return uVar1;
}

