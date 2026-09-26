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
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_827F9DE8();
extern int fn_827F9E08();
extern int fn_827F9F70();
extern int fn_827F9F88();
extern int fn_827F9FD0();
extern int fn_827FA720();
extern int fn_827FED58();
extern int fn_827FF0D0();
extern int fn_827FF130();
extern int fn_82800E88();
extern int fn_82800E98();
extern int fn_82800EC0();
extern int fn_828010F0();
extern int fn_8280D8B0();
extern int fn_8280DD50();
extern int fn_8280DF98();
extern int fn_8280E168();
extern int fn_8280E180();
extern int fn_828105C8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_120;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_827FF330(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar8;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined8 uVar7;
  short sVar12;
  code *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float *pfVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float afStack_130 [4];
  undefined4 uStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  int aiStack_110 [2];
  longlong lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [4];
  int iStack_ec;
  int iStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [144];
  
  piVar8 = (int *)fn_82F6A548();
  fn_82800E88(piVar8,aiStack_110);
  iVar4 = aiStack_110[0];
  if (*(int *)(*piVar8 + 0x30) == 0) {
    sVar12 = 0;
  }
  else {
    sVar12 = *(short *)(*piVar8 + 0x22);
  }
  if (sVar12 != 0) {
    puVar15 = (undefined4 *)(aiStack_110[0] + 0x34);
    puVar14 = (undefined4 *)(aiStack_110[0] + 0x54);
    uVar5 = fn_827F9F88(piVar8);
    uVar6 = fn_827F9DE8(piVar8);
    iVar9 = fn_827F9E08(piVar8);
    fn_827F9F70(piVar8);
    iVar2 = *(int *)(*piVar8 + 0x30);
    iVar3 = *(int *)(iVar2 + 0x24);
    iVar10 = fn_827FF0D0(piVar8);
    cVar11 = fn_827F9FD0(piVar8);
    if (0 < (int)uVar6) {
      uVar5 = ((uVar6 & 0xffffffff) >> 0x1f) - (ulonglong)(2 < uVar6) & uVar5;
    }
    if (iVar9 == 0) {
      fn_828010F0(piVar8,afStack_130,auStack_f0,1);
      pfVar16 = (float *)&lStack_108;
      pcVar13 = fn_82800E98;
    }
    else {
      if (iVar9 != 1) goto LAB_827ff7b8;
      fn_828010F0(piVar8,afStack_130,auStack_f0,1);
      pcVar13 = fn_82800EC0;
      pfVar16 = (float *)(iStack_e8 * iVar10 * 4 + iVar3);
    }
    pfVar17 = (float *)(iStack_ec * iVar10 * 4 + iVar3);
    dVar20 = (double)lbl_821AAD20;
    dVar18 = dVar20;
    if (*(char *)(iVar2 + 0x1c) != '\0') {
      dVar20 = (double)(*pcVar13)((double)afStack_130[0],dVar20,(double)*pfVar17,(double)*pfVar16,
                                  dVar20);
      pfVar17 = pfVar17 + 1;
      pfVar16 = pfVar16 + 1;
    }
    dVar19 = dVar18;
    if (*(char *)(iVar2 + 0x1d) != '\0') {
      dVar18 = (double)(*pcVar13)((double)afStack_130[0],dVar18,(double)*pfVar17,(double)*pfVar16,
                                  dVar18);
      pfVar17 = pfVar17 + 1;
      pfVar16 = pfVar16 + 1;
    }
    dVar21 = dVar19;
    if (*(char *)(iVar2 + 0x1e) != '\0') {
      dVar19 = (double)(*pcVar13)((double)afStack_130[0],dVar19,(double)*pfVar17,(double)*pfVar16,
                                  dVar19);
      pfVar17 = pfVar17 + 1;
      pfVar16 = pfVar16 + 1;
    }
    if (((*(char *)(iVar2 + 0x1f) == '\0') && (*(char *)(iVar2 + 0x20) == '\0')) &&
       (*(char *)(iVar2 + 0x21) == '\0')) {
      fn_8280DD50(&uStack_120);
    }
    else if (iVar9 == 0) {
      fStack_11c = pfVar17[1];
      fStack_118 = pfVar17[2];
      fStack_114 = pfVar17[3];
    }
    else if (iVar9 == 1) {
      fStack_e0 = *pfVar17;
      fStack_dc = pfVar17[1];
      fStack_d8 = pfVar17[2];
      fStack_d4 = pfVar17[3];
      fStack_d0 = *pfVar16;
      fStack_cc = pfVar16[1];
      fStack_c8 = pfVar16[2];
      fStack_c4 = pfVar16[3];
      fn_8280E180((double)afStack_130[0],&fStack_e0,&fStack_d0,&uStack_120);
    }
    else {
      fStack_11c = (float)dVar21;
      fStack_118 = (float)dVar21;
      fStack_114 = (float)dVar21;
    }
    if (cVar11 != '\0') {
      fStack_11c = -fStack_11c;
      fStack_118 = -fStack_118;
    }
    uStack_a0 = *puVar14;
    uStack_9c = *(undefined4 *)(iVar4 + 0x58);
    uStack_98 = *(undefined4 *)(iVar4 + 0x5c);
    uStack_94 = *(undefined4 *)(iVar4 + 0x60);
    fn_8280E168((double)(float)piVar8[0x35],(double)(float)piVar8[0x36],(double)(float)piVar8[0x37]
                 ,(double)(float)piVar8[0x38],auStack_c0);
    fn_827FF130(&uStack_b0,&uStack_120,&uStack_a0,auStack_c0,uVar5,cVar11,aiStack_110[0] + 0x74);
    *puVar15 = uStack_b0;
    *(undefined4 *)(iVar4 + 0x38) = uStack_ac;
    *(undefined4 *)(iVar4 + 0x3c) = uStack_a8;
    *(undefined4 *)(iVar4 + 0x40) = uStack_a4;
    if (cVar11 != '\0') {
      dVar20 = -dVar20;
    }
    if ((int)uVar5 == 0) {
      *(float *)(iVar4 + 0x44) = (float)(dVar20 - (double)*(float *)(iVar4 + 100));
      *(float *)(iVar4 + 0x48) = (float)(dVar18 - (double)*(float *)(iVar4 + 0x68));
      fVar1 = (float)(dVar19 - (double)*(float *)(iVar4 + 0x6c));
    }
    else {
      lStack_108 = (longlong)(int)uVar5;
      fVar1 = (float)(dVar20 - (double)*(float *)(iVar4 + 100));
      if (cVar11 == '\0') {
        fVar1 = (float)piVar8[0x32] * (float)lStack_108 + fVar1;
      }
      else {
        fVar1 = -((float)piVar8[0x32] * (float)lStack_108 - fVar1);
      }
      *(float *)(iVar4 + 0x44) = fVar1;
      *(float *)(iVar4 + 0x48) =
           (float)piVar8[0x33] * (float)lStack_108 +
           (float)(dVar18 - (double)*(float *)(iVar4 + 0x68));
      fVar1 = (float)piVar8[0x34] * (float)lStack_108 +
              (float)(dVar19 - (double)*(float *)(iVar4 + 0x6c));
    }
    *(float *)(iVar4 + 0x4c) = fVar1;
    *(float *)(iVar4 + 0x68) = (float)dVar18;
    *(float *)(iVar4 + 100) = (float)dVar20;
    *(float *)(iVar4 + 0x6c) = (float)dVar19;
    *puVar14 = uStack_120;
    *(float *)(iVar4 + 0x58) = fStack_11c;
    *(float *)(iVar4 + 0x5c) = fStack_118;
    *(float *)(iVar4 + 0x60) = fStack_114;
    fn_828105C8((double)*(float *)(iVar4 + 0x44),(double)*(float *)(iVar4 + 0x48),
                 (double)*(float *)(iVar4 + 0x4c),&uStack_100);
    fn_8280D8B0(&uStack_120,auStack_90);
    fn_8280DF98(auStack_90,&uStack_100,&uStack_100);
    *(undefined4 *)(iVar4 + 0x44) = uStack_100;
    *(undefined4 *)(iVar4 + 0x48) = uStack_fc;
    *(undefined4 *)(iVar4 + 0x4c) = uStack_f8;
  }
  uVar7 = fn_827FED58(piVar8);
  fn_827FA720(aiStack_110[0],uVar7);
LAB_827ff7b8:
  fn_82F6A594();
  return;
}

