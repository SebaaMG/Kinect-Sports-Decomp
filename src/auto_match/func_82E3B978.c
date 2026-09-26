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
extern unsigned int *auStack_60;
extern int fn_82E39CE8();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


longlong fn_82E3B978(int param_1,int *param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 auStack_60 [24];
  
  if (((param_2 == (int *)0x0) || (param_3 == 0)) || ((param_4 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    param_5 = param_5 & 0xffff;
    if (param_5 < 8) {
      lVar1 = -0x7ff8ffa9;
    }
    else {
      piStack_70 = (int *)0x0;
      lVar3 = (ulonglong)*(uint *)(param_3 + 0x21) + (ulonglong)*(uint *)(param_3 + 0x13);
      uStack_6c = 0;
      auStack_60[0] = (undefined4)param_4;
      if (*(int *)(param_1 + 0x4c) == 0) {
        lVar1 = -0x3ff2c94a;
      }
      else {
        uStack_64 = 0;
        lVar1 = (**(code **)(*param_2 + 0x9c))(param_2,&uStack_64);
        if (-1 < lVar1) {
          uVar4 = 0;
          uVar5 = 0;
          uVar2 = 0;
          if (uStack_64 != 0) {
            do {
              if ((uVar5 & 0xffffffff) == param_5) break;
              uStack_68 = 0;
              if (piStack_70 != (int *)0x0) {
                (**(code **)(*piStack_70 + 8))();
                piStack_70 = (int *)0x0;
              }
              lVar1 = (**(code **)(*param_2 + 0xa0))(param_2,uVar2,&piStack_70);
              if ((lVar1 < 0) ||
                 (lVar1 = (**(code **)(*piStack_70 + 0x14))(piStack_70,&uStack_68), lVar1 < 0))
              goto LAB_82e3bb70;
              uVar4 = uStack_68 + uVar4;
              if ((uVar5 + lVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
                lVar1 = (**(code **)(*piStack_70 + 0xc))(piStack_70,&uStack_6c,0,0);
                if (lVar1 < 0) goto LAB_82e3bb70;
                uVar6 = (uVar4 - uVar5) - lVar3;
                if ((param_5 - uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
                  uVar6 = param_5 - uVar5;
                }
                lVar1 = fn_82E39CE8((uStack_68 - uVar4) + uVar5 + lVar3 + (ulonglong)uStack_6c,
                                        auStack_60,uVar6,param_5 + param_4);
                if (lVar1 < 0) goto LAB_82e3bb70;
                uVar5 = uVar6 + uVar5;
                if (uStack_6c != 0) {
                  (**(code **)(*piStack_70 + 0x10))();
                  uStack_6c = 0;
                }
              }
              uVar2 = uVar2 + 1;
            } while ((uVar2 & 0xffffffff) < (ulonglong)uStack_64);
          }
          if (((int)lVar1 != 0) || ((uVar5 & 0xffffffff) != param_5)) {
            lVar1 = -0x3ff2c566;
          }
        }
LAB_82e3bb70:
        if (uStack_6c != 0) {
          if (piStack_70 == (int *)0x0) {
            return lVar1;
          }
          (**(code **)(*piStack_70 + 0x10))();
        }
        if (piStack_70 != (int *)0x0) {
          (**(code **)(*piStack_70 + 8))();
        }
      }
    }
  }
  return lVar1;
}

