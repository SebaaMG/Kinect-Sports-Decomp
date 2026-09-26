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
extern unsigned int *auStack_80;
extern int fn_82F35400();
extern unsigned int uStack_7c;


longlong fn_82F36368(int *param_1,ulonglong param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort auStack_80 [2];
  uint uStack_7c;
  int *piStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  int *apiStack_60 [24];
  
  lVar4 = 0;
  if (param_1[3] == 0) {
    lVar4 = -0x3ff2c94a;
  }
  else if (param_3 == (int *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else if (param_1[0x4d] == 0) {
    lVar4 = -0x3ff2c566;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    if (iVar3 == 0) {
      uVar1 = param_1[0x4d];
      uVar7 = 0;
      uVar2 = param_1[0x31];
      uVar6 = 0;
      trapDoubleWordImmediate(6,(ulonglong)uVar1,0);
      if (uVar2 != 0) {
        param_1 = param_1 + 0x17;
        do {
          fn_82F35400(param_1,uVar6,apiStack_60);
          if (*apiStack_60[0] != 0) {
            fn_82F35400(param_1,uVar6,&puStack_64);
            iVar3 = (**(code **)(*(int *)*puStack_64 + 0x24))((int *)*puStack_64,&piStack_68);
            if ((-1 < iVar3) && (uVar7 = ZEXT48(piStack_68) + uVar7, param_2 / uVar1 < uVar7)) {
              fn_82F35400(param_1,uVar6,apiStack_60);
              piStack_68 = apiStack_60[0];
              goto LAB_82f36640;
            }
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (ulonglong)uVar2);
      }
    }
    else {
      uVar1 = param_1[0x31];
      uVar7 = 0;
      if (uVar1 != 0) {
        param_1 = param_1 + 0x17;
        uVar5 = 0xffffffffffffffff;
        do {
          fn_82F35400(param_1,uVar7,&piStack_78);
          uVar6 = uVar5;
          if (*piStack_78 != 0) {
            fn_82F35400(param_1,uVar7,&puStack_74);
            lVar4 = (**(code **)(*(int *)*puStack_74 + 0x44))((int *)*puStack_74,auStack_80);
            if (lVar4 < 0) {
              return lVar4;
            }
            fn_82F35400(param_1,uVar7,&puStack_70);
            lVar4 = (**(code **)(*(int *)*puStack_70 + 0x24))((int *)*puStack_70,&uStack_7c);
            if (lVar4 < 0) {
              return lVar4;
            }
            if (uStack_7c != 0) {
              fn_82F35400(param_1,uVar7,&puStack_6c);
              lVar4 = (**(code **)(*(int *)*puStack_6c + 0x48))((int *)*puStack_6c,0,&puStack_64);
              if (lVar4 < 0) {
                return lVar4;
              }
              fn_82F35400(param_1,uVar7,&piStack_68);
              lVar4 = (**(code **)(*(int *)*piStack_68 + 0x48))
                                ((int *)*piStack_68,(ulonglong)uStack_7c - 1,apiStack_60);
              if (lVar4 < 0) {
                return lVar4;
              }
              if ((ZEXT48(puStack_64) <= (param_2 & 0xffffffff)) &&
                 ((param_2 & 0xffffffff) <= ZEXT48(apiStack_60[0]))) {
                uVar6 = uVar7;
                if ((ulonglong)auStack_80[0] == (param_2 >> 0x20 & 0xffff)) break;
                uVar6 = uVar5;
                if ((int)uVar5 == -1) {
                  uVar6 = uVar7;
                }
              }
            }
          }
          uVar7 = uVar7 + 1;
          uVar5 = uVar6;
        } while ((uVar7 & 0xffffffff) < (ulonglong)uVar1);
        if ((int)lVar4 < 0) {
          return lVar4;
        }
        if ((int)uVar6 != -1) {
          fn_82F35400(param_1,uVar6,&piStack_68);
LAB_82f36640:
          piStack_68 = (int *)*piStack_68;
          *param_3 = (int)piStack_68;
          (**(code **)(*piStack_68 + 4))();
          if (param_4 == (undefined4 *)0x0) {
            return lVar4;
          }
          *param_4 = (int)uVar6;
          return lVar4;
        }
      }
    }
    lVar4 = -0x3ff2c563;
  }
  return lVar4;
}

