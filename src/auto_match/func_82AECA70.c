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
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AEAB00();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B841E8();
extern int fn_82B84350();


void fn_82AECA70(int param_1,int param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined8 uVar9;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = *(uint **)(param_2 + 0x2c);
  puVar2 = *(uint **)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = puVar1[3];
  uVar5 = *(uint *)(param_2 + 8);
  if ((*(uint *)(param_1 + 0x2c) >> 7 & 1) == 0) {
    uVar17 = (ulonglong)(uVar5 >> 1) & 0xf;
  }
  else {
    uVar17 = (ulonglong)(uint)(1 << (uVar5 >> 0xe & 7)) - 1;
  }
  uVar14 = 0;
  if ((uVar17 & 0xffffffff) != 0) {
    bVar8 = true;
    if (uVar17 == (uVar17 & ~(uVar17 - 1))) goto LAB_82aecae8;
  }
  bVar8 = false;
LAB_82aecae8:
  if ((!bVar8) && ((uVar5 >> 5 & 1) == 0)) {
    uVar14 = fn_82B84350(param_1,uVar3,0,uVar5 >> 0xe & 7);
  }
  lVar15 = 0;
  for (; (uVar17 & 0xffffffff) != 0; uVar17 = uVar17 - uVar13) {
    uVar13 = uVar17 & ~(uVar17 - 1);
    uVar16 = 0x1f - LZCOUNT((int)uVar13);
    iVar10 = fn_82B841E8(param_1,uVar3,param_4,param_3,1,1);
    uVar5 = *puVar1;
    uVar7 = (uint)((uVar16 & 0xffffffff) << 1);
    uVar6 = *puVar2;
    puVar11 = (uint *)fn_82AD17B0(param_1,uVar4);
    *puVar11 = *puVar11 & 0xf1ffffff | 0x4000000;
    fn_82AD1270(puVar11,uVar5 & 0x1f);
    *puVar11 = (((uVar6 >> 5 & 0xff) >> (uVar7 & 0x3e) & 3) << 2 | 0xe0 |
               (uVar5 >> 5 & 0xff) >> (uVar7 & 0x3e) & 3) << 5 | *puVar11 & 0xfffffc1f;
    uVar12 = fn_82AD1978(iVar10,puVar11);
    *(undefined4 *)(iVar10 + 0x2c) = uVar12;
    uVar9 = fn_82B168F8(param_2,uVar16);
    fn_82B16998(iVar10,0,uVar9);
    fn_82AEAB00(param_1,iVar10,param_2,uVar14,lVar15,uVar16);
    lVar15 = lVar15 + 1;
  }
  if ((uVar14 & 0xffffffff) != 0) {
    uVar4 = (uint)uVar14 & 0xfffffffe;
    *(uint *)(uVar4 + 0x24) = *param_4;
    *(uint *)(*param_4 & 0xfffffffe) = uVar4;
    *(uint *)(uVar4 + 0x28) = (uint)(param_4 + -9) | 1;
    *param_4 = uVar4 + 0x28;
  }
  return;
}

