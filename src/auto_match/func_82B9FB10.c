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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82AB15D0();
extern int fn_82BBD158();
extern int fn_82BBD3B8();
extern int fn_82BBD698();
extern int fn_82BBD6D0();
extern int fn_82BBD838();
extern unsigned int lbl_821AAD20;


ulonglong fn_82B9FB10(float *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 auStack_90 [4];
  undefined4 auStack_80 [32];
  
  uVar3 = fn_82BBD158(param_3);
  if (uVar3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de31c,0xffffffff820de290,0x6c2);
  }
  if ((((*param_1 == lbl_821AAD20) && (param_1[1] == lbl_821AAD20)) && (param_1[2] == lbl_821AAD20))
     && (param_1[3] == lbl_821AAD20)) {
    uVar8 = 0;
LAB_82b9fcd4:
    *param_2 = uVar8;
  }
  else {
    lVar4 = fn_82BBD3B8(auStack_80,param_3);
    lVar5 = lVar4;
    if (lVar4 < 1) {
      lVar5 = fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de308,0xffffffff820de290,0x6d6);
    }
    if (0 < (int)lVar4) {
      iVar6 = (int)auStack_80 - (int)param_1;
      iVar2 = (int)auStack_90 - (int)param_1;
      do {
        lVar5 = fn_82BBD838((double)*param_1,lVar5,0x80,*(undefined4 *)(iVar6 + (int)param_1),
                                  param_4);
        *(int *)(iVar2 + (int)param_1) = (int)lVar5;
        lVar4 = lVar4 + -1;
        param_1 = param_1 + 1;
      } while (lVar4 != 0);
    }
    fn_82BBD6D0(auStack_90,param_3,param_6);
    iVar6 = fn_82BBD698(auStack_90,param_2,param_3,param_5);
    if (iVar6 < 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820de308,0xffffffff820de290,0x6e3);
    }
    if ((uVar3 & 0xffffffff) == 1) {
      bVar1 = (byte)*param_2;
      uVar7 = (uint)bVar1;
      *param_2 = (uint)bVar1;
      uVar8 = (uint)CONCAT21(CONCAT11(bVar1,bVar1),bVar1) << 8;
LAB_82b9fcd0:
      uVar8 = uVar8 | uVar7;
      goto LAB_82b9fcd4;
    }
    if ((uVar3 & 0xffffffff) == 2) {
      *(undefined2 *)param_2 = 0;
      uVar7 = *param_2;
      uVar8 = uVar7 << 0x10;
      goto LAB_82b9fcd0;
    }
    if ((uVar3 & 0xffffffff) != 4) {
      if ((uVar3 & 0xffffffff) != 8) {
        return uVar3;
      }
      uVar8 = *param_2;
      param_2[3] = param_2[1];
      goto LAB_82b9fce0;
    }
    uVar8 = *param_2;
  }
  param_2[3] = uVar8;
  param_2[1] = uVar8;
LAB_82b9fce0:
  param_2[2] = uVar8;
  return uVar3;
}

