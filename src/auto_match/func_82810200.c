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


/* WARNING: Removing unreachable block (ram,0x8280f400) */
/* WARNING: Removing unreachable block (ram,0x8280f334) */
/* WARNING: Removing unreachable block (ram,0x8280f350) */
/* WARNING: Removing unreachable block (ram,0x8280f470) */

void fn_82810200(double param_1,double param_2,double param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int in_r6;
  uint uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_f1;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [15];
  
  dVar4 = (double)lbl_82002C5C;
  dVar9 = (double)(float)(param_2 * dVar4);
  dVar7 = (double)(float)(param_3 * dVar4);
  uVar5 = fn_8280A580((double)(float)(param_1 * dVar4));
  uVar6 = fn_8280A580(dVar9);
  uVar2 = fn_8280A580(dVar7);
  uVar8 = extraout_f1;
  uVar2 = fn_8280A668(uVar5,uVar2,afStack_3c,&fStack_44);
  uVar2 = fn_8280A668(uVar6,uVar2,&fStack_50,&fStack_4c);
  fn_8280A668(uVar8,uVar2,&fStack_40,&fStack_48);
  uVar3 = (uint)lbl_83156DF1;
  uVar1 = (uint)lbl_83156DF2;
  *(float *)((uint)lbl_83156DF0 * 4 + in_r6) =
       fStack_48 * afStack_3c[0] * fStack_4c - fStack_40 * fStack_44 * fStack_50;
  *(float *)(uVar3 * 4 + in_r6) =
       fStack_40 * afStack_3c[0] * fStack_4c + fStack_48 * fStack_44 * fStack_50;
  *(float *)(uVar1 * 4 + in_r6) =
       fStack_40 * fStack_44 * fStack_4c - fStack_48 * afStack_3c[0] * fStack_50;
  *(float *)(in_r6 + 0xc) =
       fStack_40 * afStack_3c[0] * fStack_50 + fStack_48 * fStack_44 * fStack_4c;
  return;
}

