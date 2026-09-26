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
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT26(h,l) ((U64)((((U16)(h)) << 48) | ((U64)(l))))
extern unsigned int *auStack_60;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829352D0();
extern int fn_82953BF0();
extern unsigned int uStack_58;


/* WARNING: Type propagation algorithm not settling */

uint fn_82958638(undefined8 param_1,int param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  if ((param_5 & 0xffffffff) == 0) {
    return 0;
  }
LAB_8295865c:
  uVar4 = (ushort)param_3;
  if (param_2 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_2 + 4);
  if (iVar6 == 1) {
    uStack_58 = 0;
    fn_82953BF0(param_2);
    uVar5 = (((U64)(uStack_58) >> 16) & 0xFFFF);
    uStack_58 = CONCAT26(uVar4,(((U64)(uStack_58) >> 16) & 0xFFFFFFFFFFFF));
    iVar6 = param_2;
    do {
      uVar5 = uVar5 + 1;
      uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFFFFFF) << 16))) | ((((U64)(CONCAT24(uVar5,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF)))) & ((U64)0xFFFFFFFFFFFF)) << 16));
      iVar6 = *(int *)(iVar6 + 0xc);
    } while (iVar6 != 0);
    lVar2 = fn_8265C940((ulonglong)uVar5 << 3,0x24810000);
    lVar7 = lVar2;
    if (lVar2 == 0) {
      return 0x8007000e;
    }
    do {
      iVar6 = *(int *)(*(int *)(param_2 + 8) + 0x18);
      uVar3 = fn_829352D0(param_1,*(undefined4 *)
                                         (*(int *)(*(int *)(param_2 + 8) + 0x14) + 0x18),
                                0xffffffffffffffff,7,lVar7,1);
      if (((int)uVar3 < 0) ||
         (uVar3 = fn_82958638(param_1,*(undefined4 *)(iVar6 + 0x30),1,param_4,lVar7 + 4),
         (int)uVar3 < 0)) {
        fn_8265C990(lVar2,0x24810000);
        return uVar3;
      }
      param_2 = *(int *)(param_2 + 0xc);
      lVar7 = lVar7 + 8;
    } while (param_2 != 0);
    uVar3 = fn_829352D0(param_1,lVar2,(uStack_58 >> 0x20 & 0xffff) << 3,2,(int)&uStack_58 + 4,
                              6);
    if ((int)uVar3 < 0) {
      fn_8265C990(lVar2,0x24810000);
      return uVar3;
    }
    fn_8265C990(lVar2,0x24810000);
  }
  else {
    if (iVar6 == 8) goto code_r0x82958678;
    if (iVar6 != 9) {
      return 0x80004005;
    }
    switch(*(undefined4 *)(param_2 + 0x14)) {
    case 0:
      goto code_r0x829587dc;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x16:
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      break;
    case 0x17:
      goto code_r0x829587dc;
    case 0x18:
      break;
    case 0x19:
      break;
    case 0x1b:
      break;
    case 0x1d:
      break;
    case 0x1e:
      break;
    case 0x21:
      if ((param_4 & 0x200000) != 0) goto code_r0x82958788;
      if ((param_4 & 0x400000) != 0) goto code_r0x82958798;
      break;
    case 0x22:
      break;
    case 0x23:
code_r0x82958788:
      break;
    case 0x24:
code_r0x82958798:
      break;
    case 0x25:
      break;
    case 0x2a:
      break;
    case 0x2b:
      break;
    case 0x2d:
      break;
    case 0x2e:;}
code_r0x829587dc:
    uStack_58 = (ulonglong)uVar4 << 0x30;
  }
  uVar3 = fn_829352D0(param_1,auStack_60,0x10,2,param_5,4);
  return (int)uVar3 >> 0x1f & uVar3;
code_r0x82958678:
  piVar1 = (int *)(param_2 + 0x14);
  param_2 = *(int *)(param_2 + 0x10);
  param_3 = *piVar1 * param_3;
  goto LAB_8295865c;
}

