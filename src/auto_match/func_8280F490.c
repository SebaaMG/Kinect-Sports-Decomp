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
extern unsigned int *fStack_4c;
extern unsigned int *fStack_50;
extern int fn_8280A580();
extern int fn_8280A668();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_83156DF0;
extern unsigned int lbl_83156DF1;
extern unsigned int lbl_83156DF2;


void fn_8280F490(double param_1,double param_2,double param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int in_r7;
  int iVar8;
  float *pfVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_f1;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [15];
  
  dVar10 = (double)lbl_82002C5C;
  dVar15 = (double)(float)(param_2 * dVar10);
  dVar3 = param_1;
  if ((param_4 & 0x10) != 0) {
    dVar3 = param_3;
    param_3 = param_1;
  }
  dVar13 = (double)(float)(param_3 * dVar10);
  if ((param_4 & 4) != 0) {
    dVar15 = -dVar15;
  }
  uVar11 = fn_8280A580((double)(float)(dVar3 * dVar10));
  uVar12 = fn_8280A580(dVar15);
  uVar7 = fn_8280A580(dVar13);
  uVar14 = extraout_f1;
  uVar7 = fn_8280A668(uVar11,uVar7,afStack_3c,&fStack_44);
  uVar7 = fn_8280A668(uVar12,uVar7,&fStack_50,&fStack_4c);
  fn_8280A668(uVar14,uVar7,&fStack_40,&fStack_48);
  iVar8 = param_4 * 4;
  fVar4 = fStack_48 * fStack_44;
  fStack_44 = fStack_40 * fStack_44;
  fStack_48 = fStack_48 * afStack_3c[0];
  bVar1 = (&lbl_83156DF1)[iVar8];
  fStack_40 = fStack_40 * afStack_3c[0];
  bVar2 = (&lbl_83156DF2)[iVar8];
  pfVar9 = (float *)((uint)bVar1 * 4 + in_r7);
  if ((param_4 & 8) == 0) {
    *(float *)((uint)(byte)(&lbl_83156DF0)[iVar8] * 4 + in_r7) =
         fStack_48 * fStack_4c - fStack_44 * fStack_50;
    fVar6 = fStack_40 * fStack_4c + fVar4 * fStack_50;
    fVar5 = fStack_44 * fStack_4c - fStack_48 * fStack_50;
    fStack_4c = fStack_40 * fStack_50 + fVar4 * fStack_4c;
  }
  else {
    *(float *)((uint)(byte)(&lbl_83156DF0)[iVar8] * 4 + in_r7) = (fStack_48 + fStack_44) * fStack_4c
    ;
    fVar6 = (fStack_40 + fVar4) * fStack_50;
    fVar5 = (fStack_44 - fStack_48) * fStack_50;
    fStack_4c = (fVar4 - fStack_40) * fStack_4c;
  }
  *(float *)((uint)bVar1 * 4 + in_r7) = fVar6;
  *(float *)((uint)bVar2 * 4 + in_r7) = fVar5;
  *(float *)(in_r7 + 0xc) = fStack_4c;
  if ((param_4 & 4) != 0) {
    *pfVar9 = -*pfVar9;
  }
  return;
}

