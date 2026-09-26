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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82809D40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8261E4B8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar5 = fn_82F6A548();
  puVar3 = (undefined4 *)(iVar5 + 0x20U & 0xfffffff0);
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar4 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar16;
  puVar4[2] = uVar17;
  puVar4[3] = uVar18;
  dVar10 = (double)fStack_4c;
  dVar9 = (double)fStack_44;
  dVar6 = (double)lbl_821916FC;
  dVar11 = (double)fStack_50;
  dVar7 = (double)(float)(dVar10 * dVar6);
  dVar8 = (double)(float)((double)fStack_48 * dVar6);
  fVar1 = (float)(dVar11 * (double)(float)(dVar11 * dVar6));
  dVar6 = (double)(float)(dVar9 * (double)(float)(dVar11 * dVar6));
  dVar12 = (double)(float)(dVar8 * dVar10 - dVar6);
  fVar2 = (float)((double)fStack_48 * dVar8);
  dVar15 = (double)(float)(dVar9 * dVar7 + (double)(float)(dVar8 * dVar11));
  dVar14 = (double)(lbl_821CA460 - ((float)(dVar10 * dVar7) + fVar1));
  dVar13 = (double)SQRT((float)(dVar14 * dVar14 + (double)(float)(dVar15 * dVar15)));
  if (dVar13 <= (double)lbl_82195628) {
    fn_82809D40(-(double)((float)(dVar7 * dVar11) - (float)(dVar9 * dVar8)),
                 (double)(lbl_821CA460 - (fVar2 + (float)(dVar10 * dVar7))),dVar6);
    dVar6 = (double)fn_82809D40(-dVar12,dVar13);
    dVar7 = (double)lbl_821CC160;
  }
  else {
    fn_82809D40((double)((float)(dVar7 * dVar11) + (float)(dVar9 * dVar8)),
                 (double)(lbl_821CA460 - (fVar2 + fVar1)));
    dVar6 = (double)fn_82809D40(-dVar12,dVar13);
    dVar7 = (double)fn_82809D40(dVar15,dVar14);
  }
  if ((param_2 & 0xffffffff) != 0) {
    *(float *)param_2 = (float)dVar7;
  }
  if ((param_3 & 0xffffffff) != 0) {
    *(float *)param_3 = (float)dVar6;
  }
  fn_82F6A594();
  return;
}

