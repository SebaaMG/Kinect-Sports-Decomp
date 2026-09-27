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
extern unsigned int fStack_48;
extern unsigned int fStack_60;
extern int fn_82559FF0();
extern int fn_8261E4B8();
extern int fn_8261FD18();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82193E50;
extern float lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821955B4;
extern float lbl_82195668;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_82195938;
extern float lbl_8219593C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;


double fn_825DB900(double param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  struct { float first; float second; } stack_pair_60;

  float afStack_50 [2];
  float fStack_48;
  
  dVar5 = (double)lbl_821CC160;
  dVar6 = dVar5;
  if ((param_3 & 0xffffffff) != 0) {
    dVar5 = (double)fn_8261FD18(param_3);
  }
  dVar4 = (double)(float)(dVar5 * (double)lbl_82195938);
  if ((dVar5 == dVar6) && (dVar6 < param_1)) {
    puVar1 = (undefined4 *)(param_4 + 0xd0U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    fn_82559FF0(&stack_pair_60.first);
    fVar3 = SQRT(fStack_48 * fStack_48 + afStack_50[0] * afStack_50[0]) * lbl_82195668;
    if (lbl_821CA460 < fVar3) {
      fVar3 = lbl_821CA460;
    }
    if (lbl_82191FC8 <= fVar3) {
      dVar6 = (double)((fVar3 - lbl_82191FC8) * lbl_8219593C);
    }
    fn_8261E4B8(param_2 + 0x460,&stack_pair_60.second,0);
    fVar3 = (stack_pair_60.first - stack_pair_60.second) * lbl_82195590;
    dVar5 = (double)(float)(((double)fVar3 - (double)(longlong)fVar3) * lbl_821955A0);
    fVar3 = lbl_82193E50;
    if (((double)lbl_831E4E38 < dVar5) || (fVar3 = lbl_821956BC, dVar5 < (double)lbl_821955B4)) {
      dVar5 = (double)(float)((double)fVar3 - dVar5);
    }
    dVar4 = -(double)(float)((double)(float)(dVar5 * dVar6) * param_1 - dVar4);
  }
  return dVar4;
}

