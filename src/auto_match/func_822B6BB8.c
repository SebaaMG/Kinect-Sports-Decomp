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
extern int fn_8255E530();


int fn_822B6BB8(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x4c);
  if (iVar3 == 0) goto LAB_822b6c58;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x8c0);
  if ((iVar1 == 0) || (*(int *)((*(int *)(iVar3 + 0x44) + 0x20) * 4 + iVar1) == 0))
  goto LAB_822b6c58;
  if (iVar1 == 0) {
LAB_822b6c3c:
    iVar3 = -1;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0x1b4);
    if (piVar2 == (int *)0x0) goto LAB_822b6c3c;
    iVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_3);
  }
  if (-1 < iVar3) {
                    /* WARNING: Subroutine does not return */
    fn_8255E530(param_1,*(undefined4 *)(param_2 + 0x14));
  }
LAB_822b6c58:
  puVar4 = (undefined8 *)(param_1 + -8);
  puVar5 = (undefined8 *)0x8329eac8;
  lVar6 = 8;
  do {
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar5;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}

