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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_827D50B8();
extern int fn_827D6E18();
extern int fn_827D7460();
extern int fn_827D98C8();
extern int fn_827D9908();
extern int fn_827DEA68();
extern int fn_827E2598();
extern int fn_827E25A8();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int lbl_83156AA0;


/* WARNING: Removing unreachable block (ram,0x827e1a90) */
/* WARNING: Removing unreachable block (ram,0x827e1a9c) */
/* WARNING: Removing unreachable block (ram,0x827e1aec) */
/* WARNING: Removing unreachable block (ram,0x827e1af8) */

void fn_827E1A18(int param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar6;
  undefined4 uVar9;
  int *piVar10;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [96];
  
  if (*(char *)(param_1 + 0x39) != '\0') {
    uVar9 = *(undefined4 *)(param_1 + 8);
    uVar4 = fn_827E25A8(*(undefined4 *)(param_1 + 0x28));
    uVar5 = fn_827E2598(*(undefined4 *)(param_1 + 0x28));
    fn_827D7460(param_2,uVar5,uVar4,param_1 + 0x1c,auStack_80,uVar9,0);
    *(undefined4 *)(param_1 + 0x3c) = 1;
    return;
  }
  puVar7 = (undefined4 *)fn_827E2790(auStack_70,*(undefined4 *)(param_1 + 0x28));
  bVar3 = false;
  iVar8 = fn_827D50B8(*puVar7);
  if (iVar8 != 0x3e4) {
    puVar7 = (undefined4 *)fn_827E2790(auStack_78,*(undefined4 *)(param_1 + 0x28));
    bVar3 = true;
    iVar8 = fn_827D50B8(*puVar7);
    bVar2 = false;
    if (iVar8 != 0x3e5) goto LAB_827e1c0c;
  }
  bVar2 = true;
LAB_827e1c0c:
  if ((bVar3) && (iStack_74 != 0)) {
    fn_822315A0();
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  if ((bVar2) && (uVar4 = fn_827E25A8(*(undefined4 *)(param_1 + 0x28)), (int)uVar4 != -1)) {
    uVar4 = fn_827D6E18(auStack_68,param_2,uVar4);
    piVar10 = (int *)(param_1 + 0x1c);
    fn_823F2E20(piVar10,uVar4);
    if (iStack_64 != 0) {
      fn_822315A0();
    }
    piVar1 = (int *)*piVar10;
    if (piVar1 != (int *)0x0) {
      iVar8 = *piVar1;
      uVar4 = fn_827E2598(*(undefined4 *)(param_1 + 0x28));
      uVar4 = (**(code **)(iVar8 + 0x5c))(piVar1,uVar4);
      iVar8 = (**(code **)(*(int *)*piVar10 + 0x28))((int *)*piVar10,uVar4);
      *(int *)(param_1 + 0x24) = iVar8;
      if (iVar8 == 0) {
        (**(code **)(*(int *)*piVar10 + 0x30))((int *)*piVar10,uVar4);
      }
      else {
        fn_827D9908();
        *(char *)(param_1 + 0x48) = *(char *)(param_1 + 0x48) + '\x01';
        fn_82811438(auStack_60,auStack_7c,0x10);
        iVar8 = *(int *)lbl_83156AA0;
        uVar9 = *(undefined4 *)(param_1 + 8);
        uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
        uVar5 = (**(code **)(iVar8 + 4))(lbl_83156AA0,uVar5,auStack_60,uVar9);
        uVar9 = *(undefined4 *)(param_1 + 8);
        iVar8 = **(int **)(param_1 + 0x24);
        uVar6 = fn_827E2598(*(undefined4 *)(param_1 + 0x28));
        uVar5 = (**(code **)(iVar8 + 0xc))(*(undefined4 *)(param_1 + 0x24),uVar6,uVar9,uVar5);
        *(int *)(param_1 + 0x40) = (int)uVar5;
        fn_827DEA68(uVar5,uVar4);
        if (*(int *)(param_1 + 0x14) < 0) {
          uVar9 = fn_827D98C8(*piVar10);
          *(undefined4 *)(param_1 + 0x14) = uVar9;
        }
        (**(code **)(**(int **)(param_1 + 0x24) + 4))
                  (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(param_1 + 8));
      }
    }
  }
  return;
}

