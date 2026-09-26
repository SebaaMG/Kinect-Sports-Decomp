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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_822BE860();
extern int fn_82359558();
extern int fn_82402488();
extern int fn_824CD030();
extern int fn_82809D40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D324C;
extern unsigned int lbl_831E4E38;
extern unsigned int lbl_832976D4;


void fn_82401C30(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar6;
  int iVar7;
  undefined8 uVar5;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  iVar6 = fn_82F6A544();
  iVar7 = fn_824CD030(*(undefined4 *)(iVar6 + 0x10));
  if (iVar7 != 0) {
    uVar5 = fn_82359558(*(undefined4 *)(iVar6 + 0x240),*(undefined4 *)(iVar6 + 0x10));
    fn_822BE860(uVar5,1);
  }
  uVar5 = fn_82359558(*(undefined4 *)(iVar6 + 0x240),*(undefined4 *)(iVar6 + 0x10));
  fn_82402488(auStack_50,uVar5);
  dVar15 = (double)lbl_821CC160;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(fStack_4c - lbl_832976D4) < dVar15) << 2) |
                (uint)(NAN((double)(fStack_4c - lbl_832976D4)) || NAN(dVar15)) << 2)) < 0.0) {
    fStack_4c = lbl_832976D4;
  }
  iVar7 = fn_82359558(*(undefined4 *)(iVar6 + 0x240),*(undefined4 *)(iVar6 + 0x10));
  puVar3 = (undefined4 *)(iVar7 + 0x90U & 0xfffffff0);
  uVar19 = puVar3[1];
  uVar20 = puVar3[2];
  uVar22 = puVar3[3];
  puVar4 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar19;
  puVar4[2] = uVar20;
  puVar4[3] = uVar22;
  dVar12 = (double)fStack_5c;
  dVar11 = (double)fStack_54;
  dVar8 = (double)lbl_821916FC;
  dVar13 = (double)fStack_60;
  dVar9 = (double)(float)(dVar12 * dVar8);
  dVar10 = (double)(float)((double)fStack_58 * dVar8);
  fVar1 = (float)(dVar13 * (double)(float)(dVar13 * dVar8));
  dVar8 = (double)(float)(dVar11 * (double)(float)(dVar13 * dVar8));
  dVar14 = (double)(float)(dVar10 * dVar12 - dVar8);
  fVar2 = (float)((double)fStack_58 * dVar10);
  dVar18 = (double)(float)(dVar11 * dVar9 + (double)(float)(dVar10 * dVar13));
  dVar17 = (double)(lbl_821CA460 - ((float)(dVar12 * dVar9) + fVar1));
  dVar16 = (double)SQRT((float)(dVar17 * dVar17 + (double)(float)(dVar18 * dVar18)));
  if (dVar16 <= (double)lbl_82195628) {
    fn_82809D40(-(double)((float)(dVar9 * dVar13) - (float)(dVar11 * dVar10)),
                 (double)(lbl_821CA460 - (fVar2 + (float)(dVar12 * dVar9))),dVar8);
    fn_82809D40(-dVar14,dVar16);
    dVar8 = dVar15;
  }
  else {
    fn_82809D40((double)((float)(dVar9 * dVar13) + (float)(dVar11 * dVar10)),
                 (double)(lbl_821CA460 - (fVar2 + fVar1)));
    fn_82809D40(-dVar14,dVar16);
    dVar8 = dVar15;
    dVar15 = (double)fn_82809D40(dVar18,dVar17);
  }
  fVar1 = lbl_831E4E38;
  uVar19 = lbl_831D324C;
  fStack_58 = (float)dVar8;
  fStack_5c = (float)(dVar15 + (double)lbl_82193E50);
  fStack_60 = lbl_831E4E38;
  *(float *)(iVar6 + 0x21c) = fStack_58;
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  uVar20 = *puVar3;
  uVar22 = puVar3[1];
  uVar21 = puVar3[2];
  uVar23 = puVar3[3];
  *(undefined4 *)(iVar6 + 0x228) = uVar19;
  puVar3 = (undefined4 *)(iVar6 + 0x1a0U & 0xfffffff0);
  *puVar3 = uVar20;
  puVar3[1] = uVar22;
  puVar3[2] = uVar21;
  puVar3[3] = uVar23;
  *(float *)(iVar6 + 0x214) = fVar1;
  *(float *)(iVar6 + 0x218) = fStack_5c;
  fn_82F6A590();
  return;
}

