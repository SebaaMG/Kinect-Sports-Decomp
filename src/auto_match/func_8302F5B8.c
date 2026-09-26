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
extern unsigned int *auStack_110;
extern unsigned int *auStack_d4;
extern int fn_82F68CC0();
extern int fn_82FAB9C0();
extern int fn_82FF5140();
extern int fn_83004208();
extern int fn_8300CAF0();
extern int fn_8301AE78();
extern int fn_8301AEF8();
extern int fn_83031170();
extern int fn_83032B40();
extern int fn_83032D88();
extern int fn_83033910();
extern int fn_830339D8();
extern int fn_83033B60();
extern int fn_83033C00();
extern int fn_83033C70();
extern int fn_83033D28();
extern int fn_83033DC8();
extern unsigned int iStack_124;
extern unsigned int iStack_74;
extern unsigned int iStack_8c;
extern unsigned int iStack_d8;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_83264304;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


undefined8 fn_8302F5B8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  byte bVar14;
  int *piVar15;
  int aiStack_130 [2];
  uint uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_110 [16];
  int aiStack_100 [4];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  undefined1 auStack_d4 [72];
  int iStack_8c;
  undefined1 *puStack_78;
  int iStack_74;
  
  iVar2 = *param_2;
  uVar11 = 2;
  uVar7 = fn_8300CAF0(param_1 + 0x2a,param_2[2],param_1[0x2f],param_1[0x2e]);
  if ((*(byte *)((int)param_1 + 0x3e) & 0x40) != 0) {
    iStack_8c = param_2[0x1c];
    iStack_d8 = param_2[2];
    uStack_f0 = *(undefined8 *)(param_2 + 4);
    uStack_e8 = *(undefined8 *)(param_2 + 6);
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    fn_82F68CC0(auStack_d4,param_2 + 10,0x48);
    iVar8 = fn_83031170(param_1 + 0x41,&uStack_f0);
    if (iVar8 == 0) {
      return 2;
    }
    fn_82FF5140(lbl_83264304,param_2[8]);
    (**(code **)(*param_1 + 0x94))(param_1,3);
  }
  fn_83033C00(aiStack_130,param_2,param_1);
  iVar8 = 0;
  puVar13 = (undefined4 *)param_1[0x31];
  for (puVar3 = puVar13; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    if (puVar3[1] == uVar7) {
      piVar12 = puVar3 + 2;
      if (piVar12 != (int *)0x0) goto LAB_8302f714;
      break;
    }
  }
  uVar7 = param_1[0x30];
  for (; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13) {
    if (puVar13[1] == uVar7) {
      piVar12 = puVar13 + 2;
      if (piVar12 != (int *)0x0) goto LAB_8302f714;
      break;
    }
  }
  goto LAB_8302f9d8;
LAB_8302f714:
  fn_8301AE78(&uStack_128,lbl_832642EC,param_2[2],param_1[3]);
  for (puVar13 = (undefined4 *)param_1[0x31]; puVar13 != (undefined4 *)0x0;
      puVar13 = (undefined4 *)*puVar13) {
    if (puVar13[1] == uStack_128) {
      puVar13 = puVar13 + 2;
      goto LAB_8302f758;
    }
  }
  puVar13 = (undefined4 *)0x0;
LAB_8302f758:
  if (uStack_128 == uVar7) {
    iStack_124 = iStack_124 + 1;
  }
  else {
    iStack_124 = 1;
    uStack_128 = uVar7;
  }
  bVar4 = iStack_124 == 1;
  fn_8301AEF8(lbl_832642EC,param_2[2],param_1[3],&uStack_128);
  piVar15 = (int *)*piVar12;
  if (piVar15 != (int *)piVar12[1]) {
    do {
      fn_82F68CC0(&uStack_f0,param_2,0x88);
      for (puVar3 = (undefined4 *)param_1[0x39]; puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3[1] == *piVar15) {
          if (puVar3 + 2 != (undefined4 *)0x0) {
            uStack_120 = puVar3[2];
            uStack_11c = puVar3[3];
            uStack_118 = ((((U64)(uStack_118)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)puVar3[4] >> 0x18))) & ((U64)0xFF)) << 0));
            uVar6 = puVar3[4];
            bVar14 = (((U64)(uStack_118) >> 0) & 0xFF);
            goto code_r0x8302f7f4;
          }
          break;
        }
      }
      uVar6 = uStack_118;
      bVar14 = 0;
code_r0x8302f7f4:
      uStack_118 = uVar6;
      if (((*(byte *)((int)param_1 + 0x3e) & 0x40) == 0) || ((bVar14 & 8) == 0)) {
code_r0x8302f884:
        if ((((bVar4) || ((bVar14 & 0x10) == 0)) && ((iStack_74 == 0 || (iVar8 == 0)))) &&
           (piVar9 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar9 != (int *)0x0)) {
          if (iVar2 == 1) {
            fn_830339D8(auStack_110,puStack_78);
            if ((piVar12[1] - *piVar12 & 0xfffffffcU) == 4) {
              uVar11 = fn_83033C70(param_1,*(undefined4 *)(puStack_78 + 0x10));
              fn_83004208(aiStack_100,uVar11);
code_r0x8302f97c:
              puStack_78 = auStack_110;
              uVar11 = (**(code **)(*piVar9 + 0x18))(piVar9,&uStack_f0);
            }
            else {
              iVar10 = fn_83032B40();
              iVar5 = aiStack_100[0];
              bVar1 = aiStack_100[0] != 0;
              aiStack_100[0] = iVar10;
              if (bVar1) {
                fn_83032D88(iVar5);
              }
              if (aiStack_100[0] == 0) {
                uVar11 = 0x34;
              }
              else {
                uVar11 = fn_83033B60(param_1,auStack_110,&uStack_f0,aiStack_130);
                if ((int)uVar11 == 1) goto code_r0x8302f97c;
              }
            }
            fn_83033910(auStack_110);
          }
          else {
            uVar11 = (**(code **)(*piVar9 + 0x18))(piVar9,&uStack_f0);
          }
          if ((int)uVar11 == 1) {
            iVar8 = iVar8 + 1;
          }
          (**(code **)(*piVar9 + 8))(piVar9);
        }
      }
      else {
        bVar1 = false;
        if (puVar13 != (undefined4 *)0x0) {
          for (piVar9 = (int *)*puVar13; piVar9 != (int *)puVar13[1]; piVar9 = piVar9 + 1) {
            if (*piVar9 == *piVar15) {
              bVar1 = true;
              break;
            }
          }
        }
        if (!bVar1) goto code_r0x8302f884;
      }
      piVar15 = piVar15 + 1;
    } while (piVar15 != (int *)piVar12[1]);
  }
LAB_8302f9d8:
  if (iVar2 == 1) {
    if ((iVar8 == 0) && ((*(byte *)((int)param_1 + 0x3e) & 0x40) == 0)) {
      uVar11 = fn_83033DC8(param_1,param_2);
    }
    else {
      if (aiStack_130[0] == 0) {
        return uVar11;
      }
      uVar11 = fn_83033D28(param_1);
    }
  }
  if (aiStack_130[0] != 0) {
    fn_83032D88();
  }
  return uVar11;
}

