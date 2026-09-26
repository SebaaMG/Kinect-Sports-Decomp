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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82279DA8();
extern int fn_822805D8();
extern int fn_822808C0();
extern int fn_82280B40();
extern int fn_82280E28();
extern int fn_82280F18();
extern int fn_82547C80();
extern int fn_82671E20();
extern int fn_82671F28();
extern unsigned int lbl_8326B394;


void fn_822800E8(double param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  uVar1 = *(uint *)(param_2 + 0x44);
  *(float *)(param_2 + 0x40) = (float)param_1;
  *(undefined1 *)(param_2 + 0x48) = 1;
  if (uVar1 == 0) {
    iVar6 = *(int *)(param_2 + 0x7c);
    if (iVar6 == 0) goto LAB_822804b0;
    if (*(int *)(param_2 + 0x80) != 0) {
      for (piVar5 = *(int **)(iVar6 + 0xc); piVar5 != *(int **)(iVar6 + 0x10); piVar5 = piVar5 + 1)
      {
        if (*piVar5 == *(int *)(param_2 + 0x80)) {
          bVar2 = true;
          goto LAB_82280428;
        }
      }
      bVar2 = false;
LAB_82280428:
      if (bVar2) goto LAB_822804b0;
    }
    *(undefined4 *)(param_2 + 0x44) = 1;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x1a0) = lbl_8326B394;
    if (*(int *)(param_2 + 0x54) == 0) {
      *(undefined4 *)(param_2 + 0x58) = 0;
    }
    else {
      fn_82280B40();
    }
    if (*(int *)(param_2 + 0x4c) != 0) {
      fn_82279DA8(*(int *)(param_2 + 0x4c),1);
    }
    iVar6 = *(int *)(param_2 + 0x4c);
LAB_82280488:
    if (((iVar6 != 0) && (*(char *)(iVar6 + 0x128) != '\0')) && (*(int *)(param_2 + 0x6c) == 0)) {
      fn_822805D8(param_2);
    }
  }
  else {
    if (uVar1 == 1) {
      if ((*(int *)(param_2 + 0x6c) == 0) || (*(int *)(param_2 + 0x8c) != 0)) {
        iVar6 = *(int *)(param_2 + 0x4c);
LAB_822803d8:
        if (iVar6 == 0) {
          *(undefined1 *)(param_2 + 0x48) = 0;
        }
        goto LAB_822804b0;
      }
      if (*(int *)(param_2 + 0x54) != 0) {
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x54);
        *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x58);
      }
      iVar6 = *(int *)(param_2 + 100);
      *(int *)(param_2 + 0x54) = iVar6;
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x68);
      if (iVar6 == 0) {
        uVar4 = 0;
        *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x1a0) = lbl_8326B394;
      }
      else {
        puVar3 = (undefined4 *)fn_82279C58(auStack_38,iVar6);
        fn_82671F28(*puVar3,(ulonglong)*(uint *)(param_2 + 0x14) + 0x198);
        if (puVar3[1] != 0) {
          fn_822315A0();
        }
        uVar4 = 1;
      }
      fn_82547C80((ulonglong)*(uint *)(param_2 + 0x14) + 0xd0,1,uVar4);
      if ((*(int *)(param_2 + 0x7c) != 0) && (*(char *)(param_2 + 0x79) != '\0')) {
        iVar6 = param_2 + 0x70;
        *(undefined4 *)(param_2 + 0x44) = 2;
        if (*(char *)(param_2 + 0x78) == '\0') {
          iVar6 = 0;
        }
        fn_822808C0(param_2,iVar6);
        iVar6 = *(int *)(param_2 + 0x4c);
LAB_82280214:
        if (iVar6 != 0) {
          fn_82279DA8(iVar6,0);
        }
      }
    }
    else {
      if (uVar1 < 3) {
        iVar6 = *(int *)(param_2 + 0x7c);
        if (iVar6 == 0) goto LAB_822804b0;
        if (*(int *)(param_2 + 0x80) != 0) {
          for (piVar5 = *(int **)(iVar6 + 0xc); piVar5 != *(int **)(iVar6 + 0x10);
              piVar5 = piVar5 + 1) {
            if (*piVar5 == *(int *)(param_2 + 0x80)) {
              bVar2 = true;
              goto LAB_8228027c;
            }
          }
          bVar2 = false;
LAB_8228027c:
          if (bVar2) goto LAB_822804b0;
        }
        *(undefined4 *)(param_2 + 0x80) = 0;
        *(undefined4 *)(param_2 + 0x44) = 3;
        *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x19c) = lbl_8326B394;
        if (*(int *)(param_2 + 0x4c) == 0) {
          *(undefined4 *)(param_2 + 0x50) = 0;
        }
        else {
          fn_82280B40();
        }
        if (*(int *)(param_2 + 0x54) != 0) {
          fn_82279DA8(*(int *)(param_2 + 0x54),1);
        }
        iVar6 = *(int *)(param_2 + 0x54);
        goto LAB_82280488;
      }
      if (uVar1 != 3) goto LAB_822804b0;
      if ((*(int *)(param_2 + 0x6c) == 0) || (*(int *)(param_2 + 0x8c) != 0)) {
        iVar6 = *(int *)(param_2 + 0x54);
        goto LAB_822803d8;
      }
      if (*(int *)(param_2 + 0x4c) != 0) {
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x4c);
        *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x50);
      }
      iVar6 = *(int *)(param_2 + 100);
      *(int *)(param_2 + 0x4c) = iVar6;
      *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x68);
      if (iVar6 == 0) {
        uVar4 = 0;
        *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x19c) = lbl_8326B394;
      }
      else {
        puVar3 = (undefined4 *)fn_82279C58(auStack_40,iVar6);
        fn_82671E20(*puVar3,(ulonglong)*(uint *)(param_2 + 0x14) + 0x198);
        if (puVar3[1] != 0) {
          fn_822315A0();
        }
        uVar4 = 1;
      }
      fn_82547C80((ulonglong)*(uint *)(param_2 + 0x14) + 0xd0,0,uVar4);
      if ((*(int *)(param_2 + 0x7c) != 0) && (*(char *)(param_2 + 0x79) != '\0')) {
        iVar6 = param_2 + 0x70;
        *(undefined4 *)(param_2 + 0x44) = 0;
        if (*(char *)(param_2 + 0x78) == '\0') {
          iVar6 = 0;
        }
        fn_822808C0(param_2,iVar6);
        iVar6 = *(int *)(param_2 + 0x54);
        goto LAB_82280214;
      }
    }
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
  }
LAB_822804b0:
  if (*(int **)(param_2 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x4c) + 4))(param_1);
  }
  if (*(int **)(param_2 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x54) + 4))(param_1);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    if (*(int *)(param_2 + 0x5c) == 0) {
      *(undefined4 *)(param_2 + 0x60) = 0;
    }
    else {
      fn_82280B40();
    }
  }
  fn_82280F18(param_1,param_2);
  if ((*(int *)(param_2 + 0x7c) != 0) && (*(char *)(param_2 + 0x48) != '\0')) {
    fn_82280E28(param_1,param_2);
  }
  return;
}

