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
extern int fn_82AC9F80();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AEAB00();
extern int fn_82AEB480();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B841E8();
extern int fn_82B84350();
extern unsigned int uStack_b0;


void fn_82AECC50(int param_1,int param_2,undefined8 param_3,uint *param_4,char param_5)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uStack_b0;
  
  puVar1 = *(uint **)(param_2 + 0x2c);
  puVar2 = *(uint **)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = puVar1[3];
  uVar5 = puVar2[3];
  uVar6 = *(uint *)(param_2 + 8);
  if ((*(uint *)(param_1 + 0x2c) >> 7 & 1) == 0) {
    uVar19 = (ulonglong)(uVar6 >> 1) & 0xf;
  }
  else {
    uVar19 = (ulonglong)(uint)(1 << (uVar6 >> 0xe & 7)) - 1;
  }
  uStack_b0 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    bVar9 = true;
    if (uVar19 == (uVar19 & ~(uVar19 - 1))) goto LAB_82aeccd8;
  }
  bVar9 = false;
LAB_82aeccd8:
  if ((!bVar9) && ((uVar6 >> 5 & 1) == 0)) {
    uStack_b0 = fn_82B84350(param_1,uVar3,0,
                                  ((0x8da691691448U >> (uVar19 & 0x7f)) >> (uVar19 & 0x7f)) >>
                                  (uVar19 & 0x7f) & 7);
  }
  lVar17 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    do {
      uVar16 = uVar19 & ~(uVar19 - 1);
      uVar19 = uVar19 - uVar16;
      uVar18 = 0x1f - LZCOUNT((int)uVar16);
      uVar12 = fn_82B841E8(param_1,uVar3,0,param_3,1,1);
      uVar6 = *puVar1;
      uVar7 = (uint)((uVar18 & 0xffffffff) << 1);
      uVar16 = (ulonglong)((uVar6 >> 5 & 0xff) >> (uVar7 & 0x3e));
      puVar13 = (uint *)fn_82AD17B0(param_1,uVar4);
      *puVar13 = *puVar13 & 0xf1ffffff | 0x4000000;
      fn_82AD1270(puVar13,uVar6 & 0x1f);
      *puVar13 = (uint)(((uVar16 & 3) << 2 | 0xe0 | uVar16 & 3) << 5) | *puVar13 & 0xfffffc1f;
      uVar10 = fn_82AEB480(param_1,uVar3,param_4,puVar13);
      fn_82AEAB00(param_1,uVar10,param_2,0,0,4);
      uVar6 = *puVar2;
      uVar8 = (ulonglong)((uVar6 >> 5 & 0xff) >> (uVar7 & 0x3e));
      uVar16 = uVar8 & 3;
      if (param_5 == '\0') {
        puVar13 = (uint *)fn_82AD17B0(param_1,uVar5);
        *puVar13 = *puVar13 & 0xf1ffffff | 0x4000000;
        fn_82AD1270(puVar13,uVar6 & 0x1f);
        *puVar13 = (uint)(((uVar8 & 3) << 2 | 0xe0 | uVar16) << 5) | *puVar13 & 0xfffffc1f;
        uVar11 = fn_82AEB480(param_1,uVar3,param_4,puVar13);
        fn_82AEAB00(param_1,uVar11,param_2,0,0,4);
        iVar14 = fn_82B84350(param_1,uVar3,param_4,2);
        uVar10 = fn_82AD17B0(param_1,uVar10);
        uVar15 = fn_82AD1978(iVar14,uVar10);
        *(undefined4 *)(iVar14 + 0x2c) = uVar15;
        uVar10 = fn_82AD17B0(param_1,uVar11);
        uVar15 = fn_82AD1978(iVar14,uVar10);
        *(undefined4 *)(iVar14 + 0x30) = uVar15;
        puVar13 = (uint *)fn_82AD17B0(param_1,iVar14);
        *puVar13 = *puVar13 & 0xf1ffffff | 0x4000000;
        fn_82AD1270(puVar13,0);
        *puVar13 = *puVar13 & 0xffffe01f | 0x1c80;
      }
      else {
        uVar10 = fn_82AC9F80(param_1,uVar10,6);
        fn_82AD1978(uVar12,uVar10);
        puVar13 = (uint *)fn_82AD1918(param_1,uVar5,uVar16,*puVar2 & 0x1f);
      }
      uVar6 = uVar12 & 0xfffffffe;
      *(uint *)(uVar6 + 0x24) = *param_4;
      *(uint *)(*param_4 & 0xfffffffe) = uVar6;
      *(uint *)(uVar6 + 0x28) = (uint)(param_4 + -9) | 1;
      *param_4 = uVar6 + 0x28;
      uVar15 = fn_82AD1978(uVar12,puVar13);
      *(undefined4 *)(uVar12 + 0x2c) = uVar15;
      if ((*(uint *)(param_2 + 8) & 1) != 0) {
        *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 1;
      }
      uVar10 = fn_82B168F8(param_2,uVar18);
      fn_82B16998(uVar12,0,uVar10);
      fn_82AEAB00(param_1,uVar12,param_2,uStack_b0,lVar17,uVar18);
      lVar17 = lVar17 + 1;
    } while ((uVar19 & 0xffffffff) != 0);
  }
  if (uStack_b0 != 0) {
    uStack_b0 = uStack_b0 & 0xfffffffe;
    *(uint *)(uStack_b0 + 0x24) = *param_4;
    *(uint *)(*param_4 & 0xfffffffe) = uStack_b0;
    *(uint *)(uStack_b0 + 0x28) = (uint)(param_4 + -9) | 1;
    *param_4 = uStack_b0 + 0x28;
  }
  return;
}

