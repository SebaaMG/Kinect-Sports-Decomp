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
extern int fn_82E3C5F8();
extern int fn_82E59440();
extern int fn_82E5A018();
extern int fn_82E62670();
extern int fn_82E627B8();
extern int fn_82E62828();
extern int fn_82E62850();
extern int fn_82E62878();
extern int fn_82E628C8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;


longlong fn_82E42D28(int param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  uint uStack_58;
  uint uStack_54;
  longlong lStack_50;
  longlong alStack_48 [9];
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    piStack_60 = (int *)0x0;
    piStack_64 = (int *)0x0;
    piStack_6c = (int *)0x0;
    piStack_68 = (int *)0x0;
    piStack_5c = (int *)0x0;
    lVar2 = fn_82E59440(param_2,0xffffffff820ed018,0xffffffff82154c58,&piStack_60);
    if ((((-1 < lVar2) &&
         (lVar2 = (**(code **)*piStack_60)(piStack_60,0xffffffff82154c18,&piStack_64), -1 < lVar2))
        && (lVar2 = (**(code **)(*piStack_64 + 0x10))(piStack_64,0xffffffff82154aa8,0,&piStack_6c),
           -1 < lVar2)) &&
       ((lVar2 = fn_82E62828(piStack_6c,*(undefined8 *)(param_1 + 0x5a8)), -1 < lVar2 &&
        (lVar2 = fn_82E62878(piStack_6c,
                                 *(longlong *)(param_1 + 0x5b8) + *(longlong *)(param_1 + 0x5b0)),
        -1 < lVar2)))) {
      uVar3 = 0;
      uVar4 = 0;
      if (*(int *)(param_1 + 0x2ac) != 0) {
        do {
          fn_82E3C5F8(param_1 + 0x26c,uVar4,&puStack_70);
          lVar2 = (**(code **)(**(int **)((*puStack_70 + 0x1b) * 4 + param_1) + 0x14))();
          if (uVar3 < (ulonglong)(lVar2 * 10000)) {
            uVar3 = lVar2 * 10000;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2ac));
      }
      lVar2 = fn_82E62850(piStack_6c,*(longlong *)(param_1 + 0x58) * 10000 + uVar3);
      if (-1 < lVar2) {
        uStack_58 = 0;
        lVar2 = fn_82E62670(piStack_6c,&uStack_58);
        if (-1 < lVar2) {
          uStack_58 = uStack_58 & 0xfffffff6;
          lVar2 = fn_82E628C8(piStack_6c);
          if (-1 < lVar2) {
            uStack_54 = 0;
            lVar2 = (**(code **)(*piStack_64 + 0xc))(piStack_64,0xffffffff820f8f08,&uStack_54);
            if (-1 < lVar2) {
              uVar3 = 0;
              if (uStack_54 != 0) {
                do {
                  lVar2 = (**(code **)(*piStack_64 + 0x10))
                                    (piStack_64,0xffffffff820f8f08,uVar3,&piStack_68);
                  if (lVar2 < 0) goto LAB_82e430ac;
                  puStack_70 = (ushort *)((uint)puStack_70 & 0xffff);
                  lVar2 = fn_82E5A018(piStack_68,&puStack_70);
                  if (lVar2 < 0) goto LAB_82e430ac;
                  if ((0x7f < (uint)puStack_70 >> 0x10) ||
                     (piVar1 = *(int **)((((uint)puStack_70 >> 0x10) + 0x1b) * 4 + param_1),
                     piVar1 == (int *)0x0)) {
                    lVar2 = -0x3ff2c94d;
                    break;
                  }
                  lVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,piStack_68);
                  if (lVar2 < 0) goto LAB_82e430ac;
                  if (piStack_68 != (int *)0x0) {
                    (**(code **)(*piStack_68 + 8))();
                    piStack_68 = (int *)0x0;
                  }
                  uVar3 = uVar3 + 1;
                } while ((uVar3 & 0xffffffff) < (ulonglong)uStack_54);
              }
              if ((((-1 < (int)lVar2) &&
                   (lVar2 = fn_82E59440(param_2,0xffffffff821549b8,0xffffffff82154c68,
                                              &piStack_5c), -1 < lVar2)) &&
                  (lVar2 = (**(code **)(*piStack_5c + 0x34))
                                     (piStack_5c,*(undefined8 *)(param_1 + 0x5a8)), -1 < lVar2)) &&
                 (lVar2 = (**(code **)(*piStack_5c + 0x24))
                                    (piStack_5c,
                                     (ulonglong)*(uint *)(param_1 + 0x50) *
                                     *(longlong *)(param_1 + 0x5a8) + 0x32), -1 < lVar2)) {
                lStack_50 = 0;
                lVar2 = (**(code **)(*piStack_60 + 0x14))(piStack_60,0,&lStack_50);
                if (-1 < lVar2) {
                  alStack_48[0] = 0;
                  lVar2 = (**(code **)(*piStack_5c + 0x14))(piStack_5c,0,alStack_48);
                  if (-1 < lVar2) {
                    lVar2 = fn_82E627B8(piStack_6c,alStack_48[0] + lStack_50);
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_82e430ac:
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
      piStack_60 = (int *)0x0;
    }
    if (piStack_64 != (int *)0x0) {
      (**(code **)(*piStack_64 + 8))();
      piStack_64 = (int *)0x0;
    }
    if (piStack_6c != (int *)0x0) {
      (**(code **)(*piStack_6c + 8))();
      piStack_6c = (int *)0x0;
    }
    if (piStack_68 != (int *)0x0) {
      (**(code **)(*piStack_68 + 8))();
      piStack_68 = (int *)0x0;
    }
    if (piStack_5c != (int *)0x0) {
      (**(code **)(*piStack_5c + 8))();
    }
  }
  return lVar2;
}

