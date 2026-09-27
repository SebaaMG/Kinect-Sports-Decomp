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
extern int fn_82522D98();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_82581270();
extern int fn_82581558();
extern int fn_8262F8D8();
extern int fn_8262FBD8();
extern int fn_8262FEC8();
extern int fn_82630040();
extern int memset();
extern int fn_82F6A520();
extern int fn_82F6A56C();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192480;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825D6278(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10,
                  double param_11,double param_12,double param_13,undefined8 param_14,
                  ulonglong param_15,int param_16,int param_17,int param_18,undefined4 param_19,
                  longlong param_20,ulonglong param_21)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_r0;
  undefined8 uVar5;
  int iVar8;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double extraout_f1;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 in_vr0 [16];
  undefined1 in_vr9 [16];
  undefined1 in_vr10 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar19 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 in_stack_0000005c;
  int in_stack_00000064;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f4;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000104;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000114;
  undefined4 in_stack_0000011c;
  undefined4 in_stack_00000124;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000134;

  uVar5 = fn_82F6A520();
  dVar14 = extraout_f1;
  iVar8 = fn_82522DF8(0x1d0);
  fVar3 = lbl_821CA460;
  if (iVar8 != 0) {
    dVar13 = (double)lbl_8218E8E8;
    uVar10 = (param_21 & 0x7fffffff) * 2 + param_20;
    dVar16 = (double)lbl_821CA460;
    *(undefined4 *)(iVar8 + 0x58) = param_19;
    *(int *)(iVar8 + 0x5c) = param_17;
    *(int *)(iVar8 + 0xac) = param_18;
    *(undefined4 *)(iVar8 + 0xb0) = in_stack_0000005c;
    fVar4 = lbl_821CC160;
    dVar15 = (double)lbl_821CC160;
    *(int *)(iVar8 + 0xb4) = in_stack_00000064;
    *(undefined4 *)(iVar8 + 0xb8) = in_stack_0000008c;
    *(float *)(iVar8 + 0x60) = (float)param_8;
    *(undefined4 *)(iVar8 + 0xbc) = in_stack_000000bc;
    *(float *)(iVar8 + 0x48) = (float)(dVar14 * dVar13);
    *(undefined4 *)(iVar8 + 0xc0) = in_stack_000000c4;
    *(float *)(iVar8 + 100) = (float)param_9;
    *(undefined4 *)(iVar8 + 0xe8) = in_stack_00000094;
    *(float *)(iVar8 + 0xe4) = (float)param_2;
    *(undefined4 *)(iVar8 + 0xf0) = in_stack_0000010c;
    *(float *)(iVar8 + 0xc4) = (float)param_10;
    *(undefined4 *)(iVar8 + 0xf4) = in_stack_00000114;
    *(float *)(iVar8 + 200) = (float)param_11;
    *(undefined1 *)(iVar8 + 0xfc) = 0;
    *(float *)(iVar8 + 0xcc) = (float)param_12;
    *(undefined1 *)(iVar8 + 0xfd) = 0;
    *(float *)(iVar8 + 0xd0) = (float)param_13;
    *(undefined4 *)(iVar8 + 0x110) = in_stack_00000124;
    *(undefined4 *)(iVar8 + 0xd4) = in_stack_000000ec;
    *(int *)(iVar8 + 0x34) = (int)param_21;
    *(undefined4 *)(iVar8 + 0xd8) = in_stack_000000f4;
    *(undefined4 *)(iVar8 + 0xdc) = in_stack_000000fc;
    *(undefined4 *)(iVar8 + 0xe0) = in_stack_00000104;
    *(float *)(iVar8 + 0xec) = (float)param_6;
    *(undefined4 *)(iVar8 + 0xf8) = in_stack_0000011c;
    *(float *)(iVar8 + 0x100) = fVar3;
    *(float *)(iVar8 + 0x104) = (float)param_7;
    *(float *)(iVar8 + 0x108) = fVar3;
    *(float *)(iVar8 + 0x50) = fVar4;
    *(undefined4 *)(iVar8 + 0x10c) = in_stack_00000134;
    if ((uVar10 & 0xffffffff) < 0x3d091) {
      *(int *)(iVar8 + 0x28) = (int)uVar10;
    }
    else {
      *(undefined4 *)(iVar8 + 0x28) = 250000;
    }
    iVar12 = (int)param_15;
    *(int *)(iVar8 + 0x20) = iVar12;
    *(undefined4 *)(iVar8 + 0xa4) = in_stack_0000012c;
    if ((param_15 & 0xffffffff) == 0) {
      iVar11 = *(int *)(iVar8 + 0x28) * 0x28;
LAB_825d648c:
      lVar6 = fn_82630040(iVar11 + 0xfU & 0xfffffff0,0,0);
      *(int *)(iVar8 + 0x134) = (int)lVar6;
      uVar9 = fn_82522D98(param_21 * 0x58);
      *(undefined4 *)(iVar8 + 0x13c) = uVar9;
LAB_825d64c4:
      *(int *)(iVar8 + 0x144) = (int)param_21;
      *(undefined4 *)(iVar8 + 0x140) = 0;
      *(undefined4 *)(iVar8 + 0x170) = 0;
      if ((int)-(uint)(lVar6 == 0) < 0) {
        if (*(int *)(iVar8 + 0x13c) != 0) {
          fn_82522ED8();
          *(undefined4 *)(iVar8 + 0x13c) = 0;
        }
      }
      else {
        if ((*(int *)(iVar8 + 0x13c) != 0) || (iVar12 == 3)) {
          iVar11 = *(int *)(iVar8 + 0x134);
          uVar1 = *(uint *)(iVar11 + 0x18) & 0xfffffffc;
          uVar7 = fn_8262F8D8(iVar11,10,0,uVar1,0,uVar1,*(uint *)(iVar11 + 0x1c) & 0x3fffffc,0
                                   );
          *(int *)(iVar8 + 0x138) = (int)uVar7;
          if ((param_15 & 0xffffffff) == 0) {
LAB_825d656c:
            lVar6 = (ulonglong)*(uint *)(iVar8 + 0x28) * 0x28;
LAB_825d6574:
            memset(uVar7,0,lVar6);
          }
          else {
            if (((param_15 & 0xffffffff) == 1) || ((param_15 & 0xffffffff) < 3)) {
              lVar6 = ((ulonglong)*(uint *)(iVar8 + 0x28) & 0x7ffffff) << 5;
              goto LAB_825d6574;
            }
            if ((param_15 & 0xffffffff) == 3) goto LAB_825d656c;
          }
          fn_8262FBD8(*(int *)(iVar8 + 0x134),
                            *(uint *)(*(int *)(iVar8 + 0x134) + 0x18) & 0xfffffffc,0);
          *(int *)(iVar8 + 0x24) = param_16;
          if (param_18 == 0) {
            if (param_17 == 0) {
              if (in_stack_00000064 == 0) {
                if ((param_15 & 0xffffffff) == 0) {
                  uVar7 = 3;
                  goto LAB_825d6848;
                }
                if ((param_15 & 0xffffffff) == 1) {
                  uVar7 = 4;
                  goto LAB_825d67cc;
                }
                if ((param_15 & 0xffffffff) < 3) {
                  uVar7 = 0x11;
                  if (*(int *)(iVar8 + 0xc0) == 0) {
                    uVar7 = 5;
                  }
                }
                else {
                  if ((param_15 & 0xffffffff) != 3) goto LAB_825d6864;
                  uVar7 = 6;
                }
              }
              else {
                if ((param_15 & 0xffffffff) == 0) {
                  uVar7 = 0x13;
LAB_825d6848:
                  uVar9 = fn_82581270(uVar5,uVar7);
                  uVar7 = 1;
                  goto LAB_825d6854;
                }
                if ((param_15 & 0xffffffff) == 1) {
                  uVar7 = 0x14;
LAB_825d67cc:
                  uVar9 = fn_82581270(uVar5,uVar7);
                  *(undefined4 *)(iVar8 + 0x114) = uVar9;
                  if (*(int *)(iVar8 + 0xa4) == 0) {
                    uVar7 = 2;
                  }
                  else {
                    uVar7 = 0x12;
                  }
                  goto LAB_825d6600;
                }
                if ((param_15 & 0xffffffff) < 3) {
                  uVar7 = 0x15;
                }
                else {
                  if ((param_15 & 0xffffffff) != 3) goto LAB_825d6864;
                  uVar7 = 0x16;
                }
              }
              uVar9 = fn_82581270(uVar5,uVar7);
              *(undefined4 *)(iVar8 + 0x114) = uVar9;
              if (*(int *)(iVar8 + 0xa4) == 0) {
                uVar7 = 3;
              }
              else {
                uVar7 = 0x13;
              }
            }
            else {
              if (in_stack_00000064 == 0) {
                if ((param_15 & 0xffffffff) == 0) {
                  uVar7 = 7;
                  goto LAB_825d6714;
                }
                if ((param_15 & 0xffffffff) == 1) {
                  uVar7 = 8;
                  goto LAB_825d66e4;
                }
                if ((param_15 & 0xffffffff) < 3) {
                  uVar7 = 0x12;
                  if (*(int *)(iVar8 + 0xc0) == 0) {
                    uVar7 = 9;
                  }
                }
                else {
                  if ((param_15 & 0xffffffff) != 3) goto LAB_825d6864;
                  uVar7 = 10;
                }
              }
              else {
                if ((param_15 & 0xffffffff) == 0) {
                  uVar7 = 0x17;
LAB_825d6714:
                  uVar9 = fn_82581270(uVar5,uVar7);
                  uVar7 = 4;
                  goto LAB_825d6854;
                }
                if ((param_15 & 0xffffffff) == 1) {
                  uVar7 = 0x18;
LAB_825d66e4:
                  uVar9 = fn_82581270(uVar5,uVar7);
                  *(undefined4 *)(iVar8 + 0x114) = uVar9;
                  if (*(int *)(iVar8 + 0xa4) == 0) {
                    uVar7 = 5;
                  }
                  else {
                    uVar7 = 0x14;
                  }
                  goto LAB_825d6600;
                }
                if ((param_15 & 0xffffffff) < 3) {
                  uVar7 = 0x19;
                }
                else {
                  if ((param_15 & 0xffffffff) != 3) goto LAB_825d6864;
                  uVar7 = 0x1a;
                }
              }
              uVar9 = fn_82581270(uVar5,uVar7);
              *(undefined4 *)(iVar8 + 0x114) = uVar9;
              if (*(int *)(iVar8 + 0xa4) == 0) {
                uVar7 = 6;
              }
              else {
                uVar7 = 0x15;
              }
            }
            goto LAB_825d6984;
          }
          if (param_17 == 0) {
            if ((param_15 & 0xffffffff) != 0) {
              if ((param_15 & 0xffffffff) == 1) {
                uVar9 = fn_82581270(uVar5,0xb);
                uVar7 = 7;
                goto LAB_825d65f8;
              }
              if ((param_15 & 0xffffffff) < 3) {
                uVar7 = 0xc;
              }
              else {
                if ((param_15 & 0xffffffff) != 3) goto LAB_825d6864;
                uVar7 = 0xd;
              }
              uVar9 = fn_82581270(uVar5,uVar7);
              *(undefined4 *)(iVar8 + 0x114) = uVar9;
              uVar7 = 8;
              goto LAB_825d6984;
            }
            uVar9 = fn_82581270(uVar5,0xb);
            uVar7 = 7;
LAB_825d6854:
            *(undefined4 *)(iVar8 + 0x114) = uVar9;
            uVar9 = fn_82581558(uVar5,uVar7);
            *(undefined4 *)(iVar8 + 0x118) = uVar9;
LAB_825d6864:
            if ((iVar12 != 2) && (iVar12 != 3)) goto LAB_825d6874;
          }
          else {
            if ((param_15 & 0xffffffff) == 0) {
              uVar9 = fn_82581270(uVar5,0xe);
              uVar7 = 9;
              goto LAB_825d6854;
            }
            if ((param_15 & 0xffffffff) != 1) {
              if ((param_15 & 0xffffffff) < 3) {
                uVar7 = 0xf;
LAB_825d65c0:
                uVar9 = fn_82581270(uVar5,uVar7);
                *(undefined4 *)(iVar8 + 0x114) = uVar9;
                uVar7 = 10;
                goto LAB_825d6984;
              }
              if ((param_15 & 0xffffffff) == 3) {
                uVar7 = 0x10;
                goto LAB_825d65c0;
              }
              goto LAB_825d6864;
            }
            uVar9 = fn_82581270(uVar5,0xe);
            uVar7 = 9;
LAB_825d65f8:
            *(undefined4 *)(iVar8 + 0x114) = uVar9;
LAB_825d6600:
            uVar9 = fn_82581558(uVar5,uVar7);
            *(undefined4 *)(iVar8 + 0x118) = uVar9;
LAB_825d6874:
            if (param_16 == 1) {
              if (param_17 == 0) {
                if ((param_18 != 0) || (iVar12 != 0)) goto LAB_825d698c;
                uVar7 = 0xc;
              }
              else if (iVar12 == 0) {
                if (param_18 != 0) goto LAB_825d698c;
                if (in_stack_00000064 == 0) {
                  uVar7 = 0xd;
                }
                else {
                  uVar7 = 0xf;
                }
              }
              else if (param_18 == 0) {
                uVar7 = 0xe;
              }
              else {
                uVar7 = 0xb;
              }
            }
            else if (param_16 == 2) {
              if ((param_15 & 0xffffffff) == 0) {
                uVar7 = 0x1b;
LAB_825d6920:
                uVar9 = fn_82581270(uVar5,uVar7);
                *(undefined4 *)(iVar8 + 0x114) = uVar9;
              }
              else {
                if ((param_15 & 0xffffffff) == 1) {
                  uVar7 = 0x1c;
                  goto LAB_825d6920;
                }
                if ((param_15 & 0xffffffff) < 3) {
                  uVar7 = 0x1d;
                  goto LAB_825d6920;
                }
                if ((param_15 & 0xffffffff) == 3) {
                  uVar7 = 0x1e;
                  goto LAB_825d6920;
                }
              }
              uVar7 = 0x10;
            }
            else {
              if (param_16 != 3) goto LAB_825d698c;
              if ((param_15 & 0xffffffff) == 0) {
                uVar7 = 0x1b;
LAB_825d6970:
                uVar9 = fn_82581270(uVar5,uVar7);
                *(undefined4 *)(iVar8 + 0x114) = uVar9;
              }
              else {
                if ((param_15 & 0xffffffff) == 1) {
                  uVar7 = 0x1c;
                  goto LAB_825d6970;
                }
                if ((param_15 & 0xffffffff) < 3) {
                  uVar7 = 0x1d;
                  goto LAB_825d6970;
                }
                if ((param_15 & 0xffffffff) == 3) {
                  uVar7 = 0x1e;
                  goto LAB_825d6970;
                }
              }
              uVar7 = 0x11;
            }
LAB_825d6984:
            uVar9 = fn_82581558(uVar5,uVar7);
            *(undefined4 *)(iVar8 + 0x118) = uVar9;
          }
LAB_825d698c:
          if ((param_15 & 0xffffffff) == 0) {
LAB_825d69a4:
            uVar7 = 0;
LAB_825d69a8:
            uVar9 = fn_82581270(uVar5,uVar7);
            *(undefined4 *)(iVar8 + 0x174) = uVar9;
          }
          else {
            if ((param_15 & 0xffffffff) == 1) {
              uVar7 = 1;
              goto LAB_825d69a8;
            }
            if ((param_15 & 0xffffffff) < 3) {
              uVar7 = 2;
              goto LAB_825d69a8;
            }
            if ((param_15 & 0xffffffff) == 3) goto LAB_825d69a4;
          }
          uVar9 = fn_82581558(uVar5,0);
          *(undefined4 *)(iVar8 + 0x78) = lbl_82192604;
          uVar2 = lbl_82192480;
          *(undefined4 *)(iVar8 + 0x178) = uVar9;
          *(undefined4 *)(iVar8 + 0x90) = 0xffffffff;
          *(float *)(iVar8 + 0x68) = (float)dVar16;
          uVar9 = lbl_821916FC;
          *(undefined4 *)(iVar8 + 0x120) = 0;
          *(float *)(iVar8 + 0x70) = (float)dVar16;
          *(undefined4 *)(iVar8 + 0x124) = 0;
          *(undefined4 *)(iVar8 + 0x7c) = uVar2;
          *(undefined1 *)(iVar8 + 0x54) = 0;
          *(undefined4 *)(iVar8 + 0x6c) = uVar9;
          *(undefined4 *)(iVar8 + 0x2c) = 0;
          *(undefined4 *)(iVar8 + 0x74) = uVar9;
          *(undefined4 *)(iVar8 + 0x30) = 0;
          *(float *)(iVar8 + 0x80) = (float)dVar16;
          *(float *)(iVar8 + 0x84) = (float)param_3;
          *(float *)(iVar8 + 0x88) = (float)param_4;
          *(float *)(iVar8 + 0x8c) = (float)param_5;
          loadVectorLeftIndexed128(0xffffffff821ca45c,4);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar20, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr11,auVar20,3,2); memcpy(auVar17, &_vt1, 16); }
          memcpy((void *)((const void *)((int)in_r0 + iVar8 & 0xfffffff0)), auVar17, 16);
          loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar17,auVar20,4,3); memcpy(auVar18, &_vt2, 16); }
          *(float *)(iVar8 + 0xa0) = (float)dVar16;{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr12,auVar20,4,3); memcpy(auVar19, &_vt3, 16); }
          *(float *)(iVar8 + 0xa8) = (float)dVar15;{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(auVar20,in_vr0,4,3); memcpy(auVar17, &_vt4, 16); }
          *(float *)(iVar8 + 0x98) = (float)dVar15;
          *(undefined4 *)(iVar8 + 0x9c) = 0xff;
          *(undefined4 *)(iVar8 + 0x94) = 0;
          *(undefined1 *)(iVar8 + 0x1c0) = 0;{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(auVar17,auVar18,3,2); memcpy(auVar21, &_vt5, 16); }{ V16 _vt6 = vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar18,3,2); memcpy(auVar17, &_vt6, 16); }{ V16 _vt7 = vectorRotateLeftImmediateMaskInsert128(in_vr10,auVar18,3,2); memcpy(auVar20, &_vt7, 16); }{ V16 _vt8 = vectorRotateLeftImmediateMaskInsert128(in_vr9,auVar19,3,2); memcpy(auVar18, &_vt8, 16); }
          memcpy((void *)((const void *)(iVar8 + 0x10U & 0xfffffff0)), auVar17, 16);
          *(undefined4 *)(iVar8 + 0x17c) = 0;
          *(undefined4 *)(iVar8 + 0x180) = 0;
          memcpy((void *)((const void *)(iVar8 + 400U & 0xfffffff0)), auVar20, 16);
          *(undefined4 *)(iVar8 + 0x184) = 0;
          memcpy((void *)((const void *)(iVar8 + 0x1a0U & 0xfffffff0)), auVar21, 16);
          memcpy((void *)((const void *)(iVar8 + 0x1b0U & 0xfffffff0)), auVar18, 16);
          goto LAB_825d6ab8;
        }
        if (*(int *)(iVar8 + 0x134) != 0) {
          fn_8262FEC8();
          *(undefined4 *)(iVar8 + 0x134) = 0;
        }
      }
    }
    else {
      if (((param_15 & 0xffffffff) == 1) || ((param_15 & 0xffffffff) < 3)) {
        iVar11 = *(int *)(iVar8 + 0x28) << 5;
        goto LAB_825d648c;
      }
      if ((param_15 & 0xffffffff) == 3) {
        lVar6 = fn_82630040(*(int *)(iVar8 + 0x28) * 0x28 + 0xfU & 0xfffffff0,0,0);
        *(int *)(iVar8 + 0x134) = (int)lVar6;
        *(undefined4 *)(iVar8 + 0x13c) = 0;
        goto LAB_825d64c4;
      }
    }
    fn_82522ED8(iVar8);
  }
  iVar8 = 0;
LAB_825d6ab8:
  fn_82F6A56C(iVar8);
  return;
}
