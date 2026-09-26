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
extern int fn_824F1588();
extern int fn_824F1E50();
extern int fn_82522D98();
extern int fn_82576400();
extern int fn_82576478();
extern int fn_82577628();
extern int fn_8265C9E0();
extern int fn_82F64C68();
extern unsigned int lbl_82191164;
extern unsigned int lbl_82191168;
extern unsigned int lbl_821C1EA8;
extern unsigned int lbl_821C1EB8;


undefined4 *
fn_824E6468(double param_1,undefined8 param_2,int param_3,char *param_4,undefined8 param_5,
             undefined8 param_6,undefined1 param_7,undefined1 param_8,undefined8 param_9)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ulonglong uVar3;
  undefined4 *puVar8;
  char *pcVar9;
  undefined **ppuVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  ppuVar10 = &lbl_82191164;
  uVar12 = 0;
  while (iVar4 = fn_82F64C68(*ppuVar10,param_4), iVar4 == 0) {
    uVar12 = uVar12 + 1;
    ppuVar10 = ppuVar10 + 2;
    if (3 < uVar12) {
      return (undefined4 *)0x0;
    }
  }
  pcVar9 = (&lbl_82191164)[uVar12 * 2];
  uVar12 = (&lbl_82191168)[uVar12 * 2];
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  if (uVar12 == 4) {
    return (undefined4 *)0x0;
  }
  iVar4 = *(int *)(param_3 + 0xd54);
  puVar2 = *(undefined4 **)(param_3 + 0x93c);
  piVar11 = (int *)(iVar4 + 0x20);
  puVar5 = (undefined4 *)fn_82577628(param_1,param_2,param_6,param_9);
  *(undefined1 *)(puVar5 + 0x69) = param_7;
  *(undefined1 *)((int)puVar5 + 0x1a5) = param_8;
  *(undefined1 *)((int)puVar5 + 0x1a6) = 0;
  puVar5[0x6d] = 0;
  puVar5[0x6f] = puVar2;
  if (uVar12 == 0) {
    if (*piVar11 == 0) {
      uVar3 = fn_8265C9E0(0x7c);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_824F1E50(uVar3,puVar2);
      }
      *piVar11 = iVar4;
      fn_82576400(puVar2);
    }
    puVar5[0x6b] = *piVar11;
    piVar11 = (int *)*piVar11;
  }
  else {
    if (uVar12 == 1) {
      if (*piVar11 == 0) {
        uVar3 = fn_8265C9E0(0x7c);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_824F1E50(uVar3,puVar2);
        }
        *piVar11 = iVar4;
        fn_82576400(puVar2);
      }
      puVar5[0x6b] = *piVar11;
      iVar4 = *piVar11;
      puVar6 = (undefined4 *)fn_8265C9E0(0x30);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[8] = (float)param_1;
        puVar6[2] = (float)param_1;
        puVar6[1] = puVar5;
        *puVar6 = &lbl_821C1EA8;
        puVar8 = (undefined4 *)((uint)(puVar5 + 0x28) & 0xfffffff0);
        uVar7 = *puVar8;
        uVar13 = puVar8[1];
        uVar14 = puVar8[2];
        uVar15 = puVar8[3];
        puVar6[9] = iVar4;
        puVar8 = (undefined4 *)((uint)(puVar6 + 4) & 0xfffffff0);
        *puVar8 = uVar7;
        puVar8[1] = uVar13;
        puVar8[2] = uVar14;
        puVar8[3] = uVar15;
      }
      puVar8 = (undefined4 *)fn_82522D98(8);
      *puVar8 = puVar6;
      puVar8[1] = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 **)(iVar4 + 0x10) = puVar8;
      puVar5[0x74] = puVar6;
      puVar5[0x6c] = puVar6;
      goto LAB_824e6638;
    }
    if (uVar12 < 3) {
      if (*(int *)(iVar4 + 0x2c) == 0) {
        uVar3 = fn_8265C9E0(0x1c);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_824F1588(uVar3,puVar2);
        }
        *(undefined4 *)(iVar4 + 0x2c) = uVar7;
        fn_82576400(puVar2);
      }
      puVar5[0x6b] = *(undefined4 *)(iVar4 + 0x2c);
      piVar11 = *(int **)(iVar4 + 0x2c);
    }
    else {
      if (uVar12 != 3) {
        return (undefined4 *)0x0;
      }
      if (*(int *)(iVar4 + 0x30) == 0) {
        puVar6 = (undefined4 *)fn_8265C9E0(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = puVar2;
          *puVar6 = &lbl_821C1EB8;
          if (puVar2 == (undefined4 *)0x0) {
            puVar6[2] = 0;
          }
          else {
            puVar6[2] = *puVar2;
          }
          puVar6[3] = 0;
        }
        *(undefined4 **)(iVar4 + 0x30) = puVar6;
        fn_82576478(puVar2);
      }
      puVar5[0x6b] = *(undefined4 *)(iVar4 + 0x30);
      piVar11 = *(int **)(iVar4 + 0x30);
    }
  }
  uVar7 = (**(code **)(*piVar11 + 4))(param_1,piVar11,0,puVar5);
  puVar5[0x74] = uVar7;
  puVar5[0x6c] = uVar7;
LAB_824e6638:
  uVar7 = puVar2[0x2b];
  piVar11 = puVar2 + 0x1a;
  if (piVar11 != (int *)0x0) {
    if (*piVar11 == 0) {
      *piVar11 = (int)puVar5;
    }
    else {
      *(undefined4 **)(puVar2[0x1b] + 0x1e4) = puVar5;
    }
    puVar2[0x1b] = puVar5;
  }
  *puVar5 = uVar7;
  puVar2[0x2b] = puVar2[0x2b] + 1;
  return puVar5;
}

