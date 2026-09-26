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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_83156DF0;
extern unsigned int lbl_83156DF1;
extern unsigned int lbl_83156DF2;


/* WARNING: Removing unreachable block (ram,0x8280f334) */
/* WARNING: Removing unreachable block (ram,0x8280f400) */

void fn_82810158(double param_1,double param_2,double param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int in_r6;
  uint uVar4;
  uint in_r7;
  int iVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_f1;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [15];
  
  dVar8 = param_1;
  if (in_r7 == 0) {
    uVar4 = 0;
    dVar11 = param_2;
  }
  else if (in_r7 == 1) {
    uVar4 = 1;
    dVar8 = param_2;
    dVar11 = param_3;
    param_3 = param_1;
  }
  else {
    dVar11 = param_1;
    if (in_r7 < 3) {
      uVar4 = 2;
      dVar8 = param_3;
      param_3 = param_2;
    }
    else if (in_r7 == 4) {
      uVar4 = 4;
      dVar11 = param_3;
      param_3 = param_2;
    }
    else if (in_r7 == 5) {
      uVar4 = 5;
      dVar8 = param_2;
    }
    else {
      if (in_r7 != 6) {
        return;
      }
      uVar4 = 6;
      dVar8 = param_3;
      dVar11 = param_2;
      param_3 = param_1;
    }
  }
  dVar7 = (double)lbl_82002C5C;
  dVar14 = (double)(float)(dVar11 * dVar7);
  dVar12 = (double)(float)(param_3 * dVar7);
  if ((uVar4 & 4) != 0) {
    dVar14 = -dVar14;
  }
  uVar9 = fn_8280A580((double)(float)(dVar8 * dVar7),dVar11);
  uVar10 = fn_8280A580(dVar14);
  uVar3 = fn_8280A580(dVar12);
  uVar13 = extraout_f1;
  uVar3 = fn_8280A668(uVar9,uVar3,afStack_3c,&fStack_44);
  uVar3 = fn_8280A668(uVar10,uVar3,&fStack_50,&fStack_4c);
  fn_8280A668(uVar13,uVar3,&fStack_40,&fStack_48);
  iVar5 = uVar4 * 4;
  bVar1 = (&lbl_83156DF1)[iVar5];
  bVar2 = (&lbl_83156DF2)[iVar5];
  pfVar6 = (float *)((uint)bVar1 * 4 + in_r6);
  *(float *)((uint)(byte)(&lbl_83156DF0)[iVar5] * 4 + in_r6) =
       fStack_48 * afStack_3c[0] * fStack_4c - fStack_40 * fStack_44 * fStack_50;
  *(float *)((uint)bVar1 * 4 + in_r6) =
       fStack_40 * afStack_3c[0] * fStack_4c + fStack_48 * fStack_44 * fStack_50;
  *(float *)((uint)bVar2 * 4 + in_r6) =
       fStack_40 * fStack_44 * fStack_4c - fStack_48 * afStack_3c[0] * fStack_50;
  *(float *)(in_r6 + 0xc) =
       fStack_40 * afStack_3c[0] * fStack_50 + fStack_48 * fStack_44 * fStack_4c;
  if ((uVar4 & 4) != 0) {
    *pfVar6 = -*pfVar6;
  }
  return;
}

