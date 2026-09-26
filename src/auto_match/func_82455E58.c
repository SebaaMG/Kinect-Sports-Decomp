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
extern unsigned int *auStack_40;
extern int fn_82321D30();
extern int fn_82F63108();


void fn_82455E58(int param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_40 [64];
  
  if ((param_2 & 0xffffffff) == 0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x24) + 4);
  }
  else {
    if ((param_2 & 0xffffffff) != 1) goto LAB_82455ecc;
    pcVar1 = *(code **)(**(int **)(param_1 + 0x24) + 8);
  }
  iVar4 = (*pcVar1)();
  iVar5 = fn_82321D30(auStack_40,*(undefined4 *)(iVar4 + 0x5b0),iVar4);
  puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(iVar4 + 0x730U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
LAB_82455ecc:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 4))(*(int **)(param_1 + 0x38),param_2);
  }
  return;
}

