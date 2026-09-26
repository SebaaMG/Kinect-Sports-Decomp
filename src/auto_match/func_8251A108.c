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
extern int fn_8224FE78();
extern int fn_8224FF20();
extern int fn_82517A50();
extern int fn_8251BA68();
extern int fn_8251BB70();


undefined4 * fn_8251A108(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_40 [64];
  
  puVar8 = param_1 + 1;
  *param_1 = *param_2;
  if (puVar8 != param_2 + 1) {
    fn_8224FE78(auStack_40,puVar8,*(undefined4 *)param_1[2]);
    iVar1 = param_1[2];
    uVar7 = fn_8251BA68(puVar8,*(undefined4 *)(param_2[2] + 4),iVar1);
    *(undefined4 *)(iVar1 + 4) = uVar7;
    piVar2 = (int *)param_1[2];
    param_1[3] = param_2[3];
    puVar8 = (undefined4 *)piVar2[1];
    if (*(char *)((int)puVar8 + 0x35) == '\0') {
      puVar5 = (undefined4 *)*puVar8;
      while (puVar3 = puVar5, *(char *)((int)puVar3 + 0x35) == '\0') {
        puVar8 = puVar3;
        puVar5 = (undefined4 *)*puVar3;
      }
      *piVar2 = (int)puVar8;
      iVar1 = *(int *)(param_1[2] + 4);
      iVar6 = *(int *)(iVar1 + 8);
      while (iVar4 = iVar6, *(char *)(iVar4 + 0x35) == '\0') {
        iVar1 = iVar4;
        iVar6 = *(int *)(iVar4 + 8);
      }
      *(int *)(param_1[2] + 8) = iVar1;
    }
    else {
      *piVar2 = (int)piVar2;
      *(undefined4 *)(param_1[2] + 8) = param_1[2];
    }
  }
  puVar8 = param_1 + 5;
  if (puVar8 != param_2 + 5) {
    fn_8224FF20(auStack_40,puVar8,*(undefined4 *)param_1[6]);
    iVar1 = param_1[6];
    uVar7 = fn_8251BB70(puVar8,*(undefined4 *)(param_2[6] + 4),iVar1);
    *(undefined4 *)(iVar1 + 4) = uVar7;
    piVar2 = (int *)param_1[6];
    param_1[7] = param_2[7];
    puVar8 = (undefined4 *)piVar2[1];
    if (*(char *)((int)puVar8 + 0x49) == '\0') {
      puVar5 = (undefined4 *)*puVar8;
      while (puVar3 = puVar5, *(char *)((int)puVar3 + 0x49) == '\0') {
        puVar8 = puVar3;
        puVar5 = (undefined4 *)*puVar3;
      }
      *piVar2 = (int)puVar8;
      iVar1 = *(int *)(param_1[6] + 4);
      iVar6 = *(int *)(iVar1 + 8);
      while (iVar4 = iVar6, *(char *)(iVar4 + 0x49) == '\0') {
        iVar1 = iVar4;
        iVar6 = *(int *)(iVar4 + 8);
      }
      *(int *)(param_1[6] + 8) = iVar1;
    }
    else {
      *piVar2 = (int)piVar2;
      *(undefined4 *)(param_1[6] + 8) = param_1[6];
    }
  }
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  fn_82517A50(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = param_2[0xf];
  return param_1;
}

