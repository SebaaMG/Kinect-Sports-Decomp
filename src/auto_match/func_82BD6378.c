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
extern int fn_82A1E740();
extern int fn_82BD51F0();
extern int fn_82BD9BA0();
extern unsigned int lbl_82021544;
extern unsigned int uStack_48;


void fn_82BD6378(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int aiStack_50 [2];
  ulonglong uStack_48;
  
  bVar2 = false;
  bVar1 = false;
  if (param_1[3] != 0) {
    iVar3 = XamVoiceHeadsetPresent();
    if (param_1[0x33] == 0) {
LAB_82bd63c0:
      if (iVar3 != 0) {
LAB_82bd63c8:
        bVar2 = true;
        bVar1 = true;
      }
    }
    else {
      if (iVar3 == 0) goto LAB_82bd63c8;
      if (param_1[0x33] == 0) goto LAB_82bd63c0;
    }
    param_1[0x33] = iVar3;
  }
  if ((*(int *)(param_1[0x27] + 0x11c) == 0) && (param_1[0x32] == 0)) {
LAB_82bd6570:
    if (!bVar1) goto LAB_82bd65b0;
  }
  else {
    iVar3 = XamUserGetSigninState(*param_1);
    if (param_1[0x32] != 0) {
      iVar4 = fn_82A1E740(param_1 + 0x28,0,0);
      if ((iVar3 == 0) || (iVar4 != 0)) {
        if (param_1[0x28] != 0x3e5) {
          param_1[0x32] = 0;
          goto LAB_82bd6554;
        }
      }
      else {
        uVar7 = 0;
        param_1[0x32] = 0;
        if (*(int *)param_1[0x2f] != 0) {
          iVar3 = 0;
          do {
            iVar4 = *(int *)(param_1[0x2f] + 4) + iVar3;
            uVar5 = (ulonglong)*(uint *)(iVar4 + 0x10) - 0x1004000c;
            if (uVar5 == 0) {
              if (*(int *)(iVar4 + 0x20) == 0) {
                uVar6 = param_1[0x34] & 0xfffffffe;
              }
              else {
                uVar6 = param_1[0x34] | 1;
              }
LAB_82bd6524:
              param_1[0x34] = uVar6;
            }
            else {
              if ((uVar5 & 0xffffffff) == 1) {
                if (*(int *)(iVar4 + 0x20) == 0) {
                  uVar6 = param_1[0x34] & 0xfffffffd;
                }
                else {
                  uVar6 = param_1[0x34] | 2;
                }
                param_1[0x34] = uVar6;
                if (*(int *)(iVar4 + 0x20) == 1) {
                  uVar6 = uVar6 & 0xfffffffb;
                }
                else {
                  uVar6 = uVar6 | 4;
                }
                bVar1 = true;
                goto LAB_82bd6524;
              }
              if ((uVar5 & 0xffffffff) == 2) {
                if (100 < *(int *)(iVar4 + 0x20)) {
                  *(undefined4 *)(iVar4 + 0x20) = 100;
                }
                uStack_48 = (ulonglong)*(int *)(iVar4 + 0x20);
                if ((float)(longlong)uStack_48 != (float)param_1[0x31]) {
                  *(undefined1 *)((int)param_1 + 0xd2) = 0;
                  bVar2 = true;
                  uVar6 = *(int *)(iVar4 + 0x20) << 8 | param_1[0x34];
                  goto LAB_82bd6524;
                }
              }
            }
            uVar7 = uVar7 + 1;
            iVar3 = iVar3 + 0x28;
          } while (uVar7 < *(uint *)param_1[0x2f]);
        }
      }
      goto LAB_82bd6570;
    }
    if (iVar3 == 0) {
LAB_82bd6554:
      if (param_1[0x34] != 0x26404) {
        param_1[0x34] = 0x26404;
        bVar2 = true;
      }
      goto LAB_82bd6570;
    }
    iVar3 = XamUserReadProfileSettings
                      (0xfffffffffffe07d1,*param_1,0,0,3,0xffffffff83171df4,param_1 + 0x30,
                       param_1[0x2f]);
    if ((iVar3 == 0) || (iVar3 == 0x3e5)) {
      param_1[0x32] = 1;
    }
    else if (param_1[0x34] != 0x26404) {
      param_1[0x34] = 0x26404;
    }
    iVar3 = XamUserCheckPrivilege(*param_1,0xfc,aiStack_50);
    if ((iVar3 == 0) && (aiStack_50[0] != 1)) {
      iVar3 = XamUserCheckPrivilege(*param_1,0xfb,aiStack_50);
      if ((iVar3 == 0) && (aiStack_50[0] == 1)) {
        uVar7 = 0x10000;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0x20000;
    }
    if (*(int *)(param_1[0x27] + 0x24) != 0) {
      uVar7 = 0x20000;
    }
    param_1[0x34] = param_1[0x34] & 0xfff0ffff | uVar7;
  }
  uVar7 = 0x60;
  do {
    if ((*(longlong **)(uVar7 + param_1[0x27]) != (longlong *)0x0) &&
       (**(longlong **)(uVar7 + param_1[0x27]) != 0)) {
      fn_82BD9BA0();
    }
    uVar7 = uVar7 + 4;
  } while (uVar7 < 0xe8);
  bVar2 = true;
LAB_82bd65b0:
  if (bVar2) {
    param_1[0x34] = param_1[0x34] & 0xfffffff7;
    uStack_48 = (ulonglong)*(byte *)((int)param_1 + 0xd2);
    param_1[0x31] = (float)uStack_48 * lbl_82021544;
    fn_82BD51F0(param_1[0x27],param_1);
  }
  return;
}

