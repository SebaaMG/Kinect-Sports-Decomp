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
extern int fn_826F0610();
extern int fn_826F16C0();
extern int fn_82F65390();
extern int fn_82F66A80();
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8200DA90;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_826F2120(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte **ppbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte *pbStack_c0;
  uint uStack_bc;
  byte *pbStack_b8;
  uint uStack_b4;
  byte *pbStack_b0;
  uint uStack_ac;
  byte *pbStack_a8;
  uint uStack_a4;
  byte *pbStack_a0;
  uint uStack_9c;
  byte *pbStack_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  longlong lStack_88;
  int iStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  int iStack_70;
  byte **ppbStack_6c;
  int *piStack_68;
  
  uStack_bc = param_2[1];
  piVar4 = (int *)0x0;
  dVar10 = lbl_82005710;
  dVar11 = lbl_82005730;
  pbVar2 = (byte *)*param_2;
  if (uStack_bc == 0) {
    return;
  }
  do {
    uVar8 = 0;
    if (uStack_bc != 0) {
      do {
        if ((pbVar2[uVar8] == 0) || (pbVar2[uVar8] == 0x3a)) break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uStack_bc);
    }
    if (pbVar2 == (byte *)0x0) {
      return;
    }
    if (uVar8 == 0) {
      return;
    }
    uVar7 = uVar8 + 1;
    uVar6 = uVar7;
    if (uStack_bc < uVar7) {
      uVar6 = uStack_bc;
    }
    pbStack_c0 = pbVar2 + uVar6;
    uStack_bc = uStack_bc - uVar6;
    iVar3 = fn_82F66A80(*pbVar2);
    if (iVar3 == 0) {
      bVar1 = *pbVar2;
      if (bVar1 < 0x48) {
        if (bVar1 == 0x47) {
LAB_826f237c:
          uStack_a4 = 0;
          *(undefined4 *)(param_1 + 0x1c) = 2;
          if (uStack_bc != 0) {
            do {
              if ((pbStack_c0[uStack_a4] == 0) || (pbStack_c0[uStack_a4] == 0x3a)) break;
              uStack_a4 = uStack_a4 + 1;
            } while (uStack_a4 < uStack_bc);
          }
          pbStack_a8 = pbStack_c0;
          ppbVar5 = &pbStack_a8;
        }
        else {
          if (((bVar1 != 0x20) && (bVar1 != 0x23)) && (bVar1 != 0x2b)) {
            if (0x2c < bVar1) {
              if (bVar1 < 0x2f) goto LAB_826f2240;
              if (bVar1 == 0x45) goto LAB_826f2420;
            }
LAB_826f2270:
            iVar3 = *(int *)(param_1 + 4);
            if (*(int *)(iVar3 + 0x14) != 0) {
              dVar9 = *(double *)(param_1 + 0x20);
              if (dVar9 <= dVar10) {
                dVar9 = dVar9 - dVar11;
              }
              else {
                dVar9 = dVar9 + dVar11;
              }
              iStack_80 = (int)dVar9;
              lStack_88 = (longlong)iStack_80;
              ppbStack_6c = &pbStack_c0;
              piStack_68 = &iStack_80;
              uStack_7c = 1;
              uStack_78 = 0;
              iStack_70 = iVar3;
              piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x14) + 4))
                                        (*(int **)(iVar3 + 0x14),&iStack_70);
            }
            goto LAB_826f2470;
          }
LAB_826f2240:
          ppbVar5 = &pbStack_b0;
          pbStack_b0 = pbVar2;
          uStack_ac = uVar8;
        }
        goto LAB_826f2464;
      }
      if (bVar1 == 0x65) {
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0x7f;
LAB_826f2420:
        uStack_94 = 0;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if (uStack_bc != 0) {
          do {
            if ((pbStack_c0[uStack_94] == 0) || (pbStack_c0[uStack_94] == 0x3a)) break;
            uStack_94 = uStack_94 + 1;
          } while (uStack_94 < uStack_bc);
        }
        pbStack_98 = pbStack_c0;
        ppbVar5 = &pbStack_98;
        goto LAB_826f2464;
      }
      if (bVar1 == 0x66) {
        uStack_9c = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (uStack_bc != 0) {
          do {
            if ((pbStack_c0[uStack_9c] == 0) || (pbStack_c0[uStack_9c] == 0x3a)) break;
            uStack_9c = uStack_9c + 1;
          } while (uStack_9c < uStack_bc);
        }
        pbStack_a0 = pbStack_c0;
        ppbVar5 = &pbStack_a0;
        goto LAB_826f2464;
      }
      if (bVar1 == 0x67) {
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0x7f;
        goto LAB_826f237c;
      }
      if (bVar1 != 0x73) goto LAB_826f2270;
      if (pbVar2[1] == 0x77) {
        piVar4 = (int *)fn_8268D210((ulonglong)*(uint *)(param_1 + 4) + 0xf4,0x24);
        uVar8 = uStack_bc;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          dVar9 = *(double *)(param_1 + 0x20);
          if (dVar9 <= dVar10) {
            dVar9 = dVar9 - dVar11;
          }
          else {
            dVar9 = dVar9 + dVar11;
          }
          lStack_88 = (longlong)(int)dVar9;
          iVar3 = *(int *)(param_1 + 4);
          piVar4[3] = (int)dVar9;
          *(undefined1 *)(piVar4 + 2) = 0;
          *piVar4 = (int)&lbl_8200DA90;
          piVar4[1] = iVar3;
          piVar4[4] = 0;
          piVar4[5] = 0;
          piVar4[6] = 0;
          piVar4[7] = 0;
          piVar4[8] = 0;
        }
        uStack_bc = 0;
        pbStack_c0 = pbStack_c0 + uVar8;
        goto LAB_826f2518;
      }
      iVar3 = fn_82F65390(pbVar2,0xffffffff8200dad8,3);
      if (iVar3 == 0) {
        uVar8 = 0;
        if (uStack_bc == 0) goto LAB_826f2518;
        do {
          if ((pbStack_c0[uVar8] == 0) || (pbStack_c0[uVar8] == 0x3a)) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_bc);
        if (uVar8 != 0) {
          *(byte *)(param_1 + 0x15) = *pbStack_c0 << 1 | *(byte *)(param_1 + 0x15) & 1;
        }
      }
    }
    else {
      ppbVar5 = &pbStack_b8;
      pbStack_b8 = pbVar2;
      uStack_b4 = uVar8;
LAB_826f2464:
      fn_826F16C0(param_1 + 0x10,ppbVar5);
    }
LAB_826f2470:
    pbVar2 = pbStack_c0;
    if (uStack_bc == 0) {
LAB_826f2518:
      if (piVar4 != (int *)0x0) {
        uVar8 = param_2[1];
        if (uVar8 < uVar7) {
          uVar7 = uVar8;
        }
        iStack_8c = uVar8 - uVar7;
        iStack_90 = uVar7 + *param_2;
        if (iStack_8c != 0) {
          (**(code **)(*piVar4 + 8))(piVar4,&iStack_90);
        }
        fn_826F0610(*(undefined4 *)(param_1 + 4),param_1,piVar4,1);
      }
      return;
    }
  } while( true );
}

