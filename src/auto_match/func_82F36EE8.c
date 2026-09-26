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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82E59158();
extern int fn_82F68CC0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_78;
extern unsigned int uStack_7a;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82F36EE8(int param_1,int *param_2,int *param_3,ulonglong param_4,int *param_5,
                      undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  int aiStack_a0 [4];
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  uint uStack_80;
  ushort uStack_7c;
  ushort uStack_7a;
  undefined8 uStack_78;
  
  if ((((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_5 == (int *)0x0)) ||
     (param_6 == (undefined4 *)0x0)) {
    return -0x7ff8ffa9;
  }
  piVar6 = (int *)(param_1 + 0x74);
  *param_5 = 0;
  *param_6 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    return -0x3ff2c94e;
  }
  uStack_a8 = 0;
  uStack_a4 = 0;
  uVar7 = 0;
  lVar2 = (**(code **)(*param_3 + 0x14))(param_3,&uStack_a8,&uStack_a4);
  if (lVar2 < 0) goto LAB_82f36fac;
  if (((ulonglong)uStack_a8 == 0) || (uVar4 = (ulonglong)uStack_a4, uVar4 == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    if (uVar4 < (param_4 & 0xffffffff)) {
      lVar2 = -0x7ff8ffa9;
      goto LAB_82f36fac;
    }
    piVar1 = *(int **)(param_1 + 0x88);
    uVar4 = uVar4 - param_4;
    uStack_ac = 0;
    lVar8 = uStack_a8 + param_4;
    uStack_b0 = 0;
    if (piVar1 == (int *)0x0) {
      lVar2 = -0x7ff8fff2;
      goto LAB_82f36fac;
    }
    lVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&uStack_ac,&uStack_b0);
    if (lVar2 < 0) goto LAB_82f36fac;
    if ((ulonglong)uStack_ac == 0) {
      lVar2 = -0x7fff0001;
      goto LAB_82f36fac;
    }
    uVar5 = (ulonglong)uStack_b0;
    if ((uVar5 == 0) && (0x17 < (uVar4 & 0xffffffff))) {
      uStack_ac = (uint)lVar8;
    }
    else {
      uVar7 = 0x18 - uVar5;
      if ((uVar4 & 0xffffffff) < (0x18 - uVar5 & 0xffffffff)) {
        uVar7 = uVar4;
      }
      fn_82F68CC0(uVar5 + uStack_ac,lVar8,uVar7);
      uStack_b0 = (int)uVar7 + uStack_b0;
      lVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
      if (lVar2 < 0) goto LAB_82f36fac;
      if (uStack_b0 < 0x18) {
        lVar2 = 0x400d3a98;
        goto LAB_82f3725c;
      }
    }
    uStack_90 = lbl_8202E618;
    uStack_8c = lbl_8202E61C;
    uStack_88 = CONCAT44(lbl_8202E620,lbl_8202E624);
    fn_82F68CC0(&uStack_80,uStack_ac,0x10);
    uStack_90 = uStack_80 << 0x18 |
                (uStack_80 & 0xff00) << 8 | uStack_80 >> 8 & 0xff00 | uStack_80 >> 0x18;
    uStack_8c = CONCAT22(uStack_7c << 8 | uStack_7c >> 8,uStack_7a << 8 | uStack_7a >> 8);
    uStack_88 = uStack_78;
    iVar3 = (**(code **)(*param_2 + 0x1c))(param_2,&uStack_90,piVar6);
    if ((iVar3 < 0) &&
       (((iVar3 == -0x7ffbfeac || (iVar3 == -0x3ff2c92b)) &&
        (lVar2 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff821549c8,piVar6), lVar2 < 0))))
    goto LAB_82f36fac;
    piVar1 = *(int **)(param_1 + 0x88);
    aiStack_a0[0] = 0;
    if ((piVar1 != (int *)0x0) &&
       ((**(code **)(*piVar1 + 0x14))(piVar1,0,aiStack_a0), aiStack_a0[0] != 0)) {
      aiStack_a0[1] = 0;
      lVar2 = (**(code **)(*(int *)*piVar6 + 0x18))
                        ((int *)*piVar6,*(undefined4 *)(param_1 + 0x88),aiStack_a0 + 1);
      if (lVar2 < 0) goto LAB_82f36fac;
      (**(code **)(**(int **)(param_1 + 0x88) + 0xc))(*(int **)(param_1 + 0x88),0);
    }
    lVar2 = fn_82E59158(param_3,uVar7 + param_4,param_5);
    if (lVar2 < 0) goto LAB_82f36fac;
  }
  if (-1 < (int)lVar2) {
LAB_82f3725c:
    *param_6 = (int)uVar7;
    return lVar2;
  }
LAB_82f36fac:
  if ((int *)*param_5 != (int *)0x0) {
    (**(code **)(*(int *)*param_5 + 8))();
    *param_5 = 0;
  }
  if ((int *)*piVar6 != (int *)0x0) {
    (**(code **)(*(int *)*piVar6 + 8))();
    *piVar6 = 0;
  }
  return lVar2;
}

