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
extern unsigned int *auStack_250;
extern unsigned int *auStack_470;
extern int fn_82635A58();
extern int fn_82635A90();
extern int fn_82635AB8();
extern int fn_82635F08();
extern int fn_82635FE8();
extern int fn_826361D8();
extern int fn_82636230();
extern int fn_826362C0();
extern int fn_82636E10();
extern int fn_828F9A60();
extern int fn_828FA8D8();
extern int fn_828FAB00();
extern int fn_82936358();
extern int fn_82937A60();
extern int fn_8293C408();
extern int fn_8293DD48();
extern int fn_82A2A288();
extern int fn_82A9A238();
extern int fn_82A9EDA0();
extern int fn_82AA5540();
extern int fn_82AA7460();
extern int fn_82BA02A8();
extern int fn_82D7E470();
extern unsigned int iStack_454;
extern unsigned int uStack_460;


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_8293DE90(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piStack_480;
  int aiStack_47c [3];
  undefined1 auStack_470 [16];
  undefined4 uStack_460;
  undefined4 *puStack_45c;
  short sStack_458;
  int iStack_454;
  undefined1 auStack_250 [592];
  
  uVar2 = fn_8293DD48();
  if (-1 < (int)uVar2) {
    if ((param_1[0x18] & 0x40) != 0) {
      if (param_1[0x4d] == 0) {
        fn_82937A60(param_1,0xffffffff82033f80);
        return 0xffffffff88760b59;
      }
      fn_8293C408(param_1,1);
      fn_82635A58();
    }
    iVar1 = param_1[0x4f];
    if (iVar1 != 0) {
      uVar3 = fn_82BA02A8(iVar1);
      uVar4 = fn_8293C408(param_1,1);
      fn_82635AB8(uVar4,uVar3);
    }
    fn_8293C408(param_1,1);
    fn_826361D8();
    if (param_1[0x51] != 0) {
      fn_8293C408(param_1,1);
      lVar5 = fn_82635FE8();
      fn_82A9A238(param_1[0x4f],(lVar5 + 1U & 0xffffffff) >> 1);
    }
    if (param_1[0x51] != 0) {
      if (param_3[2] != 0) {
        fn_82A2A288(0xfde9,0,param_3[2],0xffffffffffffffff,auStack_250,0x104);
        uVar3 = fn_8293C408(param_1,1);
        fn_82635F08(uVar3,param_3[1],param_3[2]);
      }
      fn_82A9EDA0(param_1[0x4f],auStack_470);
      uVar3 = fn_8293C408(param_1,1);
      fn_82635A90(uVar3,auStack_470);
    }
    fn_8293C408(param_1,1);
    uVar3 = fn_82636230();
    uVar2 = fn_828F9A60(uVar3,&piStack_480);
    if (-1 < (int)uVar2) {
      aiStack_47c[1] = 0;
      uVar3 = fn_8293C408(param_1,1);
      uVar4 = (**(code **)(*piStack_480 + 0x10))(piStack_480);
      uVar6 = (**(code **)(*piStack_480 + 0xc))(piStack_480);
      uVar2 = fn_826362C0(uVar3,uVar6,uVar4,aiStack_47c + 1);
      if (-1 < (longlong)uVar2) {
        if (iVar1 != 0) {
          uVar3 = (**(code **)(*piStack_480 + 0xc))();
          fn_82636E10(uVar3,iVar1,0xffffffff82a9ee10);
        }
        if (((param_3 != (uint *)0x0) && ((*param_3 & 4) != 0)) &&
           (uVar2 = fn_82AA7460(param_1[0xc],piStack_480,param_1[0x19],param_2,param_1,
                                    0xffffffff829361e8,param_3), uVar2 == 0)) {
          (**(code **)(*piStack_480 + 8))();
          return 0;
        }
      }
      if ((uVar2 & 0xffffffff) == 0x88760b81) {
        fn_82937A60(param_1,0xffffffff82033f30);
        uVar2 = 0xffffffff80004005;
      }
      *param_2 = piStack_480;
      if ((-1 < (int)uVar2) && ((param_1[0x19] & 2) == 0)) {
        uVar7 = 0;
        aiStack_47c[0] = 0;
        if (param_3 != (uint *)0x0) {
          uVar7 = (param_3[4] & 0x7f) << 10;
        }
        if ((param_1[0x19] & 0x80000) != 0) {
          uVar7 = uVar7 | 0x40000;
        }
        uVar3 = (**(code **)(*piStack_480 + 0x10))();
        uVar4 = (**(code **)(*piStack_480 + 0xc))(piStack_480);
        uVar2 = fn_82D7E470(uVar4,uVar3,uVar7,0,0xffffffff82aa0550,aiStack_47c);
        if (((longlong)uVar2 < 0) || (aiStack_47c[0] != 0)) {
          uStack_460 = *param_1;
          puStack_45c = param_1 + 4;
          iStack_454 = -((int)uVar2 >> 0x1f);
          sStack_458 = 0;
          if ((int)uVar2 < 0) {
            uVar3 = 0xffffffff82033f00;
          }
          else {
            uVar3 = 0xffffffff82033ecc;
          }
          if (iStack_454 == 0) {
            fn_828FAB00(uStack_460,puStack_45c,0x1bbe,0xffffffff821c4da8,uVar3);
          }
          else {
            fn_828FA8D8(uStack_460,puStack_45c,0x1bbd);
          }
          uVar3 = (**(code **)(*piStack_480 + 0x10))();
          uVar4 = (**(code **)(*piStack_480 + 0xc))(piStack_480);
          fn_82D7E470(uVar4,uVar3,uVar7,0,0xffffffff82936440,&uStack_460);
          if (sStack_458 != 0) {
            fn_82936358(&uStack_460);
          }
          uVar3 = (**(code **)(*piStack_480 + 0x10))();
          uVar4 = (**(code **)(*piStack_480 + 0xc))(piStack_480);
          fn_82AA5540(uVar4,uVar3,0x44,0xffffffff82936440,&uStack_460,0,0);
          if (sStack_458 != 0) {
            fn_82936358(&uStack_460);
          }
        }
      }
    }
  }
  return uVar2;
}

