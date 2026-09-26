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
extern unsigned int *auStack_300;
extern unsigned int *auStack_310;
extern unsigned int *auStack_330;
extern unsigned int fStack_1d0;
extern unsigned int fStack_320;
extern int fn_822315A0();
extern int fn_823116D8();
extern int fn_823A9A98();
extern int fn_823ADF20();
extern int fn_823AE180();
extern int fn_823AF468();
extern int fn_823B0C20();
extern unsigned int iStack_174;
extern unsigned int iStack_1ec;
extern unsigned int iStack_1f4;
extern unsigned int iStack_1fc;
extern unsigned int lbl_82193A34;
extern unsigned int lbl_821CC160;


undefined4 ** fn_823AF8F8(undefined4 **param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 in_r0;
  int *piVar9;
  int iVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puStack_340;
  undefined4 *puStack_33c;
  undefined1 auStack_330 [16];
  float fStack_320;
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [260];
  int iStack_1fc;
  int iStack_1f4;
  int iStack_1ec;
  float fStack_1d0;
  int iStack_174;
  
  fn_823A9A98(&puStack_340);
  puVar5 = puStack_340;
  piVar2 = *(int **)(param_2 + 0x2b4);
  if ((piVar2 == (int *)0x0) || (*(int *)(param_2 + 700) == 0)) {
    fn_823AF468(auStack_310,param_2);
    fn_823B0C20(auStack_310,1);
    while (((iStack_1fc == 0 || (iStack_174 != 0)) && (iStack_1f4 == 0))) {
      if (iStack_1ec != 0) goto LAB_823afa3c;
      fn_823AE180((double)lbl_82193A34,auStack_310);
    }
    if (iStack_1ec == 0) {
      uVar4 = *puVar5;
      puVar6 = (undefined4 *)((uint)(auStack_300 + (int)in_r0) & 0xfffffff0);
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(auStack_330 + (int)in_r0) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar13;
      puVar7[3] = uVar14;
      fStack_320 = fStack_1d0;
      fn_823116D8(uVar4,auStack_330);
      goto LAB_823afaac;
    }
LAB_823afa3c:
    *param_1 = (undefined4 *)0x0;
    param_1[1] = (undefined4 *)0x0;
    puVar5 = puStack_33c;
    if (param_1 != &puStack_340) {
      puVar5 = param_1[1];
      param_1[1] = puStack_33c;
      *param_1 = puStack_340;
    }
    fn_823ADF20(auStack_310);
    puStack_33c = puVar5;
    goto joined_r0x823afb3c;
  }
  bVar8 = *(int *)(param_2 + 0x180) == 0;
  for (piVar9 = *(int **)piVar2[2]; piVar9 != (int *)((undefined4 *)piVar2[2])[1];
      piVar9 = piVar9 + 3) {
    if (*piVar9 == 0) {
      if (bVar8) {
        dVar11 = (double)(float)piVar9[1];
        if ((double)lbl_821CC160 < dVar11) {
          iVar3 = ((int *)*piVar2)[1];
          for (iVar10 = *(int *)*piVar2; iVar10 != iVar3; iVar10 = iVar10 + 0x20) {
            fVar1 = *(float *)(iVar10 + 0x10);
            if (dVar11 <= (double)fVar1) {
              puVar6 = (undefined4 *)((int)in_r0 + iVar10 & 0xfffffff0);
              uVar12 = puVar6[1];
              uVar13 = puVar6[2];
              uVar14 = puVar6[3];
              uVar4 = *puStack_340;
              puVar7 = (undefined4 *)((uint)(auStack_330 + (int)in_r0) & 0xfffffff0);
              *puVar7 = *puVar6;
              puVar7[1] = uVar12;
              puVar7[2] = uVar13;
              puVar7[3] = uVar14;
              fStack_320 = fVar1;
              fn_823116D8(uVar4,auStack_330);
            }
          }
        }
        break;
      }
      bVar8 = true;
    }
  }
  goto LAB_823afb08;
  while (iStack_1ec == 0) {
LAB_823afaac:
    fn_823AE180((double)lbl_82193A34,auStack_310);
    uVar4 = *puVar5;
    puVar6 = (undefined4 *)((uint)(auStack_300 + (int)in_r0) & 0xfffffff0);
    uVar12 = puVar6[1];
    uVar13 = puVar6[2];
    uVar14 = puVar6[3];
    puVar7 = (undefined4 *)((uint)(auStack_330 + (int)in_r0) & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar12;
    puVar7[2] = uVar13;
    puVar7[3] = uVar14;
    fStack_320 = fStack_1d0;
    fn_823116D8(uVar4,auStack_330);
    if ((iStack_1fc != 0) || (iStack_1f4 != 0)) break;
  }
  fn_823ADF20(auStack_310);
LAB_823afb08:
  *param_1 = (undefined4 *)0x0;
  param_1[1] = (undefined4 *)0x0;
  if (param_1 != &puStack_340) {
    puVar6 = param_1[1];
    param_1[1] = puStack_33c;
    *param_1 = puVar5;
    puStack_33c = puVar6;
  }
joined_r0x823afb3c:
  if (puStack_33c != (undefined4 *)0x0) {
    fn_822315A0(puStack_33c);
  }
  return param_1;
}

