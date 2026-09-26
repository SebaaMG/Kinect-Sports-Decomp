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


undefined4 * fn_823BA0F0(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_50 [8];
  undefined8 auStack_48 [9];
  
  while (param_2[2] != *(int *)(param_3 + 8)) {
    iVar6 = 0;
    if ((int *)*param_2 != (int *)0x0) {
      iVar6 = *(int *)*param_2;
    }
    uVar8 = param_2[2];
    if (*(uint *)(iVar6 + 8) <= uVar8) {
      uVar8 = uVar8 - *(uint *)(iVar6 + 8);
    }
    iVar10 = 0;
    if ((int *)*param_4 != (int *)0x0) {
      iVar10 = *(int *)*param_4;
    }
    uVar11 = param_4[2];
    if (*(uint *)(iVar10 + 8) <= uVar11) {
      uVar11 = uVar11 - *(uint *)(iVar10 + 8);
    }
    uVar7 = 0;
    uVar9 = 0;
    puVar3 = *(undefined8 **)(*(int *)(iVar6 + 4) + uVar8 * 4);
    puVar4 = *(undefined8 **)(uVar11 * 4 + *(int *)(iVar10 + 4));
    *puVar4 = *puVar3;
    if (auStack_48 != puVar3 + 1) {
      uVar9 = *(undefined4 *)((int)puVar3 + 0xc);
      *(undefined4 *)((int)puVar3 + 0xc) = 0;
      uVar7 = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)(puVar3 + 1) = 0;
    }
    iVar6 = *(int *)((int)puVar4 + 0xc);
    *(undefined4 *)((int)puVar4 + 0xc) = uVar9;
    *(undefined4 *)(puVar4 + 1) = uVar7;
    if (iVar6 != 0) {
      fn_822315A0();
    }
    uVar5 = fn_8235A028(auStack_50,puVar3 + 2);
    fn_822AF200(puVar4 + 2,uVar5);
    param_4[2] = param_4[2] + 1;
    param_2[2] = param_2[2] + 1;
  }
  piVar1 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar1 != (int *)0x0) && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0)) {
    *param_1 = *puVar2;
  }
  param_1[2] = param_4[2];
  return param_1;
}

