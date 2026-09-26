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
extern int fn_82E6FC88();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


longlong fn_82E71308(int *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                      undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  int *piStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  longlong lStack_58;
  longlong alStack_50 [10];
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    if (param_1[0x16] == 0) {
      lVar1 = -0x3ff2c945;
    }
    else {
      piStack_70 = (int *)0x0;
      uStack_64 = 0;
      uStack_6c = 0;
      lVar1 = (**(code **)(*param_1 + 8))(param_1,&uStack_6c);
      if ((-1 < lVar1) &&
         (lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x48))
                            ((int *)param_1[0x16],uStack_6c * param_2,&piStack_70,&uStack_64),
         -1 < lVar1)) {
        alStack_50[0] = 0;
        lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x4c))
                          ((int *)param_1[0x16],piStack_70,alStack_50);
        if (-1 < lVar1) {
          uStack_68 = 0;
          lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],&uStack_68);
          if (-1 < lVar1) {
            uStack_60 = 0;
            lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x50))
                              ((int *)param_1[0x16],piStack_70,&uStack_60);
            if (-1 < lVar1) {
              if (param_2 - uStack_60 < 0x100000000) {
                lStack_58 = 0;
                lVar1 = (**(code **)(*piStack_70 + 0x2c))
                                  (piStack_70,(param_2 & 0xffffffff) - (uStack_60 & 0xffffffff),
                                   *(undefined2 *)(param_1 + 2),param_3,&lStack_58);
                if (-1 < lVar1) {
                  *param_4 = *(longlong *)(param_1 + 0xc) + (ulonglong)uStack_68 + lStack_58 +
                             alStack_50[0];
                  lVar1 = fn_82E6FC88(param_1);
                  if (-1 < lVar1) {
                    if (param_5 != (undefined4 *)0x0) {
                      *param_5 = piStack_70;
                      (**(code **)(*piStack_70 + 4))();
                    }
                    if (param_6 != (undefined4 *)0x0) {
                      *param_6 = uStack_64;
                    }
                  }
                }
              }
              else {
                lVar1 = -0x3ff2c566;
              }
            }
          }
        }
      }
      if (piStack_70 != (int *)0x0) {
        (**(code **)(*piStack_70 + 8))();
      }
    }
  }
  return lVar1;
}

