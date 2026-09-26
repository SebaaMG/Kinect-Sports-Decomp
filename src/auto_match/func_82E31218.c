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
extern unsigned int *auStack_5c;
extern int fn_82E2DE78();
extern int fn_82E2EB60();
extern int fn_82E2FA90();
extern int fn_82E31128();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int uStack_60;
extern unsigned int uStack_80;


ulonglong fn_82E31218(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  uint uStack_60;
  uint auStack_5c [23];
  
  piStack_7c = (int *)0x0;
  piStack_78 = (int *)0x0;
  uVar6 = 0;
  piStack_74 = (int *)0x0;
  piVar5 = (int *)0x0;
  piStack_70 = (int *)0x0;
  uStack_80 = 0;
  piStack_6c = (int *)0x0;
  piStack_68 = (int *)0x0;
  piStack_64 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 0x15);
  uVar3 = fn_82E50BE8(0x1e8,0,0,0,0);
  if ((uVar3 & 0xffffffff) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_82E31128(uVar3,&uStack_80);
    uVar6 = (ulonglong)uStack_80;
  }
  if (piVar4 == (int *)0x0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    if ((-1 < (int)uVar6) &&
       (uVar6 = (**(code **)(*param_1 + 0x80))(param_1,piVar4), -1 < (longlong)uVar6)) {
      uStack_60 = 0;
      uVar6 = (**(code **)(*param_1 + 0x84))(param_1,&uStack_60);
      if (-1 < (longlong)uVar6) {
        uVar3 = 0;
        if (uStack_60 != 0) {
          do {
            uStack_80 = uStack_80 & 0xffff;
            uVar6 = (**(code **)(*param_1 + 0x88))(param_1,uVar3,&uStack_80,&piStack_7c);
            if ((((longlong)uVar6 < 0) ||
                (uVar6 = (**(code **)(*piStack_7c + 0xa8))(piStack_7c,&piStack_78),
                (longlong)uVar6 < 0)) ||
               (uVar6 = (**(code **)(*piVar4 + 0x90))(piVar4,piStack_78), (longlong)uVar6 < 0))
            goto LAB_82e315fc;
            if (piStack_7c != (int *)0x0) {
              (**(code **)(*piStack_7c + 8))();
              piStack_7c = (int *)0x0;
            }
            if (piStack_78 != (int *)0x0) {
              (**(code **)(*piStack_78 + 8))();
              piStack_78 = (int *)0x0;
            }
            uVar3 = uVar3 + 1;
          } while ((uVar3 & 0xffffffff) < (ulonglong)uStack_60);
        }
        auStack_5c[0] = 0;
        uVar6 = (**(code **)(*param_1 + 0x9c))(param_1,auStack_5c);
        if (-1 < (longlong)uVar6) {
          uVar3 = 0;
          if (auStack_5c[0] != 0) {
            do {
              uVar6 = (**(code **)(*param_1 + 0xa0))(param_1,uVar3,&piStack_74);
              if ((((longlong)uVar6 < 0) ||
                  (uVar6 = (**(code **)(*piStack_74 + 0x2c))(piStack_74,&piStack_70),
                  (longlong)uVar6 < 0)) ||
                 (uVar6 = (**(code **)(*piVar4 + 0xa4))(piVar4,piStack_70), (longlong)uVar6 < 0))
              goto LAB_82e315fc;
              if (piStack_74 != (int *)0x0) {
                (**(code **)(*piStack_74 + 8))();
                piStack_74 = (int *)0x0;
              }
              if (piStack_70 != (int *)0x0) {
                (**(code **)(*piStack_70 + 8))();
                piStack_70 = (int *)0x0;
              }
              uVar3 = uVar3 + 1;
            } while ((uVar3 & 0xffffffff) < (ulonglong)auStack_5c[0]);
          }
          uStack_80 = 0;
          uVar6 = fn_82E2DE78(param_1,&uStack_80);
          uVar2 = uStack_80;
          if (-1 < (longlong)uVar6) {
            uVar3 = 0;
            if (uStack_80 != 0) {
              do {
                uVar6 = fn_82E2FA90(param_1,uVar3,&piStack_68);
                piVar5 = piStack_68;
                if ((((longlong)uVar6 < 0) ||
                    (uVar6 = (**(code **)(*piStack_68 + 0x28))(piStack_68,&piStack_6c),
                    (longlong)uVar6 < 0)) ||
                   (uVar6 = fn_82E2EB60(piVar4,piStack_6c), (longlong)uVar6 < 0))
                goto LAB_82e315fc;
                (**(code **)(*piVar5 + 8))(piVar5);
                piStack_68 = (int *)0x0;
                if (piStack_6c != (int *)0x0) {
                  (**(code **)(*piStack_6c + 8))();
                  piStack_6c = (int *)0x0;
                }
                uVar3 = uVar3 + 1;
              } while ((uVar3 & 0xffffffff) < (ulonglong)uVar2);
            }
            piVar5 = (int *)0x0;
            piVar1 = (int *)param_1[0x76];
            if (((piVar1 == (int *)0x0) ||
                ((uVar6 = (**(code **)(*piVar1 + 0x1c))(piVar1,&piStack_64), -1 < (longlong)uVar6 &&
                 (uVar6 = (**(code **)(*piVar4 + 0xb4))(piVar4,piStack_64), -1 < (longlong)uVar6))))
               && (uVar6 = (**(code **)*piVar4)(piVar4,0xffffffff8215465c,param_2),
                  -1 < (longlong)uVar6)) goto LAB_82e31614;
          }
        }
      }
    }
LAB_82e315fc:
    (**(code **)(*piVar4 + 0xc4))(piVar4,1);
  }
LAB_82e31614:
  if (piStack_7c != (int *)0x0) {
    (**(code **)(*piStack_7c + 8))();
    piStack_7c = (int *)0x0;
  }
  if (piStack_78 != (int *)0x0) {
    (**(code **)(*piStack_78 + 8))();
    piStack_78 = (int *)0x0;
  }
  if (piStack_74 != (int *)0x0) {
    (**(code **)(*piStack_74 + 8))();
    piStack_74 = (int *)0x0;
  }
  if (piStack_70 != (int *)0x0) {
    (**(code **)(*piStack_70 + 8))();
    piStack_70 = (int *)0x0;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (piStack_6c != (int *)0x0) {
    (**(code **)(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
  if (piStack_64 != (int *)0x0) {
    (**(code **)(*piStack_64 + 8))();
    piStack_64 = (int *)0x0;
  }
  fn_82E50F10(param_1 + 0x15);
  return uVar6;
}

