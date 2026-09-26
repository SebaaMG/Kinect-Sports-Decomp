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
extern unsigned int *auStack_40;
extern unsigned int *auStack_54;
extern int fn_82E6FDA0();
extern int fn_82E6FE08();
extern int fn_82E71CC8();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82E72098(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  int *piStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint auStack_54 [3];
  ulonglong uStack_48;
  undefined8 auStack_40 [8];
  
  if (*(longlong *)(param_1 + 0x12) == 0) {
    fn_82E6FE08();
  }
  if (*(ulonglong *)(param_1 + 0x12) < param_2) {
    return -0x3ff2c94e;
  }
  piStack_60 = (int *)0x0;
  uStack_5c = 0;
  lVar1 = (**(code **)(*param_1 + 8))(param_1,&uStack_5c);
  if (lVar1 < 0) goto LAB_82e72308;
  iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x48))
                    ((int *)param_1[0x16],uStack_5c * param_2,&piStack_60,0);
  if (iVar3 < 0) {
    uStack_58 = 0;
    lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x3c))((int *)param_1[0x16],&uStack_58);
    if (lVar1 < 0) goto LAB_82e72308;
    if ((ulonglong)uStack_58 == 0) {
      lVar1 = fn_82E71CC8(param_1,&piStack_60);
    }
    else {
      lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x40))
                        ((int *)param_1[0x16],(ulonglong)uStack_58 - 1,&piStack_60);
    }
    if (lVar1 < 0) goto LAB_82e72308;
  }
  uStack_48 = 0;
  lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x50))((int *)param_1[0x16],piStack_60,&uStack_48);
  if (-1 < lVar1) {
    if (param_2 - uStack_48 < 0xffffffff) {
      uVar4 = (param_2 & 0xffffffff) - (uStack_48 & 0xffffffff);
      if ((ulonglong)(uint)param_1[0x18] <= (uVar4 & 0xffffffff)) {
        if (piStack_60 != (int *)0x0) {
          (**(code **)(*piStack_60 + 8))();
          piStack_60 = (int *)0x0;
        }
        lVar1 = fn_82E71CC8(param_1,&piStack_60);
        if (lVar1 < 0) goto LAB_82e72308;
        uVar4 = uVar4 - (uint)param_1[0x18];
      }
      if (((uVar4 & 0xffffffff) != 0) || (lVar1 = fn_82E6FDA0(param_1,piStack_60), -1 < lVar1)) {
        auStack_54[0] = 0;
        lVar1 = (**(code **)(*piStack_60 + 0x24))(piStack_60,auStack_54);
        if ((-1 < lVar1) &&
           (((uVar4 & 0xffffffff) < (ulonglong)auStack_54[0] ||
            (lVar1 = (**(code **)(*piStack_60 + 0x38))(piStack_60,uVar4 + 1), -1 < lVar1)))) {
          auStack_40[0] = 0;
          iVar3 = *piStack_60;
          uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
          lVar1 = (**(code **)(iVar3 + 0x20))
                            (piStack_60,*(undefined2 *)(param_1 + 2),uVar2,auStack_40);
          if (-1 < lVar1) {
            auStack_54[1] = 0;
            lVar1 = (**(code **)(*param_1 + 0x3c))(param_1,param_2,auStack_40[0],auStack_54 + 1);
          }
        }
      }
    }
    else {
      lVar1 = -0x3ff2c945;
    }
  }
LAB_82e72308:
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 8))();
  }
  if (*(ulonglong *)(param_1 + 0x12) <= param_2) {
    *(ulonglong *)(param_1 + 0x12) = *(ulonglong *)(param_1 + 0x12) + 1;
  }
  return lVar1;
}

