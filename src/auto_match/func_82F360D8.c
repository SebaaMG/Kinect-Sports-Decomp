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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82E50BE8();
extern int fn_82F35128();
extern int fn_82F35400();
extern int fn_82F48950();
extern unsigned int lbl_82162AD0;
extern unsigned int lbl_821631DC;
extern unsigned int uStack_50;


ulonglong fn_82F360D8(int *param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uStack_50;
  int *piStack_4c;
  undefined4 *apuStack_48 [18];
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if (((ulonglong)(uint)param_1[0x4f] <= (param_2 & 0xffffffff)) || (param_3 == (int *)0x0)) {
    return 0xffffffff80070057;
  }
  piVar4 = param_1 + 0x17;
  *param_3 = 0;
  uStack_50 = 0;
  piStack_4c = (int *)0x0;
  piVar3 = (int *)0x0;
  uVar1 = fn_82F35400(piVar4,param_2,apuStack_48);
  if ((((uVar1 & 0xffffffff) >> 0x1f) - 1 & ZEXT48(apuStack_48[0])) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (iVar2 == 0) {
      uVar1 = fn_82E50BE8(0x60,0,0,0,0);
      if ((uVar1 & 0xffffffff) == 0) goto LAB_82f361c4;
      piVar3 = (int *)fn_82F48950(uVar1,param_1,&uStack_50);
    }
    else {
      piVar3 = (int *)fn_82E50BE8(0x60,0,0,0,0);
      if (piVar3 == (int *)0x0) {
LAB_82f361c4:
        piVar3 = (int *)0x0;
      }
      else {
        fn_82F48950(piVar3,param_1,&uStack_50);
        *piVar3 = (int)&lbl_82162AD0;
        piVar3[1] = (int)&lbl_821631DC;
      }
    }
    if (piVar3 == (int *)0x0) {
LAB_82f361d0:
      uVar1 = 0xffffffff8007000e;
      uStack_50 = 0x8007000e;
    }
    else {
      uVar1 = (ulonglong)uStack_50;
      if (-1 < (int)uStack_50) {
        uVar1 = (**(code **)*piVar3)(piVar3,0xffffffff8214c740,&piStack_4c);
        uStack_50 = (uint)uVar1;
        if (-1 < (int)uStack_50) {
          uVar1 = (**(code **)(*piStack_4c + 0xc))(piStack_4c,param_1[3]);
          uStack_50 = (uint)uVar1;
          if (-1 < (int)uStack_50) {
            uVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,param_1[0x13]);
            uStack_50 = (uint)uVar1;
            if (-1 < (int)uStack_50) {
              iVar2 = fn_82F35128(piVar4,param_2,piVar3);
              if (iVar2 != 0) {
                (**(code **)(*piVar3 + 4))(piVar3);
                goto LAB_82f362ac;
              }
              goto LAB_82f361d0;
            }
          }
        }
      }
    }
  }
  else {
LAB_82f362ac:
    fn_82F35400(piVar4,param_2,apuStack_48);
    piVar4 = (int *)*apuStack_48[0];
    *param_3 = (int)piVar4;
    (**(code **)(*piVar4 + 4))();
    uVar1 = (ulonglong)uStack_50;
    if (-1 < (int)uStack_50) goto LAB_82f36310;
  }
  piVar4 = (int *)*param_3;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    uVar1 = (ulonglong)uStack_50;
    *param_3 = 0;
  }
  *param_3 = 0;
LAB_82f36310:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    uVar1 = (ulonglong)uStack_50;
  }
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 8))(piStack_4c);
    uVar1 = (ulonglong)uStack_50;
  }
  return uVar1;
}

