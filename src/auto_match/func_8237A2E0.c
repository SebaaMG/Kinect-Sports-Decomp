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
extern unsigned int *auStack_90;
extern unsigned int fStack_70;
extern int fn_822AA770();
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_822CF9D8();
extern int fn_82384CA0();
extern int fn_82385168();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1BD0;
extern unsigned int lbl_831D1BD8;
extern unsigned int lbl_831D1BDC;
extern unsigned int lbl_831D1BF4;
extern unsigned int lbl_831D1BF8;
extern unsigned int lbl_83265A28;


int fn_8237A2E0(double param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,int param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_90 [16];
  float afStack_80 [4];
  float fStack_70;
  
  if ((param_8 == 0) || (bVar3 = true, *(int *)(param_8 + 0x24) == 0)) {
    bVar3 = false;
  }
  fn_82385168(param_1,*(undefined4 *)(param_3 + 0x20d0),param_4,param_4,param_6,param_6,
                    auStack_90,!bVar3,param_8);
  if ((param_1 <= (double)lbl_821CC160) ||
     (((iVar5 = (int)param_4, iVar5 != 0xb && (iVar5 != 10)) && (iVar5 != 0)))) goto LAB_8237a564;
  iVar6 = 0;
  dVar12 = (double)lbl_821CA460;
  dVar9 = dVar12;
  if (((((param_8 != 0) && (!bVar3)) &&
       (*(uint *)(param_8 + 0x2a4) != (uint)LZCOUNT((int)param_6) >> 5)) &&
      ((iVar6 = 0, iVar4 = fn_822CEE40(param_8), iVar4 != 0 &&
       (iVar4 = fn_822CEFA0(), iVar4 != 0)))) && ((iVar5 == 0xb || (iVar5 == 10)))) {
    iVar6 = 1;
  }
  pfVar7 = (float *)&lbl_831D1BD0;
  if (iVar5 == 0) {
    if (bVar3) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      dVar9 = (double)((lbl_831D1BF8 - lbl_831D1BF4) *
                       (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar12) +
                      lbl_831D1BF4);
    }
    else {
      dVar9 = (double)lbl_831D1BDC;
    }
  }
  else if (iVar5 == 10) {
    if (bVar3) {
      pfVar7 = (float *)&lbl_831D1BD0;
      dVar10 = (double)fn_822CF9D8(param_9,3);
      dVar9 = (double)pfVar7[5];
      dVar11 = (double)pfVar7[6];
    }
    else {
      pfVar7 = (float *)&lbl_831D1BD0;
      dVar10 = (double)fn_822CF9D8(param_8,0);
      dVar9 = (double)pfVar7[1];
      dVar11 = (double)*pfVar7;
    }
LAB_8237a45c:
    dVar9 = (double)(float)(dVar10 * (double)(float)(dVar11 - dVar9) + dVar9);
  }
  else if (iVar5 == 0xb) {
    if (bVar3) {
      pfVar7 = (float *)&lbl_831D1BD0;
      dVar10 = (double)fn_822CF9D8(param_9,3);
      dVar9 = (double)pfVar7[7];
      dVar11 = (double)pfVar7[8];
      goto LAB_8237a45c;
    }
    dVar9 = (double)lbl_831D1BD8;
  }
  if (iVar6 != 0) {
    dVar9 = (double)(float)((double)pfVar7[4] * dVar9);
  }
  dVar10 = dVar9;
  if ((((param_8 != 0) && (param_9 != 0)) &&
      (iVar5 = fn_822AA770(*(undefined4 *)(param_8 + 0x1c)), dVar10 = dVar9, iVar5 == 0)) &&
     (*(int *)(param_9 + 0x24) == 0)) {
    dVar10 = (double)fn_822CF9D8(param_9,2);
    if (dVar10 <= (double)lbl_82191FB0) {
      lVar8 = 1;
      if (dVar10 <= (double)lbl_82193D04) {
        lVar8 = 2;
      }
    }
    else {
      lVar8 = 0;
    }
    dVar10 = dVar12;
    if ((lVar8 != 0) && (dVar10 = dVar9, lVar8 == 1)) {
      dVar10 = (double)(float)(dVar9 * (double)lbl_8218E8E8);
    }
  }
  afStack_80[0] =
       (float)((double)(float)((double)afStack_80[0] - (double)fStack_70) * dVar10 +
              (double)fStack_70);
LAB_8237a564:
  fn_82384CA0(*(undefined4 *)(param_3 + 0x20d0),auStack_90,0);
  puVar1 = (undefined4 *)((int)afStack_80 + in_r0 & 0xfffffff0);
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  return param_2;
}

