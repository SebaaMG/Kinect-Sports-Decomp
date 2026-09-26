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
extern unsigned int *auStack_308;
extern unsigned int *auStack_320;
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_3e8;
extern int fn_82897B18();
extern int fn_828EFFE0();
extern int fn_828F0088();
extern int fn_828F5BD0();
extern int fn_828F5C88();
extern int fn_828F6D60();
extern int fn_828F9A60();
extern int fn_828F9CB0();
extern int fn_82901E60();
extern int fn_82903DB8();
extern int fn_82917790();
extern int fn_82A9A8B8();
extern int fn_82A9DBD0();
extern int fn_82A9ED60();
extern int fn_82A9F348();
extern int fn_82A9F810();
extern int fn_82A9F8B0();
extern int fn_82EE8150();


/* WARNING: Removing unreachable block (ram,0x828f05cc) */

longlong fn_828F02F8(int *param_1,undefined8 param_2,int *param_3,ulonglong param_4,
                      undefined4 *param_5,ulonglong param_6,undefined4 *param_7,uint *param_8)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piStack_3ec;
  undefined1 auStack_3e8 [8];
  undefined1 auStack_3e0 [192];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [664];
  uint *puStack_70;
  
  piStack_3ec = (int *)0x0;
  fn_828F5BD0(auStack_320);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if ((param_8 != (uint *)0x0) && (param_8[5] != 0)) {
    lVar6 = -0x7789f794;
    goto LAB_828f05ac;
  }
  if (((param_4 & 0xfffffffffca1e1c0) == 0) && (*param_3 != 0)) {
    uVar5 = 0;
    if ((param_8 != (uint *)0x0) && ((*param_8 & 2) != 0)) {
      uVar5 = fn_82A9ED60();
      param_8[5] = (uint)uVar5;
      if (uVar5 == 0) {
        lVar6 = -0x7ff8fff2;
        goto LAB_828f0590;
      }
      fn_82A9A8B8(uVar5,0xffffffff82027a0c,0);
      iVar2 = (**(code **)(*param_1 + 8))(param_1);
      if (iVar2 != 0) {
        piVar3 = (int *)(**(code **)(*param_1 + 8))(param_1);
        iVar2 = *piVar3;
        while (iVar2 != 0) {
          fn_82A9F348(uVar5,iVar2,piVar3[1]);
          piVar3 = piVar3 + 2;
          iVar2 = *piVar3;
        }
      }
      fn_82A9DBD0(uVar5,param_4,param_8);
    }
    iVar2 = fn_828F0088(*param_3,param_4);
    *param_3 = iVar2;
    puStack_70 = param_8;
    lVar6 = (**(code **)(*param_1 + 4))(param_1,auStack_320);
    if (-1 < lVar6) {
      iVar2 = fn_828EFFE0(*param_3);
      if (iVar2 == 0) {
        uVar4 = 0xffffffff820279dc;
      }
      else {
        uVar4 = 0xffffffff820279ec;
      }
      fn_828F6D60(auStack_320,uVar4);
      fn_82901E60(auStack_3e0,0);
      lVar6 = fn_82917790(auStack_3e0,auStack_320,0,param_2,0,*param_3,param_4 | 0x100,
                                &piStack_3ec);
      if (lVar6 < 0) {
        fn_82903DB8(auStack_3e0);
      }
      else {
        fn_82903DB8(auStack_3e0);
        iVar2 = fn_82897B18(auStack_308);
        if (iVar2 == 0) {
          if ((uVar5 & 0xffffffff) != 0) {
            uVar4 = fn_82A9F810(uVar5);
            lVar6 = fn_828F9A60(uVar4,param_8 + 3);
            if (-1 < lVar6) {
              uVar1 = (**(code **)(*(int *)param_8[3] + 0xc))();
              lVar6 = fn_82A9F8B0(uVar5,uVar1,uVar4,auStack_3e8);
            }
          }
          piVar3 = piStack_3ec;
          if (param_5 != (undefined4 *)0x0) {
            piStack_3ec = (int *)0x0;
            *param_5 = piVar3;
          }
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = 0;
          }
        }
        else {
          lVar6 = -0x7789f4a7;
        }
      }
    }
  }
  else {
    lVar6 = -0x7789f794;
  }
LAB_828f0590:
  if ((param_8 != (uint *)0x0) && (param_8[5] != 0)) {
    fn_82EE8150();
    param_8[5] = 0;
  }
LAB_828f05ac:
  if ((param_6 & 0xffffffff) != 0) {
    fn_828F9CB0(auStack_308,param_6);
  }
  if (piStack_3ec != (int *)0x0) {
    (**(code **)(*piStack_3ec + 8))();
    piStack_3ec = (int *)0x0;
  }
  fn_828F5C88(auStack_320);
  return lVar6;
}

