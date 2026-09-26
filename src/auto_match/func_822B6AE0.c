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
extern int fn_8255E428();


int fn_822B6AE0(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(iVar1 + 0x4c) == 0) {
LAB_822b6b74:
    puVar5 = (undefined8 *)(param_1 + -8);
    puVar6 = (undefined8 *)0x8329eac8;
    lVar7 = 8;
    do {
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    return param_1;
  }
  iVar2 = *(int *)(iVar1 + 0x8c0);
  if ((iVar2 == 0) || (*(int *)((*(int *)(*(int *)(iVar1 + 0x4c) + 0x44) + 0x20) * 4 + iVar2) == 0))
  goto LAB_822b6b74;
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 0x1b4);
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,param_3);
      goto LAB_822b6b64;
    }
  }
  uVar4 = 0xffffffffffffffff;
LAB_822b6b64:
                    /* WARNING: Subroutine does not return */
  fn_8255E428(param_1,iVar1,uVar4);
}

