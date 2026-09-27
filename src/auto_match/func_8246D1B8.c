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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_80;
extern unsigned int fStack_90;
extern int fn_82270B70();
extern int fn_82284B08();
extern int fn_82292780();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_824602A0();
extern int fn_82460610();
extern int fn_824651F0();
extern int fn_82465328();
extern int fn_824655B8();
extern int fn_82465960();
extern int fn_82465B68();
extern int fn_82469038();
extern int fn_82469458();
extern int fn_82469958();
extern int fn_8246BE18();
extern int fn_8246DC40();
extern int fn_8246E720();
extern int fn_8246EC90();
extern int fn_8246EE38();
extern int fn_8246F0F8();
extern int fn_8246F9F0();
extern int fn_8246FB28();
extern int fn_82470140();
extern int fn_824708B8();
extern int fn_82470CD0();
extern int fn_824BDAC8();
extern int fn_824BDE68();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955F0;
extern unsigned int lbl_821BC738;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6BD0;
extern unsigned int lbl_831C6BE0;
extern unsigned int lbl_831C6C04;
extern unsigned int lbl_831C6C1C;
extern unsigned int lbl_831C6C68;
extern unsigned int lbl_831C6C6C;
extern unsigned int lbl_831C6C70;
extern unsigned int lbl_831C6C74;
extern unsigned int lbl_831C6C78;
extern unsigned int lbl_831C6C80;
extern unsigned int lbl_831C6C84;
extern unsigned int lbl_831C6C88;
extern unsigned int lbl_831C6C8C;
extern unsigned int lbl_831C6C90;
extern unsigned int lbl_831C6C94;
extern unsigned int lbl_831C6C98;
extern unsigned int lbl_831C6C9C;
extern unsigned int lbl_831C6CA0;
extern unsigned int lbl_831C6CA4;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_83265A28;
extern unsigned int *lbl_8327F848;
extern unsigned char switchdataD_82195478[];
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8246D1B8(double param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  ushort uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar14;
  longlong lVar13;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 in_vr0 [16];
  undefined1 in_vr9 [16];
  undefined1 auVar20 [16];
  undefined1 in_vr10 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar21 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  float fStack_90;
  undefined1 auStack_80 [128];

  if (*(int *)(param_2 + 0x44c) != 0) {
    fn_8246FB28();
    *(undefined4 *)(param_2 + 0x44c) = 0;
  }
  dVar18 = (double)lbl_821CC160;
  if (*(int *)(param_2 + 0x448) != 0) {
    dVar16 = (double)(float)((double)*(float *)(param_2 + 0x448) - param_1);
    dVar17 = -dVar16;
    dVar19 = dVar18;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar17 < dVar18) << 2) | (uint)(NAN(dVar17) || NAN(dVar18)) << 2))
        < 0.0) {
      dVar19 = dVar16;
    }
    *(float *)(param_2 + 0x448) = (float)dVar19;
  }
  fn_8246BE18(param_1,*(undefined4 *)(param_2 + 0x8c));
  fn_82465960(param_1,*(undefined4 *)(param_2 + 0x94));
  fn_82469458(param_1,*(undefined4 *)(param_2 + 0x3fc));
  dVar19 = (double)lbl_821CA460;
  iVar10 = *(int *)(param_2 + 0x684);
  if ((iVar10 != 0) &&
     (fVar2 = (float)((double)*(float *)(iVar10 + 0x2c) + param_1),
     *(float *)(iVar10 + 0x2c) = fVar2, dVar19 < (double)fVar2)) {
    *(undefined4 *)(iVar10 + 0x2c) = lbl_821955F0;
  }
  uVar14 = *(uint *)(param_2 + 0xc);
  if (0xb < uVar14) goto switchD_8246d2d8_caseD_2;
  uVar3 = (switchdataD_82195478)[uVar14];
  switch(uVar14) {
  case 0:
    fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
    dVar18 = (double)fVar2;
    *(float *)(param_2 + 0x78) = fVar2;
    uVar7 = lbl_831C6BE0;
    uVar4 = lbl_831C6BD0;
    if (((double)lbl_821916FC <= dVar18) &&
       ((double)(float)(dVar18 - param_1) < (double)lbl_821916FC)) {
      loadVectorLeftIndexed128((ulonglong)uVar3,0xffffffff821cc160);
      iVar10 = *(int *)(*(int *)(param_2 + 8) + 0x50);
      loadVectorLeftIndexed128(0xffffffff831c6b70,0x58);
      loadVectorLeftIndexed128(0xffffffff831c6b70,0x54);
      loadVectorLeftIndexed128(0xffffffff831c6b70,0x68);
      vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3);
      loadVectorLeftIndexed128(0xffffffff831c6b70,100);
      vectorRotateLeftImmediateMaskInsert128(in_vr10,in_vr11,4,3);
      loadVectorLeftIndexed128(0xffffffff831c6b70,0x5c);
      loadVectorLeftIndexed128(0xffffffff831c6b70,0x6c);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr13,4,3); memcpy(auVar21, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr9,in_vr13,4,3); memcpy(auVar20, &_vt1, 16); }
      iVar6 = *(int *)(iVar10 + 0x34);
      *(undefined4 *)(iVar10 + 0x70) = lbl_831C6BE0;
      *(undefined4 *)(iVar10 + 0x30) = uVar4;{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar21,3,2); memcpy(auVar21, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr13,auVar20,3,2); memcpy(auVar20, &_vt3, 16); }
      memcpy((void *)((const void *)(iVar10 + 0x20U & 0xfffffff0)), auVar21, 16);
      memcpy((void *)((const void *)(iVar10 + 0x60U & 0xfffffff0)), auVar20, 16);
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x20) = uVar4;
        *(undefined4 *)(iVar6 + 0x30) = 0;
        memcpy((void *)((const void *)(iVar6 + 0x10U & 0xfffffff0)), auVar21, 16);
      }
      iVar10 = *(int *)(iVar10 + 0x74);
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x20) = uVar7;
        *(undefined4 *)(iVar10 + 0x30) = 0;
        memcpy((void *)((const void *)(iVar10 + 0x10U & 0xfffffff0)), auVar20, 16);
      }
    }
    break;
  case 1:
    *(float *)(param_2 + 0x78) = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
    if (((*(int *)(param_2 + 0x678) != 0) ||
        (iVar10 = fn_82270B70(), *(int *)(iVar10 + 0xa0) == 0)) &&
       (iVar10 = fn_8246E720(param_1,(double)lbl_831C6C1C,param_2), iVar10 != 0)) {
      fn_82460610(*(undefined4 *)(param_2 + 8),3);
    }
    break;
  case 3:
    fn_824708B8(param_1,param_2);
    break;
  case 6:
    fn_82470140(param_1,param_2);
    break;
  case 7:
    if (*(int *)(param_2 + 0x18) != 0) {
      dVar16 = (double)(float)((double)*(float *)(param_2 + 0x18) - param_1);
      dVar17 = -dVar16;
      dVar19 = dVar18;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar17 < dVar18) << 2) | (uint)(NAN(dVar17) || NAN(dVar18)) << 2)
                    ) < 0.0) {
        dVar19 = dVar16;
      }
      *(float *)(param_2 + 0x18) = (float)dVar19;
      if (dVar19 == dVar18) {
        iVar10 = *(int *)(param_2 + 8);
        if (*(int *)(iVar10 + 0x54) == 7) {
          uVar11 = 9;
          if (*(int *)(iVar10 + 0x2c) == 0) {
            uVar11 = 4;
          }
          fn_82460610(iVar10,uVar11);
        }
      }
    }
    fn_82470CD0(param_2);
    break;
  case 8:
    fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
    dVar18 = (double)fVar2;
    *(float *)(param_2 + 0x78) = fVar2;
    if (((double)lbl_831C6C74 <= dVar18) &&
       ((double)(float)(dVar18 - param_1) < (double)lbl_831C6C74)) {
      fn_824651F0(*(undefined4 *)(param_2 + 0x440),param_2 + 0x14c);
    }
    if (((double)lbl_831C6C78 <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < (double)lbl_831C6C78)) {
      fn_8246F9F0(param_2,param_2 + 0x16c);
      fn_8246EC90(param_2,param_2 + 0x340,1,1,0xffffffff821bc410,0xffffffff821bc3f8);
      piVar5 = *(int **)(param_2 + 0x444);
      if (*piVar5 != 2) {
        *piVar5 = 2;
        fn_82672C20(piVar5[1],0xffffffff821bc38c,0,0);
      }
      fn_82469038(*(undefined4 *)(param_2 + 0x418),3);
    }
    iVar10 = fn_8246E720(param_1,(double)lbl_831C6C04,param_2);
    if (iVar10 == 0) break;
    uVar11 = 9;
    goto LAB_8246d594;
  case 9:
    fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
    dVar19 = (double)fVar2;
    *(float *)(param_2 + 0x78) = fVar2;
    if (((double)lbl_831C6C80 <= dVar19) &&
       ((double)(float)(dVar19 - param_1) < (double)lbl_831C6C80)) {
      fn_82292BC0(0,0,0);
      uVar4 = *(undefined4 *)(param_2 + 0x440);
      if (*(int *)(param_2 + 0x88) == 0) {
        fn_824651F0(uVar4,param_2 + 0x150);
        piVar5 = *(int **)(param_2 + 0x444);
        if (*piVar5 != 3) {
          *piVar5 = 3;
          fn_82672C20(piVar5[1],0xffffffff821bc39c,0,0);
        }
        iVar10 = *(int *)(param_2 + 0x418);
        *(undefined4 *)(iVar10 + 0x134) = 0;
        fn_82469038(iVar10,4);
        uVar11 = 9;
      }
      else if (*(int *)(param_2 + 0x88) == 1) {
        fn_824651F0(uVar4,param_2 + 0x154);
        piVar5 = *(int **)(param_2 + 0x444);
        if (*piVar5 != 4) {
          *piVar5 = 4;
          fn_82672C20(piVar5[1],0xffffffff821bc3ac,0,0);
        }
        iVar10 = *(int *)(param_2 + 0x418);
        *(undefined4 *)(iVar10 + 0x134) = 1;
        fn_82469038(iVar10,4);
        uVar11 = 10;
      }
      else {
        fn_824651F0(uVar4,param_2 + 0x148);
        piVar5 = *(int **)(param_2 + 0x444);
        if (*piVar5 != 5) {
          *piVar5 = 5;
          fn_82672C20(piVar5[1],0xffffffff821bc3bc,0,0);
        }
        iVar10 = *(int *)(param_2 + 0x418);
        *(undefined4 *)(iVar10 + 0x134) = 2;
        fn_82469038(iVar10,4);
        uVar11 = 0xb;
      }
      fn_82292C30(uVar11);
      piVar5 = *(int **)(param_2 + 0x684);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5,1);
      }
      puVar9 = (undefined4 *)fn_8265C9E0(0x34);
      bVar1 = puVar9 == (undefined4 *)0x0;
      if (bVar1) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        uVar11 = fn_82864988(auStack_80,0xffffffff821aa470);
        *puVar9 = &lbl_821BC738;
        fn_82292780(puVar9 + 1,uVar11);
        puVar9[0xb] = (float)dVar18;
        puVar9[10] = 0;
        puVar9[0xc] = 0;
      }
      *(undefined4 **)(param_2 + 0x684) = puVar9;
      if (!bVar1) {
        fn_82864898(auStack_80);
      }
      (**(code **)(*lbl_8327F848 + 0x50))(lbl_8327F848,*(undefined4 *)(param_2 + 0x684));
      fn_8246F9F0(param_2,param_2 + 0x17c);
      fn_824602A0(*(undefined4 *)(param_2 + 8));
    }
    dVar19 = (double)lbl_831C6C84;
    if ((dVar19 <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < dVar19)) {
      fn_824655B8(*(undefined4 *)(param_2 + 0x98),2);
      iVar10 = *(int *)(param_2 + 0x94);
      *(undefined4 *)(iVar10 + 0xd8) = *(undefined4 *)(param_2 + 0x88);
      fn_82465B68(iVar10,1);
      dVar19 = (double)lbl_831C6C84;
    }
    if (dVar19 <= (double)*(float *)(param_2 + 0x78)) {
      iVar10 = fn_82465328(*(undefined4 *)(param_2 + 0x440));
      if (iVar10 == 0) {
        if (*(int *)(param_2 + 0x46c) != 0) {
          dVar16 = (double)(float)((double)*(float *)(param_2 + 0x46c) - param_1);
          dVar17 = -dVar16;
          dVar19 = dVar18;
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar17 < dVar18) << 2) |
                        (uint)(NAN(dVar17) || NAN(dVar18)) << 2)) < 0.0) {
            dVar19 = dVar16;
          }
          *(float *)(param_2 + 0x46c) = (float)dVar19;
          if (dVar19 == dVar18) {
            fn_8246DC40(param_2,10);
          }
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x46c) = lbl_831C6C88;
      }
    }
    *(undefined4 *)(*(int *)(param_2 + 4) + 0xd58) = 1;
    break;
  case 10:
    fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
    dVar18 = (double)fVar2;
    *(float *)(param_2 + 0x78) = fVar2;
    if (((double)lbl_831C6C8C <= dVar18) &&
       ((double)(float)(dVar18 - param_1) < (double)lbl_831C6C8C)) {
      if (*(int *)(param_2 + 0x88) == 0) {
        uVar11 = 6;
      }
      else {
        uVar11 = 7;
        if (*(int *)(param_2 + 0x88) != 1) {
          uVar11 = 8;
        }
      }
      fn_82469958(*(undefined4 *)(param_2 + 0x3fc),uVar11);
      fn_8246F9F0(param_2,param_2 + 0xc4);
    }
    if (((double)lbl_831C6C90 <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < (double)lbl_831C6C90)) {
      fn_8246F9F0(param_2,param_2 + 0xcc);
    }
    if (((double)lbl_831C6C94 <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < (double)lbl_831C6C94)) {
      fn_82469958(*(undefined4 *)(param_2 + 0x3fc),0);
      fn_8246F9F0(param_2,param_2 + 200);
    }
    if (((double)lbl_831C6C98 <= (double)*(float *)(param_2 + 0x78)) &&
       ((double)(float)((double)*(float *)(param_2 + 0x78) - param_1) < (double)lbl_831C6C98)) {
      fn_82469958(*(undefined4 *)(param_2 + 0x3fc),1);
    }
    if (((*(float *)(param_2 + 0x78) < lbl_831C6C9C) &&
        (iVar10 = *(int *)(param_2 + 0x684), *(int *)(iVar10 + 0x28) == 0)) &&
       ((float)*(uint *)(iVar10 + 0x30) + *(float *)(iVar10 + 0x2c) <= lbl_831C6CA0)) break;
    uVar11 = 0xb;
