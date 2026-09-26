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
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8280A580();
extern int fn_8280A668();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83156DF0;
extern unsigned int lbl_83156DF1;
extern unsigned int lbl_83156DF2;


void fn_8280F4A0(double param_1,double param_2,double param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  int in_r7;
  int iVar15;
  uint uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_f1;
  undefined8 uVar20;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [9];
  
  dVar17 = param_1;
  if ((param_4 & 0x10) != 0) {
    dVar17 = param_3;
    param_3 = param_1;
  }
  if ((param_4 & 4) != 0) {
    dVar17 = -dVar17;
    param_2 = -param_2;
    param_3 = -param_3;
  }
  uVar18 = fn_8280A580(dVar17);
  uVar19 = fn_8280A580(param_2);
  uVar13 = fn_8280A580(param_3);
  uVar20 = extraout_f1;
  uVar13 = fn_8280A668(uVar18,uVar13,afStack_3c,&fStack_44);
  uVar13 = fn_8280A668(uVar19,uVar13,&fStack_4c,&fStack_50);
  fn_8280A668(uVar20,uVar13,&fStack_40,&fStack_48);
  iVar15 = param_4 * 4;
  bVar1 = (&lbl_83156DF0)[iVar15];
  fVar3 = fStack_48 * fStack_44;
  iVar14 = (uint)bVar1 * 3;
  fVar5 = fStack_40 * fStack_44;
  fVar4 = fStack_48 * afStack_3c[0];
  uVar16 = (uint)(byte)(&lbl_83156DF1)[iVar15];
  fVar6 = fStack_40 * afStack_3c[0];
  bVar2 = (&lbl_83156DF2)[iVar15];
  iVar7 = (uVar16 * 3 + (uint)bVar1) * 4;
  iVar8 = ((uint)bVar2 * 3 + (uint)bVar1) * 4;
  iVar9 = (iVar14 + uVar16) * 4;
  iVar15 = (uint)(byte)(&lbl_83156DF1)[iVar15] * 0x10;
  iVar10 = ((uint)bVar2 * 3 + uVar16) * 4;
  iVar11 = (uVar16 * 3 + (uint)bVar2) * 4;
  if ((param_4 & 8) == 0) {
    *(float *)((uint)bVar1 * 0x10 + in_r7) = fStack_48 * fStack_50;
    *(float *)(iVar7 + in_r7) = fVar4 * fStack_4c - fVar5;
    *(float *)(iVar8 + in_r7) = fVar3 * fStack_4c + fVar6;
    *(float *)(iVar9 + in_r7) = fStack_40 * fStack_50;
    *(float *)(iVar15 + in_r7) = fVar6 * fStack_4c + fVar3;
    *(float *)(iVar10 + in_r7) = fVar5 * fStack_4c - fVar4;
    *(float *)((iVar14 + (uint)bVar2) * 4 + in_r7) = -fStack_4c;
    *(float *)(iVar11 + in_r7) = fStack_50 * afStack_3c[0];
    *(float *)((uint)bVar2 * 0x10 + in_r7) = fStack_50 * fStack_44;
  }
  else {
    *(float *)((uint)bVar1 * 0x10 + in_r7) = fStack_50;
    *(float *)(iVar7 + in_r7) = fStack_4c * afStack_3c[0];
    *(float *)(iVar8 + in_r7) = fStack_4c * fStack_44;
    *(float *)(iVar9 + in_r7) = fStack_40 * fStack_4c;
    *(float *)(iVar15 + in_r7) = -(fVar6 * fStack_50 - fVar3);
    *(float *)(iVar10 + in_r7) = -(fVar5 * fStack_50) - fVar4;
    *(float *)((iVar14 + (uint)bVar2) * 4 + in_r7) = -(fStack_48 * fStack_4c);
    *(float *)(iVar11 + in_r7) = fVar4 * fStack_50 + fVar5;
    *(float *)((uint)bVar2 * 0x10 + in_r7) = fVar3 * fStack_50 - fVar6;
  }
  uVar12 = lbl_821AAD20;
  *(undefined4 *)(in_r7 + 0x24) = lbl_821AAD20;
  *(undefined4 *)(in_r7 + 0x28) = uVar12;
  *(undefined4 *)(in_r7 + 0x2c) = uVar12;
  return;
}

