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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_5c;
extern int fn_822315A0();
extern int fn_822BD338();
extern int fn_822CFA98();
extern int fn_82379660();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82191EE4;
extern unsigned int lbl_82191FB4;
extern unsigned int lbl_82191FC0;
extern unsigned int lbl_82192800;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82195A40;
extern unsigned int lbl_82195A44;
extern unsigned int lbl_82195A48;
extern unsigned int lbl_82195A4C;
extern unsigned int lbl_82195A50;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DCD58;
extern unsigned int lbl_83265A28;


void fn_822CE290(longlong param_1,int *param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  char cVar6;
  int iVar4;
  int iVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [80];
  
  cVar6 = fn_822BD338(param_3,0xffffffff821ad28c);
  dVar14 = (double)lbl_821CC160;
  dVar16 = (double)lbl_821CA460;
  fVar1 = lbl_82193B00;
  if ((cVar6 == '\0') &&
     (cVar6 = fn_822BD338(param_3,0xffffffff821ad294), fVar1 = lbl_82193B00, cVar6 == '\0')) {
    cVar6 = fn_822BD338(param_3,0xffffffff821ad29c);
    if (cVar6 == '\0') {
      cVar6 = fn_822BD338(param_3,0xffffffff821ad2a4);
      if (cVar6 == '\0') {
        cVar6 = fn_822BD338(param_3,0xffffffff821ad2a8);
        if (cVar6 == '\0') {
          cVar6 = fn_822BD338(param_3,0xffffffff821ad2b0);
          if (cVar6 == '\0') {
            cVar6 = fn_822BD338(param_3,0xffffffff821ad2bc);
            if (cVar6 == '\0') {
              cVar6 = fn_822BD338(param_3,0xffffffff821ad2c8);
              if (cVar6 == '\0') {
                cVar6 = fn_822BD338(param_3,0xffffffff821ad2d4);
                if (cVar6 == '\0') {
                  cVar6 = fn_822BD338(param_3,0xffffffff821ad2e4);
                  if (cVar6 == '\0') goto LAB_822ce554;
                  dVar10 = (double)lbl_82195A4C;
                }
                else {
                  dVar10 = (double)lbl_82195A48;
                }
              }
              else {
                dVar10 = (double)lbl_82195A44;
              }
            }
            else {
              dVar10 = (double)lbl_82195A40;
            }
          }
          else {
            dVar10 = (double)lbl_82191EE4;
          }
        }
        else {
          dVar10 = (double)lbl_82191FB4;
        }
      }
      else {
        dVar10 = (double)lbl_821917B0;
      }
    }
    else {
      iVar4 = fn_822CFA98(param_1,0);
      if (iVar4 == 0) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fVar1 = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar16) +
                lbl_8218E8E8;
        goto LAB_822ce48c;
      }
      if ((*(int *)(*param_2 + 0x2148) < 0x18) &&
         (*(int *)(&lbl_831DCD58 + *(int *)(*param_2 + 0x2148) * 4) == 3)) {
        dVar10 = (double)lbl_8218E8E8;
      }
      else {
        dVar10 = (double)lbl_82191FC0;
      }
    }
  }
  else {
LAB_822ce48c:
    dVar10 = (double)fVar1;
    if (dVar10 <= dVar14) goto LAB_822ce554;
  }
  iVar4 = (int)param_1;
  dVar12 = (double)*(float *)(iVar4 + 0x238);
  if ((double)lbl_82195A50 <= (double)*(float *)(iVar4 + 0x238)) {
    dVar12 = (double)lbl_82195A50;
  }
  param_1 = param_1 + 0x220;
  dVar9 = (double)lbl_821917C0;
  dVar11 = (double)lbl_82193AF0;
  dVar12 = -dVar12;
  dVar8 = (double)lbl_82192800;
  puVar2 = (undefined4 *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  uVar21 = *puVar2;
  uVar22 = puVar2[1];
  uVar23 = puVar2[2];
  uVar24 = puVar2[3];
  dVar15 = dVar14;
  do {
    dVar12 = (double)(float)(dVar12 + dVar11);
    iVar5 = fn_82379660((double)(float)((double)*(float *)(iVar4 + 0x238) + dVar12),auStack_50
                              ,*param_2);
    iVar3 = (int)in_r0;
    puVar2 = (undefined4 *)(iVar3 + iVar5 & 0xfffffff0);
    uVar17 = *puVar2;
    uVar18 = puVar2[1];
    uVar19 = puVar2[2];
    uVar20 = puVar2[3];
    puVar2 = (undefined4 *)((uint)(auStack_60 + iVar3) & 0xfffffff0);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2[2] = uVar19;
    puVar2[3] = uVar20;
    dVar13 = (double)fStack_5c;
    dVar7 = ABS((double)(float)(dVar13 - dVar10));
    if (dVar7 < dVar16) {
      dVar14 = dVar12;
      dVar16 = dVar7;
    }
    if (dVar7 <= dVar8) break;
    if (dVar9 <= dVar12) goto LAB_822ce544;
  } while (dVar15 < dVar13);
  if ((dVar9 <= dVar12) || (dVar13 <= dVar15)) {
LAB_822ce544:
    dVar12 = (double)*(float *)(iVar4 + 0x238) + dVar14;
    puVar2 = (undefined4 *)(iVar3 + (int)param_1 & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar22;
    puVar2[2] = uVar23;
    puVar2[3] = uVar24;
  }
  else {
    dVar12 = (double)*(float *)(iVar4 + 0x238) + dVar12;
    puVar2 = (undefined4 *)(iVar3 + (int)param_1 & 0xfffffff0);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2[2] = uVar19;
    puVar2[3] = uVar20;
  }
  *(float *)(iVar4 + 0x238) = (float)dVar12;
LAB_822ce554:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

