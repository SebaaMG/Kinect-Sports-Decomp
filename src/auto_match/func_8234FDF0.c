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
extern unsigned int *auStack_23e;
extern unsigned int *auStack_27e;
extern unsigned int *auStack_290;
extern int fn_822315A0();
extern int fn_822444F0();
extern int fn_82250A18();
extern int fn_8225C590();
extern int fn_82299948();
extern int fn_8229EAA8();
extern int fn_822ABA88();
extern int fn_822AE3C0();
extern int fn_822B39D0();
extern int fn_822B67F8();
extern int fn_822B97F8();
extern int fn_82350888();
extern int fn_82350D88();
extern int fn_82350F08();
extern int fn_82351028();
extern int fn_82351198();
extern int fn_823515E0();
extern int fn_82351E78();
extern int fn_82351F88();
extern int fn_823520F0();
extern int fn_82352208();
extern int fn_82352358();
extern int fn_823524B0();
extern int fn_823525D0();
extern int fn_82352788();
extern int fn_82353230();
extern int fn_82356050();
extern int fn_82356C90();
extern int fn_8245FC80();
extern int fn_82460070();
extern int fn_8249ABC0();
extern int fn_82512C30();
extern int fn_82534820();
extern int fn_82536590();
extern int fn_82567CC0();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C8;
extern unsigned int lbl_821B23C8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_240;
extern unsigned int uStack_280;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8234FDF0(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar4;
  int iVar5;
  char cVar7;
  undefined4 *puVar6;
  longlong lVar3;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined4 auStack_290 [4];
  undefined2 uStack_280;
  undefined1 auStack_27e [62];
  undefined2 uStack_240;
  undefined1 auStack_23e [574];
  
  piVar4 = (int *)fn_82512C30();
  if (*piVar4 != 0) {
    return;
  }
  iVar5 = fn_8225C590();
  if (*(int *)(iVar5 + 0x70) != 0) {
    return;
  }
  iVar5 = fn_8249ABC0();
  if ((*(int *)(iVar5 + 8) == 2) || (*(int *)(iVar5 + 8) == 1)) {
    iVar5 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar5 = fn_82250A18();
    }
    if (*(char *)(iVar5 + 4) == '\0') {
      return;
    }
  }
  dVar10 = (double)lbl_821CC160;
  if ((double)*(float *)(*(int *)(param_1 + 0x14) + 0x838) <= dVar10) {
    dVar10 = (double)(lbl_8327F894 * *(float *)(*(int *)(param_1 + 0x14) + 0x820));
  }
  puVar6 = *(undefined4 **)(param_1 + 0x298);
  if (puVar6 != (undefined4 *)0x0) {
    piVar2 = (int *)puVar6[1];
    for (piVar4 = (int *)*puVar6; piVar4 != piVar2; piVar4 = piVar4 + 0x17) {
      fn_822ABA88(*(undefined4 *)
                    (piVar4[1] * 4 + **(int **)(*piVar4 * 4 + **(int **)(param_1 + 0x1c))),piVar4[2]
                  );
      fn_822B67F8();
      fn_822B97F8();
    }
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    fn_822444F0();
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    fn_82350D88(param_1);
    break;
  case 1:
    fn_82350F08(param_1);
    break;
  case 3:
    fn_82351028(param_1);
    break;
  case 4:
    fn_82351198(param_1);
    break;
  case 5:
    fn_823515E0(dVar10,param_1);
    break;
  case 6:
    fn_82351E78(dVar10,param_1);
    break;
  case 7:
    fn_82351F88(param_1);
    break;
  case 8:
    fn_823520F0(dVar10,param_1);
    break;
  case 9:
    fn_82352208(dVar10,param_1);
    break;
  case 10:
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(dVar10);
    }
    break;
  case 0xb:
    fn_82352358(param_1);
    break;
  case 0xc:
    fn_823524B0(dVar10,param_1);
    break;
  case 0xd:
    if ((*(int **)(param_1 + 0x18) != (int *)0x0) &&
       (iVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(dVar10), iVar5 == 0)) break;
    fn_82356050(param_1);
    if (lbl_832765BC == 0) {
      if (*(int *)(param_1 + 8) != 0xe) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = 0xe;
      }
      break;
    }
    fn_82356C90(param_1);
    uVar8 = 0x10;
    goto LAB_82350048;
  case 0xe:
    fn_82352788(dVar10,param_1);
    break;
  case 0xf:
    fn_82353230(param_1);
    break;
  case 0x11:
    fn_823525D0(param_1);
    break;
  case 0x12:
    iVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))(dVar10);
    if (iVar5 == 0) break;
    uVar8 = 0xf;
