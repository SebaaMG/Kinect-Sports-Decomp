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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int fStack_118;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_140;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern int fn_822B6AE0();
extern int fn_822BE860();
extern int fn_82359558();
extern int fn_82402488();
extern int fn_82402798();
extern int fn_824CCD80();
extern int fn_824CD030();
extern int fn_82530158();
extern int fn_82559EF0();
extern int fn_8255A470();
extern int fn_8255AA78();
extern int fn_8288B760();
extern int fn_82F512E8();
extern int fn_82F65018();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82195590;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821955A0;
extern unsigned int lbl_82195B20;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3200;
extern unsigned int lbl_831D3204;
extern unsigned int lbl_831D3208;
extern unsigned int lbl_831D320C;
extern unsigned int lbl_831D3210;
extern unsigned int lbl_831D3214;
extern unsigned int lbl_831D324C;
extern unsigned int lbl_831D32F0;
extern unsigned int lbl_831D32F4;
extern unsigned int lbl_831D32F8;
extern unsigned int lbl_8327F844;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern V16 vectorSubtractFloatingPoint();


void fn_824016B0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  int iVar8;
  int iVar9;
  undefined8 uVar7;
  float *pfVar10;
  uint uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  struct { float first; float second; } stack_pair_160;

  float fStack_158;
  float afStack_150 [2];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_120 [1];
  float fStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  iVar8 = fn_82F6A538();
  iVar9 = fn_824CD030(*(undefined4 *)(iVar8 + 0x10));
  if (iVar9 != 0) {
    uVar7 = fn_82359558(*(undefined4 *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
    fn_822BE860(uVar7,1);
  }
  uVar7 = fn_82359558(*(undefined4 *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
  fn_82402488(afStack_120,uVar7);
  puVar2 = (undefined4 *)((int)afStack_120 + in_r0 & 0xfffffff0);
  uVar12 = puVar2[1];
  uVar23 = puVar2[2];
  uVar24 = puVar2[3];
  puVar3 = (undefined4 *)(iVar8 + 0x1a0U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar12;
  puVar3[2] = uVar23;
  puVar3[3] = uVar24;
  fn_82402798(&fStack_130,iVar8);
  dVar19 = (double)lbl_821CC160;
  afStack_150[0] = lbl_821CC160;
  afStack_13c[0] = lbl_821CC160;
  fStack_148 = lbl_821CA1A0;
  fStack_144 = (float)lbl_821CA1A4;
  fStack_140 = lbl_821CA1A8;
  fn_82559EF0(afStack_150,afStack_13c);
  dVar18 = -(double)afStack_150[0];
  uVar7 = fn_82359558(*(undefined4 *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
  fn_822B6AE0(&uStack_110,uVar7,3);
  pfVar10 = (float *)fn_8255AA78(&fStack_130,uStack_110,uStack_108,uStack_100,uStack_f8,
                                       uStack_f0,uStack_e8,uStack_e0);
  fVar6 = lbl_821CA1A8;
  fVar5 = lbl_821CA1A0;
  fStack_158 = pfVar10[2];
  stack_pair_160.first = *pfVar10;
  dVar20 = (double)afStack_13c[0];
  stack_pair_160.second = pfVar10[1];
  dVar13 = (double)(stack_pair_160.first * lbl_82192734);
  fStack_12c = afStack_13c[0];
  fStack_130 = lbl_821CA1A0;
  fStack_128 = lbl_821CA1A8;
  dVar14 = (double)(fStack_158 * lbl_82192734);
  iVar9 = fn_82359558(*(undefined4 *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
  piVar1 = *(int **)(*(int *)(iVar9 + 0x24) + 0x20);
  fVar4 = stack_pair_160.second;
  if (*(int *)(iVar8 + 0x290) == 0) {
    dVar13 = (double)lbl_82195590;
    dVar22 = lbl_821955A0;
    if ((piVar1 == (int *)0x0) || (iVar9 = (**(code **)(*piVar1 + 4))(piVar1), iVar9 == 0)) {
      stack_pair_160.first = fVar5;
      dVar14 = (double)fVar5;
      fStack_158 = fVar6;
      dVar21 = (double)fVar6;
      stack_pair_160.second = fStack_12c;
      fVar4 = fStack_12c;
    }
    else {
      fn_82F512E8(auStack_b0,piVar1,2,0);
      fn_82F512E8(auStack_a0,piVar1,4,0);
      fn_82F512E8(auStack_d0,piVar1,0xd,1);
      fn_82F512E8(auStack_c0,piVar1,8,1);
      puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
      uVar12 = puVar2[1];
      uVar23 = puVar2[2];
      uVar24 = puVar2[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      puVar3 = (undefined4 *)((int)&stack_pair_160.first + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar3[2] = uVar23;
      puVar3[3] = uVar24;
      puVar2 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
      uVar12 = puVar2[1];
      uVar23 = puVar2[2];
      uVar24 = puVar2[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs44);
      dVar16 = (double)stack_pair_160.second;
      puVar3 = (undefined4 *)((int)afStack_120 + in_r0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar3[2] = uVar23;
      puVar3[3] = uVar24;
      dVar14 = (double)fn_82F65018(dVar16,(double)fStack_158);
      dVar21 = (double)lbl_821917B4;
      dVar14 = (double)(float)dVar14 * dVar13 - dVar21;
      dVar17 = (double)(float)(((double)(float)dVar14 - (double)(longlong)dVar14) * dVar22);
      dVar14 = (double)fn_82F65018(dVar16,(double)stack_pair_160.first);
      dVar14 = (double)(float)dVar14 * dVar13 - dVar21;
      dVar15 = (double)(float)(((double)(float)dVar14 - (double)(longlong)dVar14) * lbl_82195B20);
      dVar14 = (double)fn_82F65018((double)afStack_120[0],(double)fStack_118);
      dVar21 = (double)(float)dVar14 * dVar13 - dVar21;
      dVar16 = (double)(float)(((double)(float)dVar21 - (double)(longlong)dVar21) * dVar22);
      dVar14 = (double)fn_8255A470(dVar17,-(double)lbl_831D320C,(double)lbl_831D320C,dVar16);
      dVar21 = (double)fn_8255A470(dVar15,-(double)lbl_831D3214);
      dVar16 = (double)fn_8255A470(dVar16,-(double)lbl_831D3210);
      dVar16 = (double)(float)(dVar16 + dVar20) * dVar13;
      fVar4 = (float)(((double)(float)dVar16 - (double)(longlong)dVar16) * dVar22);
    }
    dVar16 = (double)(float)((double)fVar4 - dVar20) * dVar13;
    dVar14 = (double)(float)(dVar14 - (double)fStack_130) * dVar13;
    dVar21 = (double)(float)(dVar21 - (double)fStack_128) * dVar13;
    dVar20 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar16 -
                                                             (double)(longlong)dVar16) * dVar22) *
                                             (double)lbl_831D3204 + dVar20) * dVar13);
    dVar16 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar14 -
                                                             (double)(longlong)dVar14) * dVar22) *
                                             (double)lbl_831D3200 + (double)fStack_130) * dVar13);
    dVar14 = (double)(float)((double)(float)((double)(float)(((double)(float)dVar21 -
                                                             (double)(longlong)dVar21) * dVar22) *
                                             (double)lbl_831D3208 + (double)fStack_128) * dVar13);
    dVar13 = (double)(float)((dVar16 - (double)(longlong)(dVar16 - lbl_82195598)) * dVar22);
    dVar14 = (double)(float)((dVar14 - (double)(longlong)(dVar14 - lbl_82195598)) * dVar22);
    fVar4 = (float)((dVar20 - (double)(longlong)(dVar20 - lbl_82195598)) * dVar22);
  }
  fStack_140 = (float)dVar14;
  fStack_148 = (float)(dVar18 + dVar13);
  fStack_144 = fVar4 + lbl_82193E50;
  *(float *)(iVar8 + 0x214) = fStack_148;
  *(float *)(iVar8 + 0x218) = fStack_144;
  *(float *)(iVar8 + 0x21c) = fStack_140;
  *(undefined4 *)(iVar8 + 0x228) = lbl_831D324C;
  iVar9 = fn_82359558(*(undefined4 *)(iVar8 + 0x240),*(undefined4 *)(iVar8 + 0x10));
  if (*(int *)(iVar9 + 0x168) == 0) {
    uVar11 = *(uint *)(iVar9 + 0x16c);
  }
  else {
    uVar11 = fn_8288B760();
    uVar11 = uVar11 & 0xff;
  }
  if (uVar11 != 0) {
    uVar12 = *(undefined4 *)(iVar8 + 0x10);
    uVar23 = *(undefined4 *)(iVar8 + 0x240);
    iVar9 = fn_82359558(uVar23,uVar12);
    if ((*(int *)(iVar9 + 0x7a4) == 0) &&
       (iVar9 = fn_82359558(uVar23,uVar12), *(int *)(iVar9 + 0x788) != 4)) {
      if (*(int *)(iVar8 + 0x368) == 0) goto LAB_82401c14;
      fn_824CCD80(uVar12);
      if (lbl_8327F844 != 0) {
        fn_82530158(dVar19,(double)lbl_831D32F8,lbl_8327F844);
      }
      uVar12 = 0;
    }
    else {
      if (*(int *)(iVar8 + 0x368) != 0) goto LAB_82401c14;
      fn_824CCD80(uVar12);
      if (lbl_8327F844 != 0) {
        fn_82530158((double)lbl_831D32F0,(double)lbl_831D32F4,lbl_8327F844);
      }
      uVar12 = 1;
    }
    *(undefined4 *)(iVar8 + 0x368) = uVar12;
  }
LAB_82401c14:
  fn_82F6A584();
  return;
}

