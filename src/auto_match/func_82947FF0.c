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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82947568();


undefined8 fn_82947FF0(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar4 = fn_82941178();
  if ((((-1 < (int)uVar4) &&
       (uVar4 = fn_829410A8(param_1,0xffffffff820347b4), -1 < (int)uVar4)) &&
      (uVar4 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,2,1,1,1), -1 < (int)uVar4)
      ) && (uVar4 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar4)) {
    uVar5 = *(uint *)param_1[0x41];
    uVar2 = uVar5 & 0xfffff;
    uVar4 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*(int *)((uint *)param_1[0x41])[2] * 4 + param_1[5]),
                       auStack_d0,auStack_c0);
    if ((-1 < (int)uVar4) &&
       (uVar4 = (**(code **)(*param_1 + 0x14c))
                          (param_1,*(undefined4 *)(param_1[0x41] + 8),uVar2,0xf0000,auStack_b0),
       -1 < (int)uVar4)) {
      iVar3 = (uVar5 & 0xfffff) * 4;
      uVar4 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)
                                  (*(int *)(*(int *)(param_1[0x41] + 8) + iVar3) * 4 + param_1[5]),
                         auStack_cc,auStack_bc);
      if ((-1 < (int)uVar4) &&
         ((uVar4 = (**(code **)(*param_1 + 0x14c))
                             (param_1,*(int *)(param_1[0x41] + 8) + iVar3,uVar2,0xf0000,auStack_ac),
          -1 < (int)uVar4 &&
          (uVar4 = fn_82947568(param_1,0,2,auStack_d0,auStack_c0,auStack_b0,auStack_f0,0x20),
          -1 < (int)uVar4)))) {
        fn_82936290(auStack_80,0x20,0xffffffff820347dc);
        uVar4 = (**(code **)(*param_1 + 0x1e4))
                          (param_1,*(uint *)param_1[0x41] & 0xfff00000,auStack_80,auStack_f0,
                           auStack_a0);
        if (-1 < (int)uVar4) {
          uVar6 = 0;
          uVar5 = 0;
          if (param_1[0x1c6] != 0) {
            do {
              uVar4 = fn_82941178(param_1);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar6);
              uVar4 = fn_829410A8(param_1,0xffffffff820347f4,auStack_a0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = (**(code **)(*param_1 + 0x1e0))(param_1,0xffffffff820347fc,uVar6);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar5 = param_1[0x1c6];
              uVar6 = uVar6 + 1;
            } while ((uVar6 & 0xffffffff) < (ulonglong)uVar5);
          }
          uVar6 = 0;
          if (uVar5 != 0) {
            do {
              fn_828F6FA8(auStack_f0,0x20,0xffffffff820347dc,uVar6);
              fn_828F6FA8(auStack_a0,0x20,0xffffffff820347e8,uVar6);
              uVar4 = fn_82941178(param_1);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = fn_829410A8(param_1,0xffffffff820347f4,auStack_f0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              if (param_3 == 0) {
                pcVar1 = *(code **)(*param_1 + 0x1cc);
              }
              else {
                pcVar1 = *(code **)(*param_1 + 0x1d0);
              }
              uVar4 = (*pcVar1)(param_1,auStack_f0,auStack_a0);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar4 = fn_829410A8(param_1,0xffffffff820347a8);
              if ((int)uVar4 < 0) {
                return uVar4;
              }
              uVar6 = uVar6 + 1;
            } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
          }
          if ((param_4 == 0) ||
             (uVar4 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff820347fc), -1 < (int)uVar4))
          {
            uVar6 = 0;
            if (param_1[0x1c6] != 0) {
              do {
                fn_828F6FA8(auStack_f0,0x20,0xffffffff820347dc,uVar6);
                uVar4 = fn_82941178(param_1);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uVar4 = fn_829410A8(param_1,0xffffffff820347f4,param_2);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                if (param_3 == 0) {
                  pcVar1 = *(code **)(*param_1 + 0x1d0);
                }
                else {
                  pcVar1 = *(code **)(*param_1 + 0x1c8);
                }
                uVar4 = (*pcVar1)(param_1,param_2,auStack_f0);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uVar4 = fn_829410A8(param_1,0xffffffff820347a8);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                uVar6 = uVar6 + 1;
              } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
            }
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}

