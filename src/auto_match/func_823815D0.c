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
extern int fn_82230040();
extern int fn_822AA770();
extern int fn_822AA7E0();
extern int fn_822ABA88();
extern int fn_822ACAD8();
extern int fn_822CEE40();
extern int fn_823818A0();
extern int fn_8249CC10();
extern int fn_824A09E8();
extern int fn_8265C9E0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_831CB180;
extern unsigned int lbl_831CB184;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_64;


void fn_823815D0(int param_1,int param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  int iStack0000001c;
  undefined4 *apuStack_70 [2];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  
  puVar7 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c))[1];
  puVar4 = (&lbl_831CB180)[param_4 * 4];
  puVar5 = (&lbl_831CB184)[param_4 * 4];
  iVar10 = 0;
  piVar11 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + param_2 * 4);
  cVar1 = *(char *)((int)puVar7 + 0x15);
  puVar13 = *(undefined4 **)(param_1 + 0x1c);
  while (cVar1 == '\0') {
    if ((int)puVar7[3] < param_2) {
      puVar2 = (undefined4 *)puVar7[2];
      puVar7 = puVar13;
    }
    else {
      puVar2 = (undefined4 *)*puVar7;
    }
    puVar13 = puVar7;
    puVar7 = puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x15);
  }
  iStack0000001c = param_2;
  if ((puVar13 == *(undefined4 **)(param_1 + 0x1c)) || (param_2 < (int)puVar13[3])) {
    puVar7 = (undefined4 *)fn_8265C9E0(0x18);
    if (puVar7 == (undefined4 *)0x0) {
      uStack_64 = 0;
      ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_68);
    }
    *puVar7 = *(undefined4 *)(param_1 + 0x1c);
    puVar7[1] = *(undefined4 *)(param_1 + 0x1c);
    puVar7[2] = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar7 + 5) = 0;
    *(undefined1 *)((int)puVar7 + 0x15) = 0;
    if (puVar7 + 3 != (int *)0x0) {
      puVar7[3] = param_2;
      puVar7[4] = 0;
    }
    fn_8249CC10(apuStack_70,param_1 + 0x18,puVar13);
    puVar13 = apuStack_70[0];
  }
  puVar13[4] = (int)param_3;
  if ((int)param_3 < 0) {
    iVar10 = fn_822AA7E0(piVar11);
    if (iVar10 == *(int *)(*(int *)(piVar11[4] * 4 + *piVar11) + 8)) {
      uVar12 = 0xffffffff821b39e8;
      goto LAB_8238182c;
    }
  }
  else {
    piVar6 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + param_2 * 4);
    iVar8 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),param_3);
    if (*(int *)(iVar8 + 0x24) != 0) {
      iVar9 = fn_822CEE40();
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0)) {
        iVar10 = fn_823818A0(piVar11,0xffffffff821b39e8,puVar4,puVar5);
      }
      puVar7 = (undefined4 *)**(int **)(*(int *)(param_1 + 4) + 8);
      if (*(int *)(*(int *)((*(int **)(iVar8 + 0x1c))[4] * 4 + **(int **)(iVar8 + 0x1c)) + 0x10) ==
          0) {
        uVar3 = puVar7[1];
      }
      else {
        uVar3 = *puVar7;
      }
      if ((iVar10 != 0) ||
         (((iVar10 = fn_822AA770(uVar3), iVar10 != 0 &&
           (iVar10 = fn_823818A0(piVar11,0xffffffff821b39f0,puVar4,puVar5), iVar10 != 0)) ||
          (iVar10 = fn_823818A0(piVar11,0xffffffff821b39f8,puVar4,puVar5), iVar10 != 0))))
      goto LAB_8238186c;
    }
    iVar10 = fn_822CEE40(iVar8);
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x24) != 0)) {
      uVar12 = 0xffffffff821b3a00;
LAB_8238182c:
      iVar10 = fn_823818A0(piVar11,uVar12,puVar4,puVar5);
      if (iVar10 != 0) goto LAB_8238186c;
    }
  }
  iVar10 = fn_822ACAD8(*(undefined4 *)(*(int *)(piVar11[4] * 4 + *piVar11) + 0x48),puVar4,
                             puVar5);
  if (iVar10 == 0) {
    return;
  }
LAB_8238186c:
  piVar11 = (int *)fn_824A09E8(param_1 + 8,&stack0x0000001c);
  *piVar11 = param_4;
  return;
}

