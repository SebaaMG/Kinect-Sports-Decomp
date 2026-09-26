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
extern int fn_82883D20();
extern int fn_82F68CC0();


bool fn_82883DC0(int param_1,undefined8 param_2,ulonglong param_3,int *param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar5;
  ulonglong uVar4;
  
  iVar3 = 0;
  uVar5 = *(uint *)(param_1 + 0x10);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar3 = **(int **)(param_1 + 4);
  }
  if (*(uint *)(iVar3 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar3 + 8);
  }
  puVar2 = *(uint **)(*(int *)(iVar3 + 4) + uVar5 * 4);
  uVar4 = (ulonglong)puVar2[1] - (ulonglong)*puVar2;
  bVar1 = (uVar4 & 0xffffffff) <= (param_3 & 0xffffffff);
  if (bVar1) {
    fn_82F68CC0(param_2,(ulonglong)*puVar2,uVar4);
    *param_4 = puVar2[1] - *puVar2;
    fn_82883D20(param_1 + 4);
  }
  return bVar1;
}

