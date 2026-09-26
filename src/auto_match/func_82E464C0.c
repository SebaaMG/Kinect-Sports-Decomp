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
extern int fn_82E443E0();
extern int fn_82E45988();
extern int fn_82E59440();
extern int fn_82E619C8();
extern int fn_82E72E78();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_7c;


longlong fn_82E464C0(int param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piStack_80;
  uint uStack_7c;
  int *piStack_78;
  int *piStack_74;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [2];
  longlong lStack_60;
  longlong lStack_58;
  longlong alStack_50 [10];
  
  piStack_80 = (int *)0x0;
  piStack_78 = (int *)0x0;
  piStack_74 = (int *)0x0;
  iStack_70 = 0;
  iStack_6c = 0;
  if ((param_2 == (int *)0x0) && (param_3 == (undefined4 *)0x0)) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return -0x3ff2c94e;
  }
  if (((param_2 == (int *)0x0) &&
      ((lVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
                          (*(int **)(param_1 + 0x1c),0xffffffff82154a88,&iStack_6c), lVar1 < 0 ||
       ((iStack_6c == 0 &&
        (((lVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))
                             (*(int **)(param_1 + 0x18),0xffffffff82154a88,&piStack_80), lVar1 < 0
          || (lVar1 = fn_82E72E78(piStack_80,0x400), lVar1 < 0)) ||
         (lVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))
                            (*(int **)(param_1 + 0x1c),piStack_80,0), lVar1 < 0)))))))) ||
     ((((lVar1 = fn_82E443E0(param_1), lVar1 < 0 ||
        (lVar1 = fn_82E619C8(param_1,*(undefined4 *)(param_1 + 0x1c)), lVar1 < 0)) ||
       (lVar1 = fn_82E45988(param_1), lVar1 < 0)) ||
      (lVar1 = fn_82E59440(*(undefined4 *)(param_1 + 0x18),0xffffffff820ed018,
                                 0xffffffff82154c58,&piStack_78), lVar1 < 0)))) goto LAB_82e468e8;
  lStack_60 = 0;
  lVar1 = (**(code **)(*piStack_78 + 0x14))(piStack_78,0,&lStack_60);
  if ((lVar1 < 0) ||
     (lVar1 = fn_82E59440(*(undefined4 *)(param_1 + 0x18),0xffffffff821549b8,
                                0xffffffff82154c68,&piStack_74), lVar1 < 0)) goto LAB_82e468e8;
  alStack_50[0] = 0;
  lVar1 = (**(code **)(*piStack_74 + 0x14))(piStack_74,alStack_50,0);
  if (lVar1 < 0) goto LAB_82e468e8;
  uStack_7c = 0;
  uVar3 = alStack_50[0] + lStack_60;
  if (param_2 != (int *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,&uStack_7c);
    if (lVar1 < 0) goto LAB_82e468e8;
    if (uVar3 == uStack_7c) goto LAB_82e467f8;
    lVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
                      (*(int **)(param_1 + 0x1c),0xffffffff82154a88,&iStack_6c);
    if (lVar1 < 0) goto LAB_82e468e8;
    if (iStack_6c != 1) goto LAB_82e467f8;
    if (piStack_80 != (int *)0x0) {
      (**(code **)(*piStack_80 + 8))();
      piStack_80 = (int *)0x0;
    }
    lVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))
                      (*(int **)(param_1 + 0x1c),0xffffffff82154a88,0,&piStack_80);
    if (lVar1 < 0) goto LAB_82e468e8;
    lStack_58 = 0;
    lVar1 = (**(code **)(*piStack_80 + 0x14))(piStack_80,&lStack_58,0);
    if (lVar1 < 0) goto LAB_82e468e8;
    uVar2 = (ulonglong)uStack_7c;
    if (uVar3 < uVar2) {
      uVar2 = (uVar2 - uVar3) + lStack_58;
      if (0x5000 < uVar2) goto LAB_82e46794;
LAB_82e467d0:
      lVar1 = fn_82E72E78(piStack_80,uVar2);
      if (lVar1 < 0) goto LAB_82e468e8;
      lStack_60 = (uStack_7c - uVar3) + lStack_60;
    }
    else {
      if (uVar3 - uVar2 <= lStack_58 - 0x18U) {
        uVar2 = (uVar2 - uVar3) + lStack_58;
        goto LAB_82e467d0;
      }
LAB_82e46794:
      lVar1 = fn_82E72E78(piStack_80,0x400);
      if (lVar1 < 0) goto LAB_82e468e8;
      lStack_60 = (lStack_60 - lStack_58) + 0x400;
    }
    uVar3 = alStack_50[0] + lStack_60;
  }
LAB_82e467f8:
  if (uVar3 < 0xa00001) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)uVar3;
    }
    if (param_2 != (int *)0x0) {
      if (uStack_7c < uVar3) {
        lVar1 = -0x3ff2c94f;
      }
      else {
        lVar1 = (**(code **)(*param_2 + 0xc))(param_2,&iStack_70,0,0);
        if (-1 < lVar1) {
          aiStack_68[0] = 0;
          lVar1 = (**(code **)(*piStack_78 + 0x1c))(piStack_78,iStack_70,uStack_7c,aiStack_68);
          if (-1 < lVar1) {
            iStack_70 = aiStack_68[0] + iStack_70;
            uStack_7c = uStack_7c - aiStack_68[0];
            lVar1 = (**(code **)(*piStack_74 + 0x1c))();
            if (-1 < lVar1) {
              lVar1 = (**(code **)(*param_2 + 0x18))(param_2,uVar3 & 0xffffffff);
            }
          }
        }
      }
    }
  }
  else {
    lVar1 = -0x3ff2c566;
  }
LAB_82e468e8:
  if (piStack_78 != (int *)0x0) {
    (**(code **)(*piStack_78 + 8))();
    piStack_78 = (int *)0x0;
  }
  if (piStack_74 != (int *)0x0) {
    (**(code **)(*piStack_74 + 8))();
    piStack_74 = (int *)0x0;
  }
  if (piStack_80 != (int *)0x0) {
    (**(code **)(*piStack_80 + 8))();
    piStack_80 = (int *)0x0;
  }
  if ((iStack_70 != 0) && (param_2 != (int *)0x0)) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return lVar1;
}

