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
extern unsigned int *auStack_110;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_cf;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941320();
extern int fn_82941418();
extern int fn_829414C0();
extern int fn_82941580();
extern int fn_82941680();
extern int fn_82941800();
extern int fn_82941938();
extern int fn_82947568();
extern unsigned int iStack_120;
extern unsigned int uStack_d0;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;


undefined8 fn_82949020(int *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iStack_120;
  uint auStack_11c [3];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [4];
  undefined4 uStack_ec;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 uStack_d0;
  undefined1 auStack_cf [31];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar2 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                     &uStack_ec,auStack_11c,&uStack_e4);
  if ((-1 < (int)uVar2) &&
     (uVar2 = (**(code **)(*param_1 + 0x144))
                        (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                         *(undefined4 *)(param_1[0x41] + 0xc),&iStack_120,uStack_e4),
     -1 < (int)uVar2)) {
    if ((iStack_120 != 0xf0000) || ((auStack_11c[0] != 0 || (bVar6 = false, param_1[0x1c5] != 0))))
    {
      bVar6 = true;
    }
    fn_82941320(param_1,uStack_ec,auStack_b0,0x20,0);
    if ((bVar6) && (uVar5 = 0, param_1[0x1c6] != 0)) {
      do {
        uVar2 = fn_82941178(param_1);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        fn_828F6FA8(auStack_cf,0x1f,auStack_b0,uVar5,uVar5);
        uStack_d0 = 0x26;
        fn_828F6FA8(auStack_110,0x20,0xffffffff820348bc,uVar5);
        uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,&uStack_d0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar2 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                       auStack_e8,auStack_f0);
    if ((((-1 < (int)uVar2) &&
         (uVar2 = (**(code **)(*param_1 + 0x14c))
                            (param_1,((uint *)param_1[0x41])[2],*(uint *)param_1[0x41] & 0xfffff,
                             iStack_120,auStack_e0), -1 < (int)uVar2)) &&
        (uVar2 = fn_82947568(param_1,0,1,auStack_e8,auStack_f0,auStack_e0,auStack_90,0x20),
        -1 < (int)uVar2)) &&
       ((iStack_120 == 0xf0000 || (uVar2 = fn_82941418(param_1), -1 < (int)uVar2)))) {
      uVar5 = 0;
      uVar4 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_70,0x20,auStack_90,uVar5,uVar5);
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x194))(param_1,auStack_70);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar4 = param_1[0x1c6];
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar4);
      }
      uVar5 = 0;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x1a4))(param_1,auStack_110,0);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar3 = param_1[0x1c6];
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar3);
      }
      if (bVar6) {
        uVar5 = 0;
        if (uVar3 != 0) {
          do {
            uVar2 = fn_82941178(param_1);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            fn_828F6FA8(auStack_110,0x20,0xffffffff820348bc,uVar5);
            uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            if ((uVar5 & 1) == 0) {
              pcVar1 = *(code **)(*param_1 + 0x1ac);
            }
            else {
              pcVar1 = *(code **)(*param_1 + 0x1b0);
            }
            uVar2 = (*pcVar1)(param_1,auStack_110);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
        }
        uVar2 = fn_829414C0(param_1);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        fn_82936290(&uStack_d0,0x20,0xffffffff820348bc);
        uVar2 = fn_82941800(param_1,&uStack_d0,iStack_120,1,0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = fn_82941938(param_1,&uStack_d0,1,0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if (auStack_11c[0] != 0) {
          bVar6 = (auStack_11c[0] & 0xff0000) != 0;
          if ((bVar6) && (uVar2 = fn_82941580(param_1,auStack_11c[0]), (int)uVar2 < 0)) {
            return uVar2;
          }
          uVar2 = fn_82941680(param_1,&uStack_d0,auStack_11c[0],bVar6,1,0);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        }
      }
      uVar5 = 0;
      uVar4 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,auStack_110,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar4 = param_1[0x1c6];
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar4);
      }
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          uVar2 = fn_82941178(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          fn_828F6FA8(auStack_cf,0x1f,auStack_b0,uVar5,uVar5);
          uStack_d0 = 0x26;
          fn_828F6FA8(auStack_110,0x20,0xffffffff820347dc,uVar5);
          uVar2 = (**(code **)(*param_1 + 0x1bc))(param_1,&uStack_d0,auStack_110);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

