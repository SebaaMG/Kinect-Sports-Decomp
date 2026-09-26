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
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82539560();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_8306E888();
extern int fn_8306E890();
extern int fn_8306E920();
extern int fn_8306EC70();
extern int fn_8306ECC8();
extern int fn_8306ECD8();
extern int fn_8306ECF8();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_8306EE38();
extern int fn_830760D0();
extern int fn_830763C8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82186E78;
extern unsigned int lbl_821AAD20;


void fn_8307A2B0(undefined8 param_1,ulonglong param_2,int param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 in_vs32 [16];
  undefined1 in_vs61 [16];
  float in_register_00010010;
  undefined4 uVar12;
  float in_register_00010014;
  undefined4 uVar13;
  float in_register_00010018;
  undefined4 uVar14;
  float in_vr1;
  undefined4 uVar15;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float in_vr2;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  uVar3 = fn_82F6A540();
  in_register_00010010 = in_register_00010010 - in_register_00010020;
  in_register_00010014 = in_register_00010014 - in_register_00010024;
  in_register_00010018 = in_register_00010018 - in_register_00010028;
  in_vr1 = in_vr1 - in_vr2;
  fn_8306EDB0();
  altv207_13(in_vs32,in_vs61);
  pfVar1 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
  *pfVar1 = in_register_00010010;
  pfVar1[1] = in_register_00010014;
  pfVar1[2] = in_register_00010018;
  pfVar1[3] = in_vr1;
  dVar4 = (double)fn_8306EE38();
  fn_8306EDB0();
  uVar5 = fn_8306ED98();
  dVar9 = (double)lbl_82002C5C;
  uVar6 = fn_8306E920(dVar9);
  dVar10 = (double)lbl_82057B54;
  uVar7 = fn_8306E920(dVar10);
  dVar11 = (double)lbl_821AAD20;
  dVar8 = (double)fn_82539560(uVar5,uVar7,uVar6,dVar11,(double)lbl_820288E4);
  if (dVar8 <= dVar11) {
    uVar3 = 0;
  }
  else {
    uVar5 = fn_8306E888((double)fStack_90);
    uVar5 = fn_82539560(uVar5,dVar9,dVar10,dVar11,(double)lbl_82002AE0);
    if ((param_2 & 0xff) == 0) {
      fn_8306ECF8();
    }
    else {
      fn_8306ECC8();
    }
    pfVar1 = (float *)((int)&fStack_90 + in_r0 & 0xfffffff0);
    *pfVar1 = in_register_00010010;
    pfVar1[1] = in_register_00010014;
    pfVar1[2] = in_register_00010018;
    pfVar1[3] = in_vr1;
    fn_8306ECD8();
    fn_8306EC70(uVar5);
    if ((param_2 & 0xff) == 0) {
      dVar10 = (double)lbl_82186E78;
    }
    fn_830763C8(dVar10);
    fn_830760D0();
    fStack_84 = (float)dVar4;
    fStack_88 = (float)dVar4;
    fStack_8c = (float)dVar4;
    fStack_90 = (float)dVar4;
    fn_8306E890(dVar8,uVar3);
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    fn_8306EC70();
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2[2] = uVar14;
    puVar2[3] = uVar15;
    uVar3 = 1;
  }
  fn_82F6A58C(uVar3);
  return;
}

