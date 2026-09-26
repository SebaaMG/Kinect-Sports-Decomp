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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_20;
extern unsigned int fStack_1c;
extern int fn_824AA258();
extern int fn_824AA3D8();
extern unsigned int lbl_8219145C;
extern unsigned int lbl_8219146C;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


double fn_824AB2E0(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    pfVar5 = (float *)&lbl_8219145C;
  }
  else {
    pfVar5 = (float *)&lbl_8219146C;
  }
  if (pfVar5[3] == 0.0) {
    iVar4 = fn_824AA258(auStack_20,param_1,param_2,pfVar5[2]);
  }
  else {
    iVar4 = fn_824AA3D8();
  }
  puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  fVar1 = *pfVar5;
  puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  dVar6 = (double)fStack_1c;
  dVar8 = (double)lbl_821CC160;
  if ((double)fVar1 <= dVar6) {
    dVar9 = (double)pfVar5[1];
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar6 < dVar8) << 2) | (uint)(NAN(dVar6) || NAN(dVar8)) << 2)) <
        0.0) {
      dVar6 = dVar8;
    }
    dVar7 = dVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar6 - dVar9) < dVar8) << 2) |
                  (uint)(NAN((double)(float)(dVar6 - dVar9)) || NAN(dVar8)) << 2)) < 0.0) {
      dVar7 = dVar6;
    }
    dVar8 = (double)(float)(dVar7 / dVar9);
  }
  return dVar8;
}