LAB_82350048:
    fn_82350888(param_1,uVar8);
  }
  if ((*(int *)(param_1 + 0x294) != 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    fn_82567CC0(dVar10,*(int *)(param_1 + 0x294),param_1 + 0xb0);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if ((iVar5 != 0) &&
     (((*(int *)(iVar5 + 0x104) != 0 || (*(int *)(iVar5 + 0xfc) != 0)) &&
      (*(int *)(param_1 + 0x37c) == 0)))) {
    if (lbl_832765BC != 0) {
      auStack_290[0] = 0;
      fn_82460070(lbl_832765BC,auStack_290);
      cVar7 = fn_82534820(auStack_290[0]);
      if (cVar7 != '\0') {
        fn_82536590(auStack_290,0);
      }
    }
    *(undefined4 *)(param_1 + 0x37c) = 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_822B39D0(*(undefined4 *)(*(int *)(param_1 + 0x20) + 8));
  }
  if (*(int *)(param_1 + 8) != 10) {
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(dVar10);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_822AE3C0(dVar10);
    }
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(dVar10);
    }
  }
  if ((*(int *)(param_1 + 0x3e0) != 0) && (lbl_832765BC != 0)) {
    fn_8245FC80(dVar10,lbl_832765BC);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 != 0) {
    if ((*(int *)(iVar5 + 0xe0) != 0) &&
       (*(int *)(*(int *)(*(int *)(iVar5 + 0xd4) + 0x18) + 0x14) == 0)) {
      if (*(int *)(param_1 + 0x388) == 0) {
        puVar6 = (undefined4 *)fn_8265C9E0(0x123c);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = 1;
          puVar6[2] = 1;
          *puVar6 = &lbl_821B23C8;
          if (puVar6 + 3 != (undefined4 *)0x0) {
            fn_82299948(puVar6 + 3,0,0);
          }
        }
        iVar5 = *(int *)(param_1 + 0x38c);
        *(undefined4 **)(param_1 + 0x38c) = puVar6;
        *(undefined4 **)(param_1 + 0x388) = puVar6 + 3;
        if (iVar5 != 0) {
          fn_822315A0();
        }
      }
      fVar1 = *(float *)(param_1 + 900);
      *(float *)(param_1 + 0x380) = fVar1;
      if ((fVar1 < lbl_821955C8) || (lbl_8218EC10 < fVar1)) {
        uStack_280 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_27e,0,0x3e);
      }
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((((*(int *)(iVar5 + 0xe0) != 0) &&
          (*(int *)(*(int *)(*(int *)(iVar5 + 0xd4) + 0x18) + 0x14) == 0)) ||
         (*(int *)(iVar5 + 0x10c) != 0)) &&
        ((*(int *)(param_1 + 0x2a0) != 0 && ((uint *)(param_1 + 0x334) != (uint *)0x0)))) &&
       ((uVar9 = (ulonglong)*(uint *)(param_1 + 0x334),
        uVar9 != (uVar9 - 1) + (ulonglong)(uVar9 == 0) && (*(int *)(param_1 + 0x42c) != 0)))) {
      uStack_240 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_23e,0,0x1fe);
    }
    piVar4 = *(int **)(param_1 + 0x2ac);
    if ((piVar4 != (int *)0x0) &&
       ((((iVar5 = *(int *)(param_1 + 0x18), *(int *)(iVar5 + 0xf4) != 0 ||
          (*(int *)(iVar5 + 0x104) != 0)) || (*(int *)(iVar5 + 0xfc) != 0)) && (*piVar4 != 1)))) {
      *piVar4 = 1;
      fn_82672C20(piVar4[2],0xffffffff821ab560,0,0);
    }
    if ((*(int *)(param_1 + 0x2ac) != 0) &&
       (iVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0xa0))(),
       iVar5 != *(int *)(param_1 + 0x2a4))) {
      lVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0xa0))();
      *(int *)(param_1 + 0x2a4) = (int)lVar3;
      if (lVar3 == 0) {
        uStack_240 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_23e,0,0x1fe);
      }
      fn_8229EAA8(*(undefined4 *)(param_1 + 0x2ac));
    }
  }
  return;
}

