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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_822C6B30();
extern int fn_82809D40();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_822C69F0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  uVar4 = fn_82F6A548();
  puVar3 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  dVar9 = (double)fStack_4c;
  dVar8 = (double)fStack_44;
  dVar5 = (double)lbl_821916FC;
  dVar10 = (double)fStack_50;
  dVar6 = (double)(float)(dVar9 * dVar5);
  dVar7 = (double)(float)((double)fStack_48 * dVar5);
  fVar1 = (float)(dVar10 * (double)(float)(dVar10 * dVar5));
  dVar5 = (double)(float)(dVar8 * (double)(float)(dVar10 * dVar5));
  dVar11 = (double)(float)(dVar7 * dVar9 - dVar5);
  fVar2 = (float)((double)fStack_48 * dVar7);
  dVar14 = (double)(float)(dVar8 * dVar6 + (double)(float)(dVar7 * dVar10));
  dVar13 = (double)(lbl_821CA460 - ((float)(dVar9 * dVar6) + fVar1));
  dVar12 = (double)SQRT((float)(dVar13 * dVar13 + (double)(float)(dVar14 * dVar14)));
  if (dVar12 <= (double)lbl_82195628) {
    dVar5 = (double)fn_82809D40(-(double)((float)(dVar6 * dVar10) - (float)(dVar8 * dVar7)),
                                 (double)(lbl_821CA460 - (fVar2 + (float)(dVar9 * dVar6))),dVar5);
    fStack_48 = (float)dVar5;
    dVar5 = (double)fn_82809D40(-dVar11,dVar12);
    fStack_50 = (float)dVar5;
    fStack_4c = lbl_821CC160;
  }
  else {
    dVar5 = (double)fn_82809D40((double)((float)(dVar6 * dVar10) + (float)(dVar8 * dVar7)),
                                 (double)(lbl_821CA460 - (fVar2 + fVar1)));
    fStack_48 = (float)dVar5;
    dVar5 = (double)fn_82809D40(-dVar11,dVar12);
    fStack_50 = (float)dVar5;
    dVar5 = (double)fn_82809D40(dVar14,dVar13);
    fStack_4c = (float)dVar5;
  }
  fn_822C6B30(uVar4,param_2,param_3,CONCAT44(fStack_50,fStack_4c),
                    (ulonglong)(uint)fStack_48 << 0x20);
  fn_82F6A594();
  return;
}

