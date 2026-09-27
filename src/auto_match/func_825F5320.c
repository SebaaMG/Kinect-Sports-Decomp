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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_78;
extern int fn_8255A160();
extern int fn_82623EC0();
extern int fn_82623F60();
extern int fn_82624048();
extern int fn_82624218();
extern int fn_82624288();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82195AE0;
extern unsigned int lbl_82195C84;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B43C;
extern unsigned int lbl_8326B868;
extern unsigned int lbl_83274AF4;
extern unsigned int lbl_83274AFC;
extern unsigned int lbl_83274B00;
extern unsigned int lbl_83274B04;
extern unsigned int lbl_83274B08;
extern unsigned int uStack_90;


void fn_825F5320(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_register_000104d0;
  undefined4 uVar19;
  undefined4 in_register_000104d4;
  undefined4 uVar20;
  undefined4 in_register_000104d8;
  undefined4 uVar21;
  undefined4 in_vr77;
  undefined4 uVar22;
  char acStack_a0 [4];
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong lStack_88;
  float afStack_80 [2];
  float fStack_78;
  
  pcVar4 = (char *)fn_82F6A544();
  iVar3 = lbl_8326B434;
  iVar6 = lbl_8326B430;
  if (pcVar4 != (char *)0x0) {
    iVar5 = (int)SQRT((float)(longlong)(lbl_8326B434 * lbl_8326B434 + lbl_8326B430 * lbl_8326B430));
    uStack_90 = (longlong)iVar5;
    fn_82623EC0();
    lbl_83274AF4 = 0xffffff18;
    lbl_83274B08 = 8;
    dVar11 = (double)lbl_821917B0;
    dVar10 = (double)lbl_821CA460;
    pcVar7 = pcVar4;
    if (lbl_8326B43C == 0) {
      lbl_83274AFC = lbl_821917B0;
    }
    else {
      lbl_83274AFC = lbl_821CA460;
    }
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uStack_90 = (longlong)iVar5;
    iVar5 = fn_82624288(0xffffffff821aa62c);
    lVar8 = (longlong)(iVar5 * (int)(pcVar7 + (-1 - (int)pcVar4)));
    dVar9 = (double)((float)((double)uStack_90 / (double)lVar8) * lbl_82193B00);
    if (lbl_8326B43C == 0) {
      dVar9 = (double)(float)(dVar9 * dVar11);
    }
    lbl_83274AFC = (float)dVar9;
    pcVar7 = pcVar4;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uStack_90 = lVar8;
    iVar5 = fn_82624288(0xffffffff821aa62c);
    uStack_90 = (longlong)(iVar5 * (int)(pcVar7 + (-1 - (int)pcVar4)));
    dVar12 = (double)lbl_82195AE0;
    uVar22 = in_vr77;
    uVar21 = in_register_000104d8;
    uVar20 = in_register_000104d4;
    uVar19 = in_register_000104d0;
    fn_8255A160(dVar12,(double)uStack_90);
    uStack_90 = (longlong)iVar6;
    dVar9 = (double)lbl_8218E8E8;
    puVar2 = (undefined4 *)((int)afStack_80 + (int)in_r0 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    dVar14 = (double)(float)((double)((float)uStack_90 - afStack_80[0]) * dVar9);
    iVar6 = fn_82624218();
    uStack_90 = (longlong)iVar6;
    lbl_8326B868 = lbl_82195C84;
    cVar1 = *pcVar4;
    dVar9 = (double)uStack_90 * dVar9 +
            (double)(float)((double)((float)(longlong)iVar3 - fStack_78) * dVar9);
    while (uVar18 = lbl_83274AF4, dVar13 = (double)(float)dVar9, cVar1 != '\0') {
      iStack_94 = (int)dVar9;
      iVar6 = (int)dVar14;
      acStack_a0[0] = *pcVar4;
      iStack_98 = lbl_83274B04 + iStack_94;
      acStack_a0[1] = 0;
      iStack_9c = lbl_83274B00 + iVar6;
      lbl_83274AF4 = lbl_83274B08;
      uStack_90 = CONCAT44(iVar6,iVar6);
      fn_82624048(acStack_a0,&iStack_9c,&iStack_98);
      lbl_83274AF4 = uVar18;
      fn_82624048(acStack_a0,&uStack_90,&iStack_94);
      pcVar7 = "X";
      if (*pcVar4 != ' ') {
        pcVar7 = acStack_a0;
      }
      iVar6 = fn_82624288(pcVar7);
      lStack_88 = (longlong)iVar6;
      uVar18 = uVar22;
      uVar17 = uVar21;
      uVar16 = uVar20;
      uVar15 = uVar19;
      fn_8255A160(dVar12,(double)lStack_88);
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
      puVar2 = (undefined4 *)((int)afStack_80 + (int)in_r0 & 0xfffffff0);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      dVar14 = (double)(float)((double)afStack_80[0] + dVar14);
      dVar9 = (double)fStack_78 + dVar13;
    }
    fn_82623F60();
    if (lbl_8326B43C == 0) {
      lbl_83274AFC = (float)dVar11;
    }
    else {
      lbl_83274AFC = (float)dVar10;
    }
  }
  fn_82F6A590();
  return;
}

