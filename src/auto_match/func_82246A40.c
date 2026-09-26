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
extern int fn_82247000();
extern int fn_82248B90();
extern int fn_82381BC0();
extern int fn_8288F948();
extern int fn_8289DE38();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828B1BA8();


undefined8 fn_82246A40(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar8;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar9;
  undefined4 *puStack_40;
  int aiStack_3c [15];
  
  if (*(char *)(param_1 + 0x51) == '\0') {
LAB_82246a78:
    bVar2 = false;
  }
  else {
    cVar8 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
    bVar2 = true;
    if (cVar8 == '\0') goto LAB_82246a78;
  }
  if ((!bVar2) ||
     (bVar2 = true,
     *(int *)(*(int *)(param_1 + 8) + 0x224) != *(int *)(*(int *)(param_1 + 8) + 0x204))) {
    bVar2 = false;
  }
  if (bVar2) {
    cVar8 = fn_828B1BA8(*(undefined4 *)(param_1 + 8));
    bVar2 = true;
    if (cVar8 == '\0') goto LAB_82246ac0;
  }
  bVar2 = false;
LAB_82246ac0:
  bVar3 = false;
  if (bVar2) {
    puVar9 = *(undefined4 **)(param_1 + 8);
    bVar2 = true;
    puVar1 = (undefined4 *)puVar9[0x80];
    puStack_40 = (undefined4 *)*puVar1;
    while (puStack_40 != puVar1) {
      if (bVar2) {
        iVar6 = *(int *)(puStack_40[4] + 0x10);
        iVar7 = fn_8289DE38();
        bVar2 = true;
        if (iVar7 != iVar6) goto LAB_82246b00;
      }
      else {
LAB_82246b00:
        bVar2 = false;
      }
      fn_82381BC0(&puStack_40);
      puVar9 = *(undefined4 **)(param_1 + 8);
      puVar1 = (undefined4 *)puVar9[0x80];
    }
    bVar4 = bVar2;
    if (bVar2) {
      puStack_40 = puVar9;
      uVar5 = fn_828A12E8(puVar9);
      iVar6 = fn_8288F948(uVar5,1);
      aiStack_3c[0] = **(int **)(iVar6 + 4);
      while( true ) {
        iVar6 = aiStack_3c[0];
        uVar5 = fn_828A12E8(puVar9);
        iVar7 = fn_8288F948(uVar5,1);
        if (iVar6 == *(int *)(iVar7 + 4)) break;
        bVar4 = (bool)(*(int *)(*(int *)(iVar6 + 0x14) + 0x470) != 0 & bVar4);
        fn_82248B90(aiStack_3c);
        puVar9 = puStack_40;
      }
    }
    if ((!bVar2) || (bVar3 = true, !bVar4)) {
      bVar3 = false;
    }
  }
  iVar6 = 0;
  cVar8 = '\0';
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar6 = fn_82247000(*(int *)(param_1 + 0x38));
    iVar7 = (**(code **)(**(int **)(param_1 + 0x38) + 8))(*(int **)(param_1 + 0x38));
    cVar8 = (**(code **)(*(int *)(iVar7 + 0x144) + 0x3c))();
  }
  if ((!bVar3) || (bVar2 = true, iVar6 != 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (bVar2 = true, *(int *)(param_1 + 0x4c) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (uVar5 = 1, cVar8 != '\0')) {
    uVar5 = 0;
  }
  return uVar5;
}