LAB_8246d594:
    fn_8246DC40(param_2,uVar11);
    break;
  case 0xb:
    fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
    dVar16 = (double)fVar2;
    *(float *)(param_2 + 0x78) = fVar2;
    if (((double)lbl_831C6CA4 <= dVar16) &&
       ((double)(float)(dVar16 - param_1) < (double)lbl_831C6CA4)) {
      fn_82469958(*(undefined4 *)(param_2 + 0x3fc),1);
    }
    if ((lbl_832659CD == '\0') || (lbl_83265988 == 0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = (uint)LZCOUNT(*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 3 & 1) >>
               5;
    }
    if (*(uint *)(param_2 + 0x43c) != uVar14) {
      if ((lbl_832659CD == '\0') || (lbl_83265988 == 0)) {
        uVar14 = 1;
      }
      else {
        uVar14 = (uint)LZCOUNT(*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 3 & 1)
                 >> 5;
      }
      *(uint *)(param_2 + 0x43c) = uVar14;
      fVar8 = lbl_831C6C70;
      fVar2 = lbl_831C6C6C;
      uVar4 = lbl_831C6C68;
      if (uVar14 == 0) {
        *(float *)(*(int *)(param_2 + 0x440) + 0x2c) = (float)dVar18;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x440);
        *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(param_2 + 0x118);
        *(float *)(iVar10 + 0x34) = fVar8;
        *(undefined4 *)(iVar10 + 0x38) = uVar4;
        *(float *)(iVar10 + 0x30) = fVar2;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fStack_90 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
        *(float *)(iVar10 + 0x2c) = (fVar8 - fVar2) * (float)((double)fStack_90 - dVar19) + fVar2;
      }
    }
    fn_82470CD0(param_2);
    if (*(int *)(param_2 + 0x18) != 0) {
      dVar16 = (double)(float)((double)*(float *)(param_2 + 0x18) - param_1);
      dVar17 = -dVar16;
      dVar19 = dVar18;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar17 < dVar18) << 2) | (uint)(NAN(dVar17) || NAN(dVar18)) << 2)
                    ) < 0.0) {
        dVar19 = dVar16;
      }
      *(float *)(param_2 + 0x18) = (float)dVar19;
      if (dVar19 == dVar18) {
        iVar6 = *(int *)(param_2 + 8);
        iVar10 = (*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c)) / 0x11c;
        lVar13 = (longlong)iVar10;
        if (iVar10 != 0) {
          iVar10 = 0;
          do {
            iVar15 = *(int *)(iVar6 + 0x3c) + iVar10;
            iVar10 = iVar10 + 0x11c;
            *(float *)(iVar15 + 4) = (float)dVar18;
            *(float *)(iVar15 + 0x110) = (float)dVar18;
            *(float *)(iVar15 + 0x114) = (float)dVar18;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        *(undefined4 *)(iVar6 + 100) = 1;
        fn_82460610(iVar6,1);
        fn_82292BC0(0,0,0);
        fn_82292C30(1);
      }
    }
  }
switchD_8246d2d8_caseD_2:
  if (*(int *)(param_2 + 0x67c) != 0) {
    *(undefined4 *)(param_2 + 0x67c) = 0;
    if (*(int *)(param_2 + 0xc) == 7) {
      uVar12 = 0xffffffff821bc424;
      uVar11 = 0xffffffff821bc440;
      iVar10 = param_2 + 0x364;
    }
    else {
      uVar12 = 0xffffffff821bc454;
      uVar11 = 0xffffffff821bc46c;
      iVar10 = param_2 + 0x368;
    }
    fn_8246EE38(param_2,iVar10,param_2 + 0x36c,uVar11,uVar12,
                      *(undefined4 *)(*(int *)(param_2 + 0x428) + 0x184),
                      *(undefined4 *)(*(int *)(param_2 + 0x428) + 0x18c));
    if (*(int *)(param_2 + 0x438) != 0) {
      fn_824BDE68(*(int *)(param_2 + 0x438),0);
      fn_824BDAC8(*(undefined4 *)(param_2 + 0x438),0,0,1);
    }
  }
  fn_8246F0F8(param_2);
  if (*(int *)(param_2 + 0x370) != 0) {
    fn_82284B08(param_1);
  }
  return;
}
