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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822AF200();
extern int fn_8235A028();


undefined4 * fn_823B9F98(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [9];
  
  while (*(int *)(param_2 + 8) != param_3[2]) {
    iVar1 = param_3[2];
    iVar9 = iVar1 + -1;
    param_3[2] = iVar9;
    if ((int *)*param_3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)*param_3;
    }
    if (*(uint *)(iVar8 + 8) <= iVar1 - 1U) {
      iVar9 = iVar9 - *(uint *)(iVar8 + 8);
    }
    iVar1 = param_4[2];
    iVar11 = iVar1 + -1;
    puVar4 = *(undefined8 **)(*(int *)(iVar8 + 4) + iVar9 * 4);
    param_4[2] = iVar11;
    if ((int *)*param_4 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)*param_4;
    }
    if (*(uint *)(iVar9 + 8) <= iVar1 - 1U) {
      iVar11 = iVar11 - *(uint *)(iVar9 + 8);
    }
    uVar7 = 0;
    uVar10 = 0;
    puVar5 = *(undefined8 **)(iVar11 * 4 + *(int *)(iVar9 + 4));
    *puVar5 = *puVar4;
    if (auStack_48 != puVar4 + 1) {
      uVar10 = *(undefined4 *)((int)puVar4 + 0xc);
      *(undefined4 *)((int)puVar4 + 0xc) = 0;
      uVar7 = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    iVar1 = *(int *)((int)puVar5 + 0xc);
    *(undefined4 *)((int)puVar5 + 0xc) = uVar10;
    *(undefined4 *)(puVar5 + 1) = uVar7;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    uVar6 = fn_8235A028(auStack_50,puVar4 + 2);
    fn_822AF200(puVar5 + 2,uVar6);
  }
  piVar2 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar2 != (int *)0x0) && (puVar3 = (undefined4 *)*piVar2, puVar3 != (undefined4 *)0x0)) {
    *param_1 = *puVar3;
  }
  param_1[2] = param_4[2];
  return param_1;
}

