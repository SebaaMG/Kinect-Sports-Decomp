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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_68;
extern int fn_8223C200();
extern int fn_8223C478();
extern int fn_8287C3E8();
extern int fn_828E9F18();
extern int fn_82F65018();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_82F6B030();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195528;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2D78;
extern unsigned int lbl_8329769C;
extern unsigned int lbl_832976A0;
extern unsigned int lbl_832976A8;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


void fn_823BDE88(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  char cVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar8;
  ulonglong uVar7;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_80;
  ulonglong uStack_70;
  float fStack_68;
  
  uVar3 = fn_82F6A544();
  uVar8 = lbl_8329769C;
  if ((lbl_8329769C & 1) == 0) {
    uVar8 = lbl_8329769C | 1;
    lbl_8329769C = uVar8;
    dVar10 = (double)fn_82F6B030(0x20000);
    lbl_832976A0 = (ulonglong)SQRT(dVar10);
    uStack_80 = lbl_832976A0;
  }
  if ((uVar8 & 2) == 0) {
    lbl_8329769C = uVar8 | 2;
    lbl_832976A8 = lbl_832976A0 * lbl_832976A0;
  }
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar15 = *puVar2;
  uVar16 = puVar2[1];
  uVar17 = puVar2[2];
  uVar18 = puVar2[3];
  puVar2 = (undefined4 *)((int)&uStack_80 + in_r0 & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  dVar12 = (double)(((U64)(uStack_80) >> 32) & 0xFFFFFFFF);
  puVar2 = (undefined4 *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  dVar11 = (double)fStack_68;
  dVar14 = (double)lbl_821CC160;
  puVar2 = (undefined4 *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  dVar10 = (double)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  bVar9 = dVar10 < dVar14;
  if (bVar9) {
    dVar10 = -dVar10;
  }
  dVar13 = dVar12;
  fn_8223C200(uVar3,bVar9,0);
  if (dVar13 < dVar14) {
    dVar12 = -dVar13;
  }
  fn_8223C200(uVar3,dVar13 < dVar14,0);
  bVar9 = dVar11 < dVar14;
  if (bVar9) {
    dVar11 = -dVar11;
  }
  fn_8223C200(uVar3,bVar9,0);
  cVar4 = fn_8287C3E8(dVar11);
  if ((cVar4 == '\0') || (cVar4 = fn_8287C3E8(dVar10), dVar14 = lbl_82195518, cVar4 == '\0')) {
    dVar14 = (double)fn_82F65018(dVar11,dVar10);
  }
  dVar10 = (double)fn_82F65018(dVar12,SQRT(dVar11 * dVar11 + dVar10 * dVar10));
  uVar1 = lbl_832976A0;
  dVar11 = (double)lbl_831D2D78;
  dVar14 = dVar14 / dVar11;
  dVar12 = (double)fn_82F6B030(lbl_832976A0);
  uStack_70 = uVar1 - 1;
  uStack_80 = (ulonglong)((lbl_82195528 - dVar10 / dVar11) * dVar12);
  puVar5 = &uStack_70;
  if (uStack_80 <= uStack_70) {
    puVar5 = &uStack_80;
  }
  uVar7 = *puVar5;
  uVar1 = uVar7 * 2;
  dVar10 = (double)fn_82F6B030(uVar1 + 1);
  uStack_70 = (ulonglong)(dVar10 * dVar14);
  puVar5 = &uStack_80;
  if (uStack_70 <= uVar1) {
    puVar5 = &uStack_70;
  }
  uVar6 = *puVar5;
  uStack_80 = uVar1;
  fn_8223C478(uVar3,0x11,0);
  fn_828E9F18(uVar3,uVar7 * uVar7 + uVar6,0x11);
  fn_82F6A590();
  return;
}

