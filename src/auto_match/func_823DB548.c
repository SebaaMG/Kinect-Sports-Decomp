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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82672C20();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();


void fn_823DB548(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float in_vr2;
  
  iVar4 = fn_82F6A548();
  dVar10 = (double)lbl_821CC160;
  if ((dVar10 < extraout_f1) || (iVar8 = 1, (double)(float)(param_2 + param_3) <= dVar10)) {
    iVar8 = 0;
  }
  dVar9 = extraout_f1;
  if ((((*(int *)(iVar4 + 0x30) != 0) && (iVar8 == 0)) &&
      (iVar7 = *(int *)(iVar4 + 0x54), *(int *)(iVar7 + 0x34) != 0)) &&
     (*(int *)(iVar7 + 0x38) == 0)) {
    *(undefined4 *)(iVar7 + 0x38) = 1;
    fn_82672C20(*(undefined4 *)(iVar7 + 0x3c),0xffffffff821a8498,0,0);
  }
  *(int *)(iVar4 + 0x30) = iVar8;
  puVar2 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  uVar1 = lbl_821CA460;
  loadVectorLeftIndexed128(0xffffffff821954b0,0x4f0);
  *(float *)(iVar4 + 0x34) = (float)dVar10;
  *(undefined4 *)(iVar4 + 0x38) = uVar1;
  *(float *)(iVar4 + 0x3c) = (float)param_3;
  *(float *)(iVar4 + 0x40) = (float)dVar9;
  *(float *)(iVar4 + 0x44) = (float)param_2;
  *(float *)(iVar4 + 0x48) = (float)param_3;
  pfVar3 = (float *)(iVar4 + 0x20U & 0xfffffff0);
  *pfVar3 = in_register_00010020 * in_register_00010000;
  pfVar3[1] = in_register_00010024 * in_ACC;
  pfVar3[2] = in_register_00010028 * in_register_00010008;
  pfVar3[3] = in_vr2 * in_vr0;
  iVar8 = param_5[1];
  uVar1 = *param_5;
  uVar6 = 0;
  iVar7 = 0;
  if ((iVar8 != 0) && (cVar5 = fn_8223AAC0(iVar8), cVar5 != '\0')) {
    uVar6 = uVar1;
    iVar7 = iVar8;
  }
  iVar8 = *(int *)(iVar4 + 0x50);
  *(int *)(iVar4 + 0x50) = iVar7;
  *(undefined4 *)(iVar4 + 0x4c) = uVar6;
  if (iVar8 != 0) {
    fn_822315A0();
  }
  fn_82F6A594();
  return;
}

