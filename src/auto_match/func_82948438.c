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
extern unsigned int *auStack_100;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_114;
extern unsigned int *auStack_118;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_128;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82941320();
extern int fn_82941418();
extern int fn_829414C0();
extern int fn_82941800();
extern int fn_82941938();
extern int fn_82947568();
extern int fn_8295E5E8();
extern unsigned int iStack_130;
extern unsigned int uStack_12c;


void fn_82948438(int *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar1 = *(uint *)param_1[0x41];
  uVar2 = uVar1 & 0xfffff;
  iVar4 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(*(int *)((uint *)param_1[0x41])[4] * 4 + param_1[5]),
                     &uStack_12c,0,auStack_128);
  if (iVar4 < 0) {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x144))
                    (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                     *(undefined4 *)(param_1[0x41] + 0xc),&iStack_130,auStack_128[0]);
  if (iVar4 < 0) {
    return;
  }
  if ((*(uint *)param_1[0x41] & 0xfff00000) != 0x10f00000) {
    iVar4 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)(*(int *)((uint *)param_1[0x41])[2] * 4 + param_1[5]),
                       auStack_120,auStack_110);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(undefined4 *)(param_1[0x41] + 8),uVar2,iStack_130,auStack_118);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = (uVar1 & 0xfffff) * 4;
    iVar5 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)
                                (*(int *)(*(int *)(param_1[0x41] + 8) + iVar4) * 4 + param_1[5]),
                       auStack_11c,auStack_10c);
    if (iVar5 < 0) {
      return;
    }
    iVar4 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(int *)(param_1[0x41] + 8) + iVar4,uVar2,iStack_130,auStack_114);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = fn_82947568(param_1,0,2,auStack_120,auStack_110,auStack_118,auStack_c0,0x20);
    if (iVar4 < 0) {
      return;
    }
  }
  if (iStack_130 == 0xf0000) {
LAB_82948628:
    bVar3 = false;
    if (param_1[0x1c5] == 0) goto LAB_8294863c;
  }
  else {
    iVar4 = fn_82941418(param_1);
    if (iVar4 < 0) {
      return;
    }
    if (iStack_130 == 0xf0000) goto LAB_82948628;
  }
  bVar3 = true;
LAB_8294863c:
  if ((*(uint *)param_1[0x41] & 0xfff00000) == 0x10f00000) {
    uVar6 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        iVar4 = fn_82941178(param_1);
        if (iVar4 < 0) {
          return;
        }
        if (bVar3) {
          fn_828F6FA8(auStack_100,0x20,0xffffffff820347dc,uVar6);
        }
        else {
          fn_82941320(param_1,uStack_12c,auStack_80,0x40,0);
          fn_828F6FA8(auStack_100,0x20,auStack_80,uVar6,uVar6);
        }
        iVar4 = fn_829410A8(param_1,0xffffffff820347f4,auStack_100);
        if (iVar4 < 0) {
          return;
        }
        iVar4 = (**(code **)(*param_1 + 0x18c))(param_1);
        if (iVar4 < 0) {
          return;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
  }
  else {
    if (bVar3) {
      fn_82936290(auStack_100,0x20,0xffffffff820347dc);
    }
    else {
      fn_82941320(param_1,uStack_12c,auStack_100,0x20,0);
    }
    iVar4 = (**(code **)(*param_1 + 0x1e4))
                      (param_1,*(uint *)param_1[0x41] & 0xfff00000,auStack_100,auStack_c0,auStack_a0
                      );
    if (iVar4 < 0) {
      return;
    }
  }
  if (bVar3) {
    iVar4 = fn_829414C0(param_1);
    if (iVar4 < 0) {
      return;
    }
    fn_82941320(param_1,uStack_12c,auStack_e0,0x20,0);
    iVar4 = fn_82941800(param_1,auStack_e0,iStack_130,param_1[0x1c5] != 0,0);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = fn_82941938(param_1,auStack_e0,0,0);
    if (iVar4 < 0) {
      return;
    }
  }
  iVar4 = fn_829410A8(param_1,0xffffffff821bab90);
  if (-1 < iVar4) {
    fn_8295E5E8(param_1);
  }
  return;
}

