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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82809D40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82195680;
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();


void fn_824B49D8(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  pfVar5 = (float *)fn_82F6A548();
  fVar4 = lbl_821CC160;
  iVar1 = *(int *)(param_2 + 0x40);
  pfVar5[2] = lbl_821CC160;
  *pfVar5 = fVar4;
  pfVar5[1] = fVar4;
  puVar2 = (undefined4 *)((int)((param_4 & 0xffffffff) << 6) + iVar1 & 0xfffffff0);
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar3 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar11;
  puVar3[2] = uVar12;
  puVar3[3] = uVar13;
  dVar9 = (double)fStack_3c;
  dVar7 = (double)fStack_40;
  dVar8 = (double)(fStack_38 * fStack_38);
  dVar10 = (double)lbl_82195680;
  if ((dVar10 < ABS(dVar9)) || (dVar10 < ABS((double)SQRT((float)(dVar7 * dVar7 + dVar8))))) {
    dVar6 = (double)fn_82809D40(-dVar9);
    *pfVar5 = (float)dVar6;
  }
  if ((dVar10 < ABS(dVar7)) || (dVar10 < ABS((double)SQRT((float)(dVar9 * dVar9 + dVar8))))) {
    dVar7 = (double)fn_82809D40(dVar7);
    pfVar5[1] = (float)dVar7;
  }
  fn_82F6A594();
  return;
}

