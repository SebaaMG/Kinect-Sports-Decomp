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
extern int fn_82ACA920();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AEAB00();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B841E8();
extern int fn_82B84350();


void fn_82AEC860(int param_1,int *param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  int iVar8;
  undefined8 uVar7;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  puVar1 = (uint *)param_2[0xb];
  uVar2 = param_2[2];
  uVar3 = puVar1[3];
  if ((*(uint *)(param_1 + 0x2c) >> 7 & 1) == 0) {
    uVar13 = (ulonglong)(uVar2 >> 1) & 0xf;
  }
  else {
    uVar13 = (ulonglong)(uint)(1 << (uVar2 >> 0xe & 7)) - 1;
  }
  iVar4 = param_2[7];
  uVar11 = 0;
  if ((uVar13 & 0xffffffff) != 0) {
    bVar6 = true;
    if (uVar13 == (uVar13 & ~(uVar13 - 1))) goto LAB_82aec8d4;
  }
  bVar6 = false;
LAB_82aec8d4:
  if ((!bVar6) && ((uVar2 >> 5 & 1) == 0)) {
    uVar11 = fn_82B84350(param_1,iVar4,0,
                               ((0x8da691691448U >> (uVar13 & 0x7f)) >> (uVar13 & 0x7f)) >>
                               (uVar13 & 0x7f) & 7);
  }
  lVar12 = 0;
  while ((uVar13 & 0xffffffff) != 0) {
    uVar10 = uVar13 & ~(uVar13 - 1);
    uVar13 = uVar13 - uVar10;
    uVar10 = 0x1f - LZCOUNT((int)uVar10);
    iVar8 = fn_82B841E8(param_1,iVar4,param_4,param_3,1,1);
    for (puVar5 = (uint *)*param_2; puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[1]) {
      if ((*puVar5 & 0xe000000) == 0) {
        uVar7 = fn_82ACA920(param_1,puVar5,puVar5[3]);
        fn_82AD1978(iVar8,uVar7);
      }
    }
    uVar2 = *puVar1;
    uVar7 = fn_82AD1918(param_1,uVar3,
                              (uVar2 >> 5 & 0xff) >> ((uint)((uVar10 & 0xffffffff) << 1) & 0x3e) & 3
                              ,uVar2 & 0x1f);
    uVar9 = fn_82AD1978(iVar8,uVar7);
    *(undefined4 *)(iVar8 + 0x2c) = uVar9;
    if ((param_2[2] & 1U) != 0) {
      *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 1;
    }
    uVar7 = fn_82B168F8(param_2,uVar10);
    fn_82B16998(iVar8,0,uVar7);
    fn_82AEAB00(param_1,iVar8,param_2,uVar11,lVar12,uVar10);
    lVar12 = lVar12 + 1;
  }
  if ((uVar11 & 0xffffffff) != 0) {
    uVar2 = (uint)uVar11 & 0xfffffffe;
    *(uint *)(uVar2 + 0x24) = *param_4;
    *(uint *)(*param_4 & 0xfffffffe) = uVar2;
    *(uint *)(uVar2 + 0x28) = (uint)(param_4 + -9) | 1;
    *param_4 = uVar2 + 0x28;
  }
  return;
}

