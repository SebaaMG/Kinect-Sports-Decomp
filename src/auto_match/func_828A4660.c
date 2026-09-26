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
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_8287D5C0();
extern int fn_8287FD98();
extern int fn_82881320();
extern int fn_82882290();
extern int fn_82883FC8();
extern int fn_82886518();
extern int fn_82890780();
extern int fn_82892C38();
extern int fn_82897BD0();
extern int fn_8289D390();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_828A17A0();
extern int fn_828A3C08();
extern int fn_828A3CB8();
extern int fn_828A9FC0();
extern int fn_828AE888();
extern int fn_828AEBC0();
extern int fn_828AEC08();
extern int fn_828AECC0();
extern int fn_828B0230();
extern int fn_828B0390();
extern int fn_828B15B0();
extern int fn_828B22F0();
extern int fn_828BE158();
extern int fn_828C0038();
extern int fn_828C3DD8();
extern int fn_828CAC20();
extern int fn_828CB310();
extern int fn_828D0AF0();
extern int fn_828D0EE8();
extern int fn_828D0F50();
extern int fn_828D1378();
extern int fn_828D14D0();
extern int fn_828D2040();
extern int fn_828D4540();
extern int fn_828D4680();
extern int fn_828D48E8();
extern int fn_828D4968();
extern int fn_828D5FC8();
extern int fn_82A4AAA8();
extern unsigned int iStack_60;
extern unsigned int lbl_83213FC8;


