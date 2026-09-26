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
extern unsigned int *auStack_30;
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_823D6410();
extern int fn_823DB428();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_823C09D0(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 auStack_30 [8];
  
  iVar4 = *(int *)(param_2 + 0x54);
  if (((((iVar4 == 0x13) || (iVar4 == 0x12)) || (iVar4 == 0x11)) ||
      ((iVar4 == 0x14 || (iVar4 == 0xb)))) || (iVar4 == 0xc)) {
LAB_823c0ab0:
    fn_823598B0(param_2,0);
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(**(int **)(param_2 + 0x4b0) + 0xd4);
    iVar9 = *(int *)(iVar4 + 0x38);
    if ((*(int *)(iVar9 + 0x120c) == 1) || (*(int *)(iVar9 + 0x1220) != 0)) goto LAB_823c0ab0;
    iVar4 = *(int *)(iVar4 + 0x14);
    if ((*(int *)(iVar4 + 0x14) != 0) ||
       ((*(int *)(iVar4 + 0x18) != 0 || ((*(int **)(param_2 + 0x4b0))[0x35] != 0))))
    goto LAB_823c0ab0;
    if (*(int *)(param_2 + 0xac) != 1) {
      iVar4 = fn_8249ABC0();
      if (*(int *)(param_2 + 0xb4) != -1) {
        fn_8249D980(*(undefined4 *)(iVar4 + 0x110));
        *(undefined4 *)(param_2 + 0xb4) = 0xffffffff;
      }
      *(undefined4 *)(param_2 + 0xac) = 1;
    }
    uVar5 = 1;
  }
  fn_82359928(param_2,uVar5);
  iVar4 = 0;
  dVar15 = (double)lbl_821CC160;
  do {
    iVar9 = 0;
    lVar11 = 7;
    do {
      iVar7 = (iVar4 + iVar9) * 0xc + param_2;
      if (dVar15 < (double)*(float *)(iVar7 + 0x370)) {
        *(float *)(iVar7 + 0x370) = (float)((double)*(float *)(iVar7 + 0x370) - param_1);
      }
      if (dVar15 < (double)*(float *)(iVar7 + 0x374)) {
        *(float *)(iVar7 + 0x374) = (float)((double)*(float *)(iVar7 + 0x374) - param_1);
      }
      iVar6 = (iVar4 + 0x4a + iVar9) * 0xc;
      iVar7 = *(int *)(iVar6 + param_2);
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      *(int *)(iVar6 + param_2) = iVar8;
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = iVar4 + 7;
  } while (iVar4 < 0xe);
  if ((dVar15 < (double)*(float *)(param_2 + 0x1024)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x1024) - param_1),
     *(float *)(param_2 + 0x1024) = fVar1, (double)fVar1 <= dVar15)) {
    uVar2 = *(uint *)(param_2 + 0x1028);
    if (uVar2 == 0) {
      auStack_30[0] = *(undefined4 *)(param_2 + 0x1014);
    }
    else if (uVar2 == 1) {
      auStack_30[0] = *(undefined4 *)(param_2 + 0x1018);
    }
    else if (uVar2 < 3) {
      auStack_30[0] = *(undefined4 *)(param_2 + 0x101c);
    }
    else {
      if (uVar2 != 3) goto LAB_823c0bd0;
      auStack_30[0] = *(undefined4 *)(param_2 + 0x1020);
    }
    auStack_30[0] =
         fn_82535298(auStack_30,**(undefined4 **)(param_2 + 0xfe0),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(auStack_30);
  }
LAB_823c0bd0:
  iVar4 = 0x412;
  do {
    iVar9 = 0;
    lVar11 = 8;
    do {
      iVar7 = (iVar4 + iVar9) * 4;
      iVar9 = iVar9 + 1;
      dVar12 = (double)(float)((double)*(float *)(iVar7 + param_2) - param_1);
      dVar14 = -dVar12;
      dVar13 = dVar15;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar14 < dVar15) << 2) | (uint)(NAN(dVar14) || NAN(dVar15)) << 2)
                    ) < 0.0) {
        dVar13 = dVar12;
      }
      *(float *)(iVar7 + param_2) = (float)dVar13;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x422);
  fn_823D6410(*(undefined4 *)(param_2 + 0x4c4));
  fn_823DB428(param_1,*(undefined4 *)(param_2 + 0x4b0));
  pfVar10 = (float *)(param_2 + 0x136c);
  lVar11 = 3;
  do {
    pfVar3 = pfVar10 + 2;
    pfVar10 = pfVar10 + 2;
    *pfVar10 = (float)((double)*pfVar3 + param_1);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

