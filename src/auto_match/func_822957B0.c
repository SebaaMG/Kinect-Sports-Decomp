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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_ce;
extern int fn_82295AD0();
extern int fn_82F64020();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195AF0;
extern unsigned int lbl_82195AF8;
extern unsigned int lbl_82195B00;
extern unsigned int lbl_82195B08;
extern unsigned int uStack_cf;
extern unsigned int uStack_d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_822957B0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 auStack_ce [14];
  undefined1 auStack_c0 [192];
  
  lVar3 = *(longlong *)(param_5 + 0x18);
  if ((lVar3 < 1) && ((*(uint *)(param_5 + 0x14) & 0x2000) == 0)) {
    lVar3 = 6;
  }
  iVar4 = 0x24;
  if (lVar3 < 0x25) {
    iVar4 = (int)lVar3;
  }
  uVar1 = *(uint *)(param_5 + 0x14);
  uVar6 = 0;
  lVar3 = lVar3 - iVar4;
  uVar7 = 0;
  if ((uVar1 & 0x3000) == 0x2000) {
    bVar8 = param_1 < lbl_82195518;
    if (bVar8) {
      param_1 = -param_1;
    }
    for (; (lbl_82195AF0 <= param_1 && ((uVar6 & 0xffffffff) < 5000)); uVar6 = uVar6 + 10) {
      param_1 = param_1 * lbl_82195AF8;
    }
    if (lbl_82195518 < param_1) {
      for (; ((9 < lVar3 && (param_1 <= lbl_82195B00)) && ((uVar7 & 0xffffffff) < 5000));
          uVar7 = uVar7 + 10) {
        lVar3 = lVar3 + -10;
        param_1 = param_1 * lbl_82195B08;
      }
    }
    if (bVar8) {
      param_1 = -param_1;
    }
  }
  puVar5 = &uStack_cf;
  uStack_d0 = 0x25;
  if ((uVar1 & 0x20) != 0) {
    puVar5 = auStack_ce;
    uStack_cf = 0x2b;
  }
  if ((uVar1 & 0x10) != 0) {
    *puVar5 = 0x23;
    puVar5 = puVar5 + 1;
  }
  *puVar5 = 0x2e;
  puVar5[1] = 0x2a;
  uVar1 = uVar1 & 0x3000;
  puVar5[2] = 0x4c;
  if (uVar1 == 0x2000) {
    uVar2 = 0x66;
  }
  else if (uVar1 == 0x3000) {
    uVar2 = 0x61;
  }
  else {
    uVar2 = 0x65;
    if (uVar1 != 0x1000) {
      uVar2 = 0x67;
    }
  }
  puVar5[3] = uVar2;
  puVar5[4] = 0;
  fn_82F64020(auStack_c0,0x6c,&uStack_d0,iVar4,param_1);
  fn_82295AD0(param_2,param_3,param_4,param_5,param_6,auStack_c0,uVar6,uVar7);
  return param_2;
}