void fn_828A4660(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar7;
  char cVar12;
  undefined8 uVar4;
  int *piVar8;
  ulonglong uVar5;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar6;
  int iVar11;
  longlong lVar13;
  undefined4 **ppuVar14;
  undefined8 uVar15;
  double dVar16;
  int iStack_60;
  undefined4 *apuStack_5c [23];
  
  *(undefined1 *)(param_2 + 0xb) = 1;
  piVar7 = (int *)fn_825089A0();
  uVar15 = (**(code **)(*piVar7 + 8))();
  if (*(char *)(param_2 + 0x2b) != '\0') {
    *(undefined1 *)(param_2 + 0x2b) = 0;
    fn_828AE888(param_2,param_2[0x2c]);
  }
  piVar7 = *(int **)param_2[0x74];
  if (piVar7 != (int *)param_2[0x74]) {
    do {
      iVar10 = piVar7[2];
      cVar12 = fn_82881320(iVar10);
      if (cVar12 != '\0') {
        fn_82883FC8(iVar10);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)param_2[0x74]);
  }
  fn_828B22F0(param_2 + 0x74);
  fn_828A9FC0(param_2);
  piVar7 = *(int **)param_2[0xba];
  if (piVar7 != (int *)param_2[0xba]) {
    do {
      fn_828D5FC8(piVar7[2]);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)param_2[0xba]);
  }
  fn_828B0390(param_2);
  piVar7 = param_2 + 0xe;
  lVar13 = 4;
  do {
    if (*piVar7 != 0) {
      fn_828D14D0();
      cVar12 = fn_828D0EE8(*piVar7);
      if (cVar12 != '\0') {
        uVar4 = fn_828D0F50(*piVar7);
        piVar8 = (int *)fn_825089A0();
        uVar5 = (**(code **)(*piVar8 + 0x24))(piVar8,0x1c,1);
        if ((uVar5 & 0xffffffff) == 0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9 = (undefined4 *)fn_828D1378(uVar5,uVar4);
        }
        ppuVar14 = (undefined4 **)(piVar7 + 4);
        apuStack_5c[0] = puVar9;
        if (ppuVar14 == apuStack_5c) {
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)*puVar9)(puVar9,0);
            piVar8 = (int *)fn_825089A0();
            (**(code **)(*piVar8 + 0x28))(piVar8,puVar9);
          }
        }
        else {
          puVar1 = *ppuVar14;
          if (puVar9 != puVar1) {
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(puVar1,0);
              piVar8 = (int *)fn_825089A0();
              (**(code **)(*piVar8 + 0x28))(piVar8,puVar1);
            }
            *ppuVar14 = puVar9;
          }
        }
        puVar9 = (undefined4 *)*piVar7;
        if (puVar9 != (undefined4 *)0x0) {
          (**(code **)*puVar9)(puVar9,0);
          piVar8 = (int *)fn_825089A0();
          (**(code **)(*piVar8 + 0x28))(piVar8,puVar9);
          *piVar7 = 0;
        }
      }
    }
    lVar13 = lVar13 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar13 != 0);
  if ((int *)param_2[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_2[0x23] + 4))();
  }
  fn_828C3DD8(param_2);
  fn_828B0230(param_2 + 0x9e);
  uVar5 = (ulonglong)lbl_83213FC8;
  if (uVar5 == 0) {
    uVar5 = fn_828A17A0();
  }
  fn_828D0AF0(uVar5,param_2);
  fn_828A3C08(uVar15,param_2);
  iVar10 = fn_8289D8D0(param_2);
  if (((iVar10 != 0) && (*(int *)(iVar10 + 4) == 1)) &&
     (cVar12 = fn_828B15B0(*(undefined4 *)(iVar10 + 100)), cVar12 != '\0')) {
    fn_828AE888(param_2,10);
  }
  apuStack_5c[0] = *(undefined4 **)param_2[0x88];
  if (apuStack_5c[0] != (int *)param_2[0x88]) {
    do {
      piVar7 = (int *)apuStack_5c[0][4];
      fn_82381BC0(apuStack_5c);
      (**(code **)(*piVar7 + 0x10))(param_1,piVar7);
      iVar10 = fn_8289D8D0(param_2);
      if ((iVar10 != 0) && (uVar5 = (**(code **)(*piVar7 + 0xc))(piVar7), (uVar5 & 0xffffffff) != 0)
         ) {
        fn_8289D8D0(param_2);
        cVar12 = fn_8289DAD0();
        if (cVar12 != '\0') {
          iVar10 = fn_82A4AAA8(uVar5);
          if (iVar10 == 0) {
            cVar12 = fn_828AEBC0(uVar5);
            if (cVar12 != '\0') {
              fn_828AECC0(uVar5,1);
              iStack_60 = *(int *)param_2[0x8c];
              if ((int *)iStack_60 != (int *)param_2[0x8c]) {
                do {
                  uVar2 = *(undefined4 *)(iStack_60 + 0x10);
                  uVar6 = fn_8265C9E0(0xd8);
                  if ((uVar6 & 0xffffffff) == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = fn_823AA970(uVar5);
                    uVar15 = fn_828D2040(uVar6,3,uVar15);
                  }
                  fn_82886518(uVar15,0xffffffffffffffff,0xffffffffffffffff);
                  uVar4 = fn_82897BD0(uVar2);
                  fn_828BE158(param_2,uVar15,uVar4,0);
                  fn_82381BC0(&iStack_60);
                } while (iStack_60 != param_2[0x8c]);
              }
            }
          }
          else if (iVar10 == 2) {
            bVar3 = false;
            iVar10 = fn_82897BD0(uVar5);
            if (iVar10 == -1) {
LAB_828a4a04:
              bVar3 = true;
            }
            else {
              fn_82897BD0(uVar5);
              cVar12 = fn_82882290();
              if (cVar12 != '\0') goto LAB_828a4a04;
              fn_828C0038(9);
              cVar12 = fn_828AEC08(uVar5);
              if (cVar12 != '\0') goto LAB_828a4a04;
            }
            if (bVar3) {
              fn_823AA970(piVar7);
              (**(code **)*piVar7)(piVar7,1);
            }
          }
        }
      }
    } while (apuStack_5c[0] != (undefined4 *)param_2[0x88]);
  }
  uVar15 = fn_828CB310();
  fn_828CAC20(uVar15,param_2);
  apuStack_5c[0] = *(undefined4 **)param_2[0x8c];
  if (apuStack_5c[0] != (int *)param_2[0x8c]) {
    do {
      puVar9 = apuStack_5c[0];
      piVar7 = (int *)fn_825089A0();
      dVar16 = (double)(**(code **)(*piVar7 + 8))();
      iVar10 = puVar9[4];
      iVar11 = fn_82A4AAA8(iVar10);
      if (iVar11 == 1) {
        uVar15 = fn_82897BD0(iVar10);
        uVar4 = fn_8287FD98();
        cVar12 = fn_8287D5C0(uVar4,uVar15);
        if (cVar12 != '\0') {
          fn_8289D390(param_2,iVar10);
          fn_82892C38(iVar10);
          *(float *)(iVar10 + 0x90) = (float)dVar16;
        }
      }
      fn_82381BC0(apuStack_5c);
    } while (apuStack_5c[0] != (undefined4 *)param_2[0x8c]);
  }
  fn_828A3CB8(param_2);
  fn_82890780(param_2);
  uVar15 = fn_828D48E8();
  fn_828D4968(uVar15,param_2);
  iVar10 = (**(code **)(*param_2 + 0x28))(param_2);
  if (iVar10 != 0) {
    fn_828D4680();
  }
  iVar10 = (**(code **)(*param_2 + 0x30))(param_2);
  if (iVar10 != 0) {
    fn_828D4540();
  }
  *(undefined1 *)(param_2 + 0xb) = 0;
  return;
}

