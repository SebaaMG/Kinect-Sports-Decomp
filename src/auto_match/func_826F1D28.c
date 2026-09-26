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
extern int fn_8268D210();
extern int fn_826F0360();
extern int fn_826F0610();
extern int fn_826F16C0();
extern int fn_82F65390();
extern int fn_82F66A80();
extern unsigned int iStack_70;
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int lbl_8200DA90;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;


void fn_826F1D28(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte **ppbVar5;
  uint uVar7;
  uint uVar8;
  undefined8 uVar6;
  uint uVar9;
  byte *pbStack_b0;
  uint uStack_ac;
  byte *pbStack_a8;
  uint uStack_a4;
  byte *pbStack_a0;
  uint uStack_9c;
  byte *pbStack_98;
  uint uStack_94;
  byte *pbStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  int iStack_70;
  byte **ppbStack_6c;
  undefined4 *puStack_68;
  
  uStack_ac = param_2[1];
  piVar4 = (int *)0x0;
  pbVar2 = (byte *)*param_2;
  if (uStack_ac != 0) {
    do {
      uVar8 = 0;
      if (uStack_ac != 0) {
        do {
          if ((pbVar2[uVar8] == 0) || (pbVar2[uVar8] == 0x3a)) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_ac);
      }
      if (pbVar2 == (byte *)0x0) {
        return;
      }
      if (uVar8 == 0) {
        return;
      }
      uVar9 = uVar8 + 1;
      uVar7 = uVar9;
      if (uStack_ac < uVar9) {
        uVar7 = uStack_ac;
      }
      pbStack_b0 = pbVar2 + uVar7;
      uStack_ac = uStack_ac - uVar7;
      iVar3 = fn_82F66A80(*pbVar2);
      if (iVar3 == 0) {
        bVar1 = *pbVar2;
        if (bVar1 < 0x59) {
          if (bVar1 == 0x58) {
LAB_826f1ec8:
            uStack_94 = 0;
            pbStack_98 = pbStack_b0;
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x7ffffff | 0x80000000;
            if (uStack_ac != 0) {
              do {
                if ((pbStack_b0[uStack_94] == 0) || (pbStack_b0[uStack_94] == 0x3a)) break;
                uStack_94 = uStack_94 + 1;
              } while (uStack_94 < uStack_ac);
            }
            ppbVar5 = &pbStack_98;
          }
          else {
            if ((((bVar1 != 0x20) && (bVar1 != 0x23)) && (bVar1 != 0x2b)) &&
               ((bVar1 < 0x2d || (0x2e < bVar1)))) {
LAB_826f1e64:
              iVar3 = *(int *)(param_1 + 4);
              if (*(int *)(iVar3 + 0x14) != 0) {
                ppbStack_6c = &pbStack_b0;
                puStack_68 = &uStack_80;
                uStack_7c = 0;
                uStack_78 = 0;
                uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x28);
                iStack_70 = iVar3;
                piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x14) + 4))
                                          (*(int **)(iVar3 + 0x14),&iStack_70);
              }
              goto LAB_826f2034;
            }
            ppbVar5 = &pbStack_a0;
            pbStack_a0 = pbVar2;
            uStack_9c = uVar8;
          }
          goto LAB_826f1df0;
        }
        if (bVar1 == 0x62) {
          iVar3 = fn_82F65390(pbVar2,0xffffffff8200dad0,4);
          if (iVar3 == 0) {
            iVar3 = fn_826F0360(&pbStack_b0,10,0x3a);
            *(uint *)(param_1 + 0x1c) = iVar3 << 0x1b | *(uint *)(param_1 + 0x1c) & 0x7ffffff;
          }
        }
        else {
          if (bVar1 == 0x6f) {
            uStack_8c = 0;
            pbStack_90 = pbStack_b0;
            *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0x7ffffff | 0x40000000;
            if (uStack_ac != 0) {
              do {
                if ((pbStack_b0[uStack_8c] == 0) || (pbStack_b0[uStack_8c] == 0x3a)) break;
                uStack_8c = uStack_8c + 1;
              } while (uStack_8c < uStack_ac);
            }
            ppbVar5 = &pbStack_90;
            goto LAB_826f1df0;
          }
          if (bVar1 != 0x73) {
            if (bVar1 != 0x78) goto LAB_826f1e64;
            *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0x7f;
            goto LAB_826f1ec8;
          }
          if (pbVar2[1] == 0x77) {
            piVar4 = (int *)fn_8268D210((ulonglong)*(uint *)(param_1 + 4) + 0xf4,0x24);
            uVar8 = uStack_ac;
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              uVar6 = *(undefined8 *)(param_1 + 0x28);
              iVar3 = *(int *)(param_1 + 4);
              *(undefined1 *)(piVar4 + 2) = 0;
              *piVar4 = (int)&lbl_8200DA90;
              piVar4[3] = (int)uVar6;
              piVar4[1] = iVar3;
              piVar4[4] = 0;
              piVar4[5] = 0;
              piVar4[6] = 0;
              piVar4[7] = 0;
              piVar4[8] = 0;
            }
            uStack_ac = 0;
            pbStack_b0 = pbStack_b0 + uVar8;
            break;
          }
          iVar3 = fn_82F65390(pbVar2,0xffffffff8200dad8,3);
          if (iVar3 == 0) {
            uVar8 = 0;
            if (uStack_ac != 0) {
              do {
                if ((pbStack_b0[uVar8] == 0) || (pbStack_b0[uVar8] == 0x3a)) break;
                uVar8 = uVar8 + 1;
              } while (uVar8 < uStack_ac);
              if (uVar8 != 0) {
                *(byte *)(param_1 + 0x15) = *pbStack_b0 << 1 | *(byte *)(param_1 + 0x15) & 1;
              }
            }
            if (uStack_ac < uVar8) {
              uVar8 = uStack_ac;
            }
            pbStack_b0 = pbStack_b0 + uVar8;
            uStack_ac = uStack_ac - uVar8;
          }
        }
      }
      else {
        ppbVar5 = &pbStack_a8;
        pbStack_a8 = pbVar2;
        uStack_a4 = uVar8;
LAB_826f1df0:
        fn_826F16C0(param_1 + 0x10,ppbVar5);
      }
LAB_826f2034:
      pbVar2 = pbStack_b0;
    } while (uStack_ac != 0);
    if (piVar4 != (int *)0x0) {
      uVar8 = param_2[1];
      if (uVar8 < uVar9) {
        uVar9 = uVar8;
      }
      iStack_84 = uVar8 - uVar9;
      iStack_88 = uVar9 + *param_2;
      if (iStack_84 != 0) {
        (**(code **)(*piVar4 + 8))(piVar4,&iStack_88);
      }
      fn_826F0610(*(undefined4 *)(param_1 + 4),param_1,piVar4,1);
    }
  }
  return;
}

