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
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern V16 vectorSubtractFloatingPoint();


void fn_824AA7E8(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int in_r0;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  pfVar4 = (float *)fn_82F6A548();
  fVar3 = lbl_821CA1A8;
  fVar2 = lbl_821CA1A4;
  puVar1 = (undefined4 *)
           ((int)((param_4 & 0xffffffff) << 6) + *(int *)(param_2 + 0x40) & 0xfffffff0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  dVar9 = (double)lbl_82195680;
  *pfVar4 = lbl_821CA1A0;
  pfVar4[1] = fVar2;
  pfVar4[2] = fVar3;
  puVar1 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  dVar8 = (double)fStack_3c;
  dVar6 = (double)fStack_40;
  dVar7 = (double)(fStack_38 * fStack_38);
  if ((dVar9 < ABS(dVar8)) || (dVar9 < ABS((double)SQRT((float)(dVar6 * dVar6 + dVar7))))) {
    dVar5 = (double)fn_82809D40(-dVar8);
    *pfVar4 = (float)dVar5;
  }
  if ((dVar9 < ABS(dVar6)) || (dVar9 < ABS((double)SQRT((float)(dVar8 * dVar8 + dVar7))))) {
    dVar6 = (double)fn_82809D40(dVar6);
    pfVar4[1] = (float)dVar6;
  }
  fn_82F6A594(pfVar4);
  return;
}

