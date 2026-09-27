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
extern unsigned int *auStack_d0;
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_82582388();
extern int fn_82582818();
extern int fn_825D6278();
extern int fn_825D6BD8();
extern int fn_8265C9E0();
extern int fn_827D6968();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern float lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326C070;
extern unsigned int lbl_8326C260;
extern unsigned int uRam8326c264;
extern unsigned int uRam8326c268;
extern unsigned int uRam8326c26c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825816F0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined8 in_r0;
  int *piVar15;
  char cVar20;
  int iVar16;
  int *piVar17;
  int *piVar18;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 *puVar19;
  uint uVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  double extraout_f1;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  byte bStack_d9;
  undefined1 auStack_d0 [208];
  
  piVar15 = (int *)fn_82F6A540();
  pcVar2 = *(char **)(piVar15[0x3c] + 0xd48);
  dVar25 = extraout_f1;
  if (((((uint)piVar15[0x3b] < 0x500001) ||
       ((**(code **)(*piVar15 + 0x24))(), (uint)piVar15[0x3b] < 0x500001)) &&
      ((iVar5 = (int)param_2, *pcVar2 == '\0' || (*(int *)(iVar5 + 0x17c) == 0)))) &&
     (*(int *)(iVar5 + 0x34) != 0)) {
    fn_825200F0(auStack_d0,param_2 + 0x34);
    cVar20 = fn_827D6968(lbl_83265A24,auStack_d0,0xffffffffffffffff);
    iVar22 = (int)in_r0;
    if (cVar20 != '\0') {
      piVar17 = (int *)piVar15[0x38];
      bVar24 = *(int *)(iVar5 + 0x17c) == 0;
      if (bVar24) {
        if ((*(int *)(iVar5 + 0x1b4) == 0) && (*(int *)(iVar5 + 0x1c) == 0)) {
          for (; iVar22 = (int)in_r0, piVar17 != (int *)0x0; piVar17 = (int *)piVar17[4]) {
            iVar16 = *piVar17;
            if (*(int *)(iVar16 + 0x58) != 0) {
              cVar20 = fn_82582388(param_2,iVar16);
              iVar22 = (int)in_r0;
              if ((((cVar20 != '\0') &&
                   ((uint)LZCOUNT(*(int *)(iVar5 + 0x20) + -1) >> 5 == (uint)*(byte *)(piVar17 + 3))
                   ) && ((uint)LZCOUNT(*(int *)(iVar5 + 0x24) + -1) >> 5 ==
                         (uint)*(byte *)((int)piVar17 + 0xd))) &&
                 ((uint)LZCOUNT(*(int *)(iVar5 + 0x28) + -1) >> 5 ==
                  (uint)*(byte *)((int)piVar17 + 0xe))) {
                if (iVar16 != 0) {
                  piVar17[1] = piVar17[1] + 1;
                  goto LAB_82581d98;
                }
                break;
              }
            }
          }
        }
        uVar21 = *(uint *)(iVar5 + 0x10);
        uVar23 = *(uint *)(iVar5 + 0x14);
      }
      else {
        uVar21 = *(uint *)(iVar5 + 0x10);
        if (0x32 < uVar21) {
          uVar21 = 0x32;
        }
        uVar23 = *(uint *)(iVar5 + 0x14);
        if (0x32 < uVar23) {
          uVar23 = 0x32;
        }
      }
      if ((uVar21 == 0) ||
         (iVar16 = fn_825D6278((double)*(float *)(iVar5 + 0x74),
                                     (double)*(float *)(iVar5 + 0xdc),
                                     (double)*(float *)(iVar5 + 0xa4),
                                     (double)*(float *)(iVar5 + 0xa0),
                                     (double)*(float *)(iVar5 + 0xac),
                                     (double)*(float *)(iVar5 + 0xb4),
                                     (double)*(float *)(iVar5 + 0x130),
                                     (double)*(float *)(iVar5 + 0x6c),
                                     (double)*(float *)(iVar5 + 0x70),
                                     (double)*(float *)(iVar5 + 0xe4),
                                     (double)*(float *)(iVar5 + 0xe8),
                                     (double)*(float *)(iVar5 + 0xec),
                                     (double)*(float *)(iVar5 + 0xf0),piVar15,
                                     *(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),
                                     *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x2c),
                                     bVar24,uVar21,uVar23), iVar16 == 0)) {
        (**(code **)(*piVar15 + 0x24))(dVar25,piVar15);
        if ((uVar21 == 0) ||
           (iVar16 = fn_825D6278((double)*(float *)(iVar5 + 0x74),
                                       (double)*(float *)(iVar5 + 0xdc),
                                       (double)*(float *)(iVar5 + 0xa4),
                                       (double)*(float *)(iVar5 + 0xa0),
                                       (double)*(float *)(iVar5 + 0xac),
                                       (double)*(float *)(iVar5 + 0xb4),
                                       (double)*(float *)(iVar5 + 0x130),
                                       (double)*(float *)(iVar5 + 0x6c),
                                       (double)*(float *)(iVar5 + 0x70),
                                       (double)*(float *)(iVar5 + 0xe4),
                                       (double)*(float *)(iVar5 + 0xe8),
                                       (double)*(float *)(iVar5 + 0xec),
                                       (double)*(float *)(iVar5 + 0xf0),piVar15,
                                       *(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),
                                       *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x2c),
                                       bVar24,uVar21,uVar23), iVar16 == 0)) goto LAB_82581e1c;
      }
      fn_825D6BD8(iVar16,param_2 + 0x34,param_2 + 0x38);
      fVar8 = lbl_821CC160;
      fVar7 = lbl_821CA460;
      *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(iVar5 + 0x58);
      fVar1 = *(float *)(iVar5 + 0x5c);
      if (fVar7 < fVar1) {
        *(float *)(iVar16 + 0x98) = fVar7;
      }
      else if (fVar1 < fVar8) {
        *(float *)(iVar16 + 0x98) = fVar8;
      }
      else {
        *(float *)(iVar16 + 0x98) = fVar1;
      }
      uVar3 = *(undefined4 *)(iVar5 + 0x60);
      *(undefined4 *)(iVar16 + 0xa0) = *(undefined4 *)(iVar5 + 100);
      *(undefined4 *)(iVar16 + 0x9c) = uVar3;
      *(undefined4 *)(iVar16 + 0xa8) = *(undefined4 *)(iVar5 + 0x68);
      bStack_d9 = (byte)(longlong)(*(float *)(iVar5 + 0x3c) * lbl_82195644);
      uVar21 = (uint)bStack_d9;
      bStack_d9 = (byte)(longlong)(*(float *)(iVar5 + 0x44) * lbl_82195644);
      bVar12 = bStack_d9;
      bStack_d9 = (byte)(longlong)(*(float *)(iVar5 + 0x40) * lbl_82195644);
      *(uint *)(iVar16 + 0x90) = (uVar21 << 8 | 0xff0000 | (uint)bStack_d9) << 8 | (uint)bVar12;
      *(undefined4 *)(iVar16 + 0x108) = *(undefined4 *)(iVar5 + 0x134);
      *(bool *)(iVar16 + 0xfc) = *(int *)(iVar5 + 0x120) == 1;
      *(bool *)(iVar16 + 0xfd) = *(int *)(iVar5 + 0x124) == 1;
      *(undefined4 *)(iVar16 + 0x100) = *(undefined4 *)(iVar5 + 0x128);
      *(bool *)(iVar16 + 0xfe) = *(int *)(iVar5 + 0x19c) == 1;
      uVar11 = uRam8326c26c;
      uVar10 = uRam8326c268;
      uVar9 = uRam8326c264;
      uVar3 = lbl_8326C260;
      if (*(int *)(iVar5 + 400) == 0) {
        puVar19 = (undefined4 *)((uint)(&lbl_8326C070 + iVar22) & 0xfffffff0);
        uVar26 = puVar19[1];
        uVar27 = puVar19[2];
        uVar28 = puVar19[3];
        puVar6 = (undefined4 *)(iVar22 + iVar16 & 0xfffffff0);
        *puVar6 = *puVar19;
        puVar6[1] = uVar26;
        puVar6[2] = uVar27;
        puVar6[3] = uVar28;
        puVar19 = (undefined4 *)(iVar16 + 0x10U & 0xfffffff0);
        *puVar19 = uVar3;
        puVar19[1] = uVar9;
        puVar19[2] = uVar10;
        puVar19[3] = uVar11;
        *(float *)(iVar16 + 0xc) = fVar7;
        *(float *)(iVar16 + 0x1c) = fVar8;
      }
      if (*(int *)(iVar5 + 0x1b4) != 0) {
        *(undefined4 *)(iVar16 + 0x184) = 1;
      }
      iVar22 = piVar15[0x38];
      if (iVar22 == 0) {
        piVar17 = (int *)fn_82522D98(0x14);
        piVar15[0x38] = (int)piVar17;
        *piVar17 = iVar16;
        *(undefined4 *)(piVar15[0x38] + 4) = 1;
        if (*(char *)(iVar16 + 0x1c0) == '\0') {
          uVar21 = *(uint *)(iVar16 + 0x20);
          if (uVar21 != 0) {
            if ((uVar21 == 1) || (uVar21 < 3)) {
              iVar22 = *(int *)(iVar16 + 0x28) << 5;
              goto LAB_82581c48;
            }
            if (uVar21 != 3) goto LAB_82581c1c;
          }
          iVar22 = *(int *)(iVar16 + 0x28) * 0x28;
        }
        else {
LAB_82581c1c:
          iVar22 = 0;
        }
LAB_82581c48:
        *(int *)(piVar15[0x38] + 8) = iVar22;
        *(bool *)(piVar15[0x38] + 0xc) = *(int *)(iVar5 + 0x20) == 1;
        *(bool *)(piVar15[0x38] + 0xd) = *(int *)(iVar5 + 0x24) == 1;
        *(bool *)(piVar15[0x38] + 0xe) = *(int *)(iVar5 + 0x28) == 1;
        *(undefined4 *)(piVar15[0x38] + 0x10) = 0;
      }
      else {
        iVar4 = *(int *)(iVar22 + 0x10);
        while (piVar17 = (int *)(iVar22 + 0x10), iVar4 != 0) {
          iVar22 = *piVar17;
          iVar4 = *(int *)(iVar22 + 0x10);
        }
        piVar18 = (int *)fn_82522D98(0x14);
        *piVar17 = (int)piVar18;
        *piVar18 = iVar16;
        *(undefined4 *)(*piVar17 + 4) = 1;
        if (*(char *)(iVar16 + 0x1c0) == '\0') {
          uVar21 = *(uint *)(iVar16 + 0x20);
          if (uVar21 != 0) {
            if ((uVar21 == 1) || (uVar21 < 3)) {
              iVar22 = *(int *)(iVar16 + 0x28) << 5;
              goto LAB_82581d28;
            }
            if (uVar21 != 3) goto LAB_82581cfc;
          }
          iVar22 = *(int *)(iVar16 + 0x28) * 0x28;
        }
        else {
LAB_82581cfc:
          iVar22 = 0;
        }
LAB_82581d28:
        *(int *)(*piVar17 + 8) = iVar22;
        *(bool *)(*piVar17 + 0xc) = *(int *)(iVar5 + 0x20) == 1;
        *(bool *)(*piVar17 + 0xd) = *(int *)(iVar5 + 0x24) == 1;
        *(bool *)(*piVar17 + 0xe) = *(int *)(iVar5 + 0x28) == 1;
        *(undefined4 *)(*piVar17 + 0x10) = 0;
        piVar17 = (int *)*piVar17;
      }
      piVar15[0x3b] = piVar17[2] + piVar15[0x3b];
LAB_82581d98:
      uVar13 = fn_8265C9E0(0x110);
      if ((uVar13 & 0xffffffff) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = fn_82582818(dVar25,uVar13,param_3,iVar16,param_2,param_6);
      }
      puVar19 = (undefined4 *)fn_82522D98(0x18);
      puVar19[2] = (float)dVar25;
      puVar19[1] = piVar17;
      *puVar19 = (int)uVar14;
      puVar19[3] = *(undefined4 *)(iVar5 + 0x144);
      puVar19[4] = *(undefined4 *)(iVar5 + 0x15c);
      puVar19[5] = piVar15[0x37];
      piVar15[0x37] = (int)puVar19;
      goto LAB_82581e20;
    }
  }
LAB_82581e1c:
  uVar14 = 0;
LAB_82581e20:
  fn_82F6A58C(uVar14);
  return;
}

