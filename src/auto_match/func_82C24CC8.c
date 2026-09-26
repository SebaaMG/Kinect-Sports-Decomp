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
extern unsigned int *auStack_70;
extern int fn_82C10AD0();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C24A70();
extern int fn_82C24BE8();
extern int fn_82F691F0();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_78;
extern unsigned int lbl_820ED1E8;
extern unsigned int lbl_820ED1F8;
extern unsigned int uStack_68;
extern unsigned int uStack_74;


ulonglong fn_82C24CC8(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  byte *pbVar12;
  longlong lVar11;
  byte *pbVar13;
  short sVar14;
  int iVar15;
  ulonglong uVar16;
  byte abStack_80 [4];
  byte *pbStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  piVar5 = *(int **)(param_1 + 0x1c);
  auStack_70[0] = 0;
  uVar9 = 0;
  iStack_78 = 0;
  pbStack_7c = (byte *)0x0;
  uStack_74 = 0;
  do {
    uVar6 = piVar5[0x14];
    if (uVar6 < 4) {
      if (uVar6 == 1) {
LAB_82c24d24:
        uVar9 = fn_82C24A70(param_1);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        piVar5[0x14] = 2;
        *(ulonglong *)(piVar5 + 4) = (ulonglong)*(uint *)(piVar5[1] + 4) + 0x32 & 0xffffffff;
      }
      else if (uVar6 == 2) {
        uVar9 = fn_82C24BE8(param_1,&iStack_60,&uStack_68);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        piVar5[0x14] = 3;
        *(undefined8 *)(piVar5 + 0x1a) = uStack_68;
        piVar5[0x15] = iStack_60;
        piVar5[0x16] = iStack_5c;
        piVar5[0x17] = iStack_58;
        piVar5[0x18] = iStack_54;
      }
      else {
        if (uVar6 == 0) goto LAB_82c24d24;
        iStack_60 = piVar5[0x15];
        iStack_5c = piVar5[0x16];
        iStack_58 = piVar5[0x17];
        iVar10 = 0;
        iStack_54 = piVar5[0x18];
        piVar5[0x1c] = 0;
        do {
          pbVar12 = (byte *)&iStack_60;
          iVar15 = iVar10 * 0x14;
          pbVar13 = &lbl_820ED1E8 + iVar15;
          do {
            bVar2 = *pbVar13;
            bVar1 = *pbVar12;
            if ((ulonglong)bVar2 - (ulonglong)bVar1 != 0) break;
            pbVar13 = pbVar13 + 1;
            pbVar12 = pbVar12 + 1;
          } while (pbVar13 != &lbl_820ED1F8 + iVar15);
          if ((int)((ulonglong)bVar2 - (ulonglong)bVar1) == 0) {
            piVar5[0x1c] = *(int *)(&lbl_820ED1F8 + iVar15);
            break;
          }
          sVar14 = (short)iVar10 + 1;
          iVar10 = (int)sVar14;
        } while (sVar14 < 0xf);
        if ((code *)piVar5[0x1c] == (code *)0x0) {
          uVar16 = (*(ulonglong *)(piVar5 + 0x1a) & 0xffffffff) - 0x18;
          uVar9 = (**(code **)(*piVar5 + 0x14))(*piVar5,uVar16);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          piVar5[0x14] = 2;
          piVar5[0x1c] = 0;
          *(ulonglong *)(piVar5 + 2) = (uVar16 & 0xffffffff) + *(longlong *)(piVar5 + 2);
        }
        else {
          uVar9 = (*(code *)piVar5[0x1c])(param_1);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          piVar5[0x14] = 2;
          piVar5[0x1c] = 0;
        }
      }
    }
    else if ((uVar6 != 2) && (uVar6 != 3)) break;
  } while (*(ulonglong *)(piVar5 + 2) < (ulonglong)*(uint *)(piVar5[1] + 4));
  lVar11 = *(longlong *)(piVar5 + 4);
  iVar10 = piVar5[1];
  *(longlong *)(piVar5 + 8) = lVar11;
  *(longlong *)(piVar5 + 10) = lVar11;
  *(longlong *)(piVar5 + 6) = lVar11;
  if (*(uint *)(iVar10 + 0xc) != 0) {
    *(ulonglong *)(piVar5 + 6) =
         ((ulonglong)*(uint *)(iVar10 + 0xc) - 1) * (ulonglong)*(uint *)(iVar10 + 8) + lVar11;
  }
  if ((*(uint *)(iVar10 + 0x20) & 1) != 0) {
    piVar5[6] = -1;
    piVar5[7] = -1;
    *(ulonglong *)(piVar5 + 6) = -1 - (ulonglong)*(uint *)(iVar10 + 8);
  }
  if ((((*(longlong *)(piVar5 + 2) == lVar11 + -0x32) && (*(short *)(iVar10 + 0x2a) == 1)) &&
      (*(short *)(iVar10 + 0x42) == 1)) && (*(short *)(iVar10 + 0x2c) == *(short *)(iVar10 + 0x24)))
  {
    piVar5[0x12] = 1;
    piVar5[0x14] = 4;
    if (0 < *(short *)(iVar10 + 0x48)) {
      uVar9 = fn_82C10F68(piVar5[0x25],auStack_70,&iStack_78,abStack_80);
      if ((uVar9 & 0xffffffff) != 0x80500016) {
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        do {
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          if ((*(int *)(iStack_78 + 0x50) != 0) && (*(int *)(iStack_78 + 0x44) == 0)) {
            uVar9 = fn_82C10F68(*(undefined4 *)(piVar5[1] + 0x7c),&uStack_74,&pbStack_7c,abStack_80
                                );
            if ((uVar9 & 0xffffffff) != 0x80500016) {
              if ((int)uVar9 < 0) {
                return uVar9;
              }
              do {
                if ((int)uVar9 < 0) {
                  return uVar9;
                }
                bVar2 = *pbStack_7c;
                uVar6 = 1 << ((uint)bVar2 + ((int)(uint)bVar2 >> 5) * -0x20 & 0x3f);
                if ((*(uint *)(((bVar2 >> 5) + 0x15) * 4 + iStack_78) & uVar6) == uVar6) {
                  *(undefined4 *)(iStack_78 + 0x30) = *(undefined4 *)(pbStack_7c + 4);
                  *(undefined4 *)(iStack_78 + 0x40) = *(undefined4 *)(pbStack_7c + 0x18);
                  *(undefined8 *)(iStack_78 + 0x38) = *(undefined8 *)(pbStack_7c + 0x10);
                  *(undefined4 *)(iStack_78 + 0x44) = 1;
                  break;
                }
                uVar9 = fn_82C10FD0(*(undefined4 *)(piVar5[1] + 0x7c),uStack_74,&pbStack_7c,
                                     abStack_80);
              } while ((uVar9 & 0xffffffff) != 0x80500016);
            }
            fn_82C11038(*(undefined4 *)(piVar5[1] + 0x7c),uStack_74);
            if (*(int *)(iStack_78 + 0x44) == 0) {
              fn_82C11038(piVar5[0x25],auStack_70[0]);
              goto LAB_82c25274;
            }
          }
          uVar9 = fn_82C10FD0(piVar5[0x25],auStack_70[0],&iStack_78,abStack_80);
        } while ((uVar9 & 0xffffffff) != 0x80500016);
      }
      uVar9 = fn_82C11038(piVar5[0x25],auStack_70[0]);
      uVar9 = -(ulonglong)(uVar9 != 0xffffffff80500016) & uVar9;
    }
    if (*(int *)(piVar5[1] + 0x60) != 0) {
      uVar9 = fn_82C10F68(*(undefined4 *)(piVar5[1] + 0x7c),&uStack_74,&pbStack_7c,abStack_80);
      iVar10 = *(int *)(*(ushort **)(piVar5[1] + 0x60) + 2);
      uVar3 = **(ushort **)(piVar5[1] + 0x60);
      if ((uVar9 & 0xffffffff) != 0x80500016) {
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        do {
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          if (uVar3 != 0) {
            iVar15 = 0;
            do {
              iVar8 = iVar15 * 0x14 + iVar10;
              uVar4 = *(ushort *)(iVar8 + 2);
              if ((uVar4 == abStack_80[0]) || (uVar4 == 0)) {
                if (*(int *)(pbStack_7c + 0x1c) == 0) {
                  uVar9 = fn_82C10AD0(piVar5[0x38],0xb,8,pbStack_7c + 0x1c);
                  if ((int)uVar9 < 0) {
                    return uVar9;
                  }
                  puVar7 = *(undefined4 **)(pbStack_7c + 0x1c);
                  *puVar7 = 0;
                  puVar7[1] = 0;
                  uVar9 = fn_82C10AD0(piVar5[0x38],0xb,(ulonglong)uVar3 << 2,
                                            (ulonglong)*(uint *)(pbStack_7c + 0x1c) + 4);
                  if ((int)uVar9 < 0) {
                    return uVar9;
                  }
                    /* WARNING: Subroutine does not return */
                  fn_82F691F0(*(undefined4 *)(*(int *)(pbStack_7c + 0x1c) + 4),0,
                               (ulonglong)uVar3 << 2);
                }
                *(int *)((uint)**(ushort **)(pbStack_7c + 0x1c) * 4 +
                        *(int *)(*(ushort **)(pbStack_7c + 0x1c) + 2)) = iVar8;
                **(short **)(pbStack_7c + 0x1c) = **(short **)(pbStack_7c + 0x1c) + 1;
              }
              sVar14 = (short)iVar15 + 1;
              iVar15 = (int)sVar14;
            } while ((int)sVar14 < (int)(uint)uVar3);
          }
          uVar9 = fn_82C10FD0(*(undefined4 *)(piVar5[1] + 0x7c),uStack_74,&pbStack_7c,abStack_80);
        } while ((uVar9 & 0xffffffff) != 0x80500016);
      }
      uVar9 = fn_82C11038(*(undefined4 *)(piVar5[1] + 0x7c),uStack_74);
      uVar9 = -(ulonglong)(uVar9 != 0xffffffff80500016) & uVar9;
    }
  }
  else {
LAB_82c25274:
    uVar9 = 0xffffffff8050000c;
  }
  return uVar9;
}

