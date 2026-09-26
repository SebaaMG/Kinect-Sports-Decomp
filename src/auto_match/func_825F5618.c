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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_825E4B68();
extern int fn_825E4C20();
extern int fn_825F5320();
extern int fn_826310E0();
extern int fn_8263FB88();
extern int fn_828389E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83270138;
extern unsigned int lbl_832701B8;
extern unsigned int lbl_83270240;
extern unsigned int lbl_83270244;
extern unsigned int lbl_83270248;
extern unsigned int lbl_8327024C;
extern unsigned int lbl_83270250;
extern unsigned int lbl_83270254;
extern unsigned int lbl_83270258;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_832968D8;
extern unsigned int lbl_832968F0;
extern unsigned int lbl_832968F4;
extern unsigned int lbl_832968F8;
extern unsigned int lbl_832968FC;
extern unsigned int lbl_83296900;
extern unsigned int lbl_83296904;
extern unsigned int lbl_83296908;
extern unsigned int lbl_8329690C;
extern unsigned int lbl_8329789C;
extern unsigned int lbl_832978A0;
extern unsigned int lbl_8329E408;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825F5618(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int in_r0;
  int iVar16;
  uint uVar17;
  uint uVar18;
  char cVar20;
  byte bVar21;
  undefined4 *puVar19;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined1 in_vs32 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar29 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar30 [16];
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  if ((lbl_8329E408 & 1) == 0) {
    lbl_8329E408 = lbl_8329E408 | 1;
    lbl_8329789C = lbl_83270244;
    lbl_832978A0 = lbl_83270248;
  }
  fn_825F5320(0xffffffff832701bc);
  uVar23 = 0x499602d2;
  fn_825E4B68();
  fn_828389E0(*(undefined4 *)(lbl_83270240 + 0x14),0,0);
  uVar15 = lbl_8329690C;
  uVar14 = lbl_83296908;
  uVar13 = lbl_83296904;
  uVar12 = lbl_832968FC;
  uVar11 = lbl_832968F8;
  uVar10 = lbl_832968F4;
  uVar9 = lbl_832968F0;
  uVar8 = (((U64)(lbl_832968D8) >> 32) & 0xFFFFFFFF);
  uVar7 = (((U64)(lbl_832968D8) >> 0) & 0xFFFFFFFF);
  uVar6 = (((U64)(lbl_832968D0) >> 32) & 0xFFFFFFFF);
  uVar5 = (((U64)(lbl_832968D0) >> 0) & 0xFFFFFFFF);
  iVar22 = lbl_8320A898;{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar28, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar27, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs44,in_vs43); memcpy(auVar30, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs44,in_vs43); memcpy(auVar29, &_vt3, 16); }
  vectorMergeHighWord(auVar28,auVar30);
  vectorMergeLowWord(auVar28,auVar30);
  vectorMergeHighWord(auVar27,auVar29);
  vectorMergeLowWord(auVar27,auVar29);
  puVar19 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar19 = lbl_83296900;
  puVar19[1] = uVar13;
  puVar19[2] = uVar14;
  puVar19[3] = uVar15;
  puVar19 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar19 = uVar9;
  puVar19[1] = uVar10;
  puVar19[2] = uVar11;
  puVar19[3] = uVar12;
  puVar19 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar19 = in_register_000100a0;
  puVar19[1] = in_register_000100a4;
  puVar19[2] = in_register_000100a8;
  puVar19[3] = in_vr10;
  puVar19 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar19 = uVar5;
  puVar19[1] = uVar6;
  puVar19[2] = uVar7;
  puVar19[3] = uVar8;
  fn_826310E0(iVar22,0,auStack_b0,4,0x8000000000000000);
  iVar22 = 0;
  if ((ulonglong)lbl_832701B8 != 0xffffffffffffffff) {
    dVar25 = (double)lbl_8218E8E8;
    dVar26 = (double)lbl_821916FC;
    do {
      cVar20 = (&lbl_83270138)[iVar22];
      if (('`' < cVar20) && (cVar20 < '{')) {
        cVar20 = cVar20 + -0x20;
      }
      if (cVar20 == ' ') {
        bVar21 = 10;
      }
      else if (cVar20 == '\0') {
        bVar21 = 0x26;
      }
      else if ((cVar20 < '0') || ('9' < cVar20)) {
        if ((cVar20 < 'A') || ('Z' < cVar20)) {
          bVar21 = 0xff;
        }
        else {
          bVar21 = cVar20 - 0x36;
        }
      }
      else {
        bVar21 = cVar20 - 0x30;
      }
      if (bVar21 != 0xff) {
        iVar16 = fn_8263FB88(lbl_8320A898,0xd,0x48,0x14);
        uVar5 = lbl_821CC160;
        fVar4 = lbl_821CA460;
        if (-1 < (longlong)-(ulonglong)(iVar16 == 0)) {
          uVar18 = 0;
          iVar16 = iVar16 + 0xc;
          do {
            lVar24 = 3;
            puVar19 = (undefined4 *)(iVar16 + -0x18);
            iVar16 = iVar16 + 0xf0;
            do {
              uVar17 = uVar23 * 0x19660d + 0x3c6ef35f;
              uVar23 = uVar17 * 0x19660d + 0x3c6ef35f;
              fVar1 = (float)((double)(longlong)
                                      (int)((float)(longlong)(lbl_83270250 - lbl_8327024C) *
                                            ((float)(uVar17 & 0x7fffff | 0x3f800000) - fVar4) +
                                           (float)(longlong)lbl_8327024C) * dVar26 - dVar25);
              fVar2 = (float)((double)(longlong)
                                      (int)((float)(longlong)(lbl_83270258 - lbl_83270254) *
                                            ((float)(uVar23 & 0x7fffff | 0x3f800000) - fVar4) +
                                           (float)(longlong)lbl_83270254) * dVar26 - dVar25);
              if ((bVar21 >> (uVar18 & 0x3f) & 1) == 0) {
                fVar3 = fVar1 + fVar4;
                fVar1 = fVar1 - fVar4;
              }
              else {
                fVar3 = fVar1 - fVar4;
                fVar1 = fVar1 + fVar4;
              }
              puVar19[3] = fVar3;
              puVar19[5] = 0xffffffff;
              puVar19[4] = fVar2 + fVar4;
              puVar19[10] = 0xffffffff;
              puVar19[6] = uVar5;
              puVar19[0xf] = 0xffffffff;
              puVar19[7] = fVar4;
              puVar19[8] = fVar1;
              puVar19[9] = fVar2 + fVar4;
              puVar19[0xb] = fVar4;
              puVar19[0xc] = fVar4;
              puVar19[0xd] = fVar1;
              puVar19[0xe] = fVar2;
              puVar19[0x10] = fVar4;
              puVar19[0x11] = uVar5;
              puVar19[0x12] = fVar3;
              puVar19[0x13] = fVar2;
              puVar19[0x15] = uVar5;
              puVar19[0x16] = uVar5;
              puVar19 = puVar19 + 0x14;
              *puVar19 = 0xffffffff;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < 6);
          *(undefined4 *)(lbl_8320A898 + 0x30) = *(undefined4 *)(lbl_8320A898 + 0x3554);
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < (int)(lbl_832701B8 + 1));
  }
  fn_825E4C20();
  return;
}

