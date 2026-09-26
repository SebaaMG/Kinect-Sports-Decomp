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
extern int fn_82AB15D0();
extern int fn_82BC27A0();
extern int fn_82BC2EF0();
extern int fn_82BD09F0();
extern unsigned int lbl_8316FF50;


void fn_82BAB1C8(int param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  bool bVar8;
  
  bVar8 = *(char *)(param_1 + 0xa4) != '\0';
  if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) == 0) {
    uVar5 = (uint)bVar8 << 0x18 | *param_2 & 0xfeffffff;
  }
  else {
    uVar5 = (uint)bVar8 << 0x19 | *param_2 & 0xfdffffff;
  }
  *param_2 = uVar5;
  if ((*(uint *)(param_1 + 0xe4) >> 1 & 1) == 0) {
    uVar6 = ~(((((ulonglong)*(byte *)(param_1 + 0x83) & 1) << 0x11 |
               ((ulonglong)*(byte *)(param_1 + 0x82) & 1) << 0x10) >> 7 |
              ((ulonglong)*(byte *)(param_1 + 0x81) & 1) << 8) >> 7 |
             (ulonglong)*(byte *)(param_1 + 0x80) & 1);
    if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) == 0) {
      uVar5 = (uint)((uVar6 & 0xffffffff) << 0x10) & 0xf0000 | *param_2 & 0xfff0ffff;
    }
    else {
      uVar5 = (uint)((uVar6 & 0xffffffff) << 0x14) & 0xf00000 | *param_2 & 0xff0fffff;
    }
    *param_2 = uVar5;
  }
  else {
    bVar8 = false;
    bVar2 = false;
    *param_2 = *param_2 | 0x8000;
    uVar5 = 0;
    do {
      bVar1 = *(byte *)(param_1 + 0x80 + uVar5);
      if (bVar1 == 0) {
        uVar7 = *param_2;
        iVar3 = 1 << (uVar5 & 0x3f);
        if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) == 0) {
          uVar7 = uVar7 & 0xfff0ffff | (iVar3 << 0x10 | uVar7) & 0xf0000;
        }
        else {
          uVar7 = uVar7 & 0xff0fffff | (iVar3 << 0x14 | uVar7) & 0xf00000;
        }
LAB_82bab364:
        *param_2 = uVar7;
      }
      else {
        if (bVar1 == 1) {
          if (bVar2) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df56c,0xffffffff820df268,0x934);
          }
          bVar8 = true;
          uVar7 = *param_2 & 0xffffbfff;
          goto LAB_82bab364;
        }
        if (bVar1 < 3) {
          if (bVar8) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df558,0xffffffff820df268,0x939);
          }
          bVar2 = true;
          uVar7 = *param_2 | 0x4000;
          goto LAB_82bab364;
        }
        if (bVar1 == 3) {
          iVar3 = 1 << (uVar5 & 0x3f);
          uVar7 = *param_2;
          uVar7 = uVar7 & 0xff00ffff | (iVar3 << 0x14 | uVar7) & 0xf00000 |
                  (iVar3 << 0x10 | uVar7 & 0xff0fffff) & 0xf0000;
          goto LAB_82bab364;
        }
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x942);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 4);
  }
  iVar3 = fn_82BC2EF0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x3b8));
  uVar5 = fn_82BD09F0(*(undefined4 *)(*(int *)(param_1 + 0x3b8) + 0xab0),param_1);
  uVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x3b8) + 0xab0) + 0x854) + *(int *)(param_1 + 200);
  if (iVar3 == 0x30) {
    if ((*(uint *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) != 0) {
      iVar3 = fn_82BC27A0(param_1,0);
      if (iVar3 == 0) {
        uVar5 = (uVar5 & 0x3f) << 8 | *param_2 & 0xffffc0ff;
      }
      else {
        if (iVar3 != 1) {
          uVar4 = 0x987;
LAB_82bab524:
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,uVar4);
          return;
        }
        uVar5 = (uVar7 & 0x3f) << 8 | 0x4000 | *param_2 & 0xffffc0ff;
      }
      goto LAB_82bab518;
    }
    iVar3 = fn_82BC27A0(param_1,0);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        uVar4 = 0x993;
        goto LAB_82bab524;
      }
LAB_82bab50c:
      uVar5 = uVar7 & 0x3f | *param_2 & 0xffffffc0 | 0x40;
      goto LAB_82bab518;
    }
LAB_82bab4f8:
    uVar5 = uVar5 & 0x3f | *param_2 & 0xffffffc0;
  }
  else {
    if (iVar3 == 5) {
      uVar5 = *param_2 & 0xffffffc0 | 0x3e;
      goto LAB_82bab518;
    }
    if (iVar3 == 6) {
      uVar5 = *param_2 | 0x3f;
      goto LAB_82bab518;
    }
    if (iVar3 == 7) {
      uVar5 = 0x3d;
    }
    else {
      if (iVar3 == 0x2b) {
        uVar5 = *param_2 & 0xffffffc0 | 0x20;
        goto LAB_82bab518;
      }
      if (iVar3 != 0x2c) {
        iVar3 = fn_82BC27A0(param_1,0);
        if (iVar3 != 0) {
          if (iVar3 != 1) {
            uVar4 = 0x97a;
            goto LAB_82bab524;
          }
          goto LAB_82bab50c;
        }
        goto LAB_82bab4f8;
      }
      uVar5 = 0x21;
    }
    uVar5 = uVar5 | *param_2 & 0xffffffc0;
  }
LAB_82bab518:
  *param_2 = uVar5;
  return;
}

