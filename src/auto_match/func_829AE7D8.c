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
extern unsigned int *auStack_50;
extern int fn_829AB0F0();
extern int fn_829AB2C8();
extern int fn_829B0D78();
extern int fn_829B0F38();
extern int fn_829B5120();
extern int fn_829B8A30();
extern int fn_829B8F80();
extern int fn_829B9120();
extern int fn_829B9380();
extern int fn_829B96C0();
extern int fn_829B98E0();
extern int fn_829B9AF0();
extern int fn_829B9B60();
extern int fn_829BA710();
extern unsigned int lbl_820523D0;
extern unsigned int lbl_820523EC;
extern unsigned int lbl_82052410;


void fn_829AE7D8(int param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 auStack_50 [80];
  
  if ((*(uint *)(param_1 + 0x55c) & 0x40) == 0) {
    fn_829B98E0();
  }
  if ((*(char *)(param_1 + 0x613) != '\0') && ((*(uint *)(param_1 + 0x560) & 2) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x614);
    if (bVar1 == 0) {
      if ((*(uint *)(param_1 + 0x5d4) & 7) != 0) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
LAB_829aea94:
        uVar7 = 0xff;
LAB_829aea98:
        fn_829B9120(param_1,param_3,uVar7);
LAB_829aeaa4:
        fn_829BA710(param_1);
        return;
      }
    }
    else if (bVar1 == 1) {
      if (((*(uint *)(param_1 + 0x5d4) & 7) != 0) || (*(uint *)(param_1 + 0x5b8) < 5)) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar7 = 0xf;
        goto LAB_829aea98;
      }
    }
    else if (bVar1 < 3) {
      if ((*(uint *)(param_1 + 0x5d4) & 7) != 4) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar3 = *(uint *)(param_1 + 0x5d4) & 4;
LAB_829aea50:
        if (uVar3 == 0) goto LAB_829aeaa4;
        goto LAB_829aea94;
      }
    }
    else if (bVar1 == 3) {
      if (((*(uint *)(param_1 + 0x5d4) & 3) != 0) || (*(uint *)(param_1 + 0x5b8) < 3)) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar7 = 0x33;
        goto LAB_829aea98;
      }
    }
    else if (bVar1 < 5) {
      if ((*(uint *)(param_1 + 0x5d4) & 3) != 2) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar3 = *(uint *)(param_1 + 0x5d4) & 2;
        goto LAB_829aea50;
      }
    }
    else if (bVar1 == 5) {
      if (((*(uint *)(param_1 + 0x5d4) & 1) != 0) || (*(uint *)(param_1 + 0x5b8) < 2)) {
        if ((param_3 & 0xffffffff) == 0) goto LAB_829aeaa4;
        uVar7 = 0x55;
        goto LAB_829aea98;
      }
    }
    else if ((bVar1 < 7) && ((*(uint *)(param_1 + 0x5d4) & 1) == 0)) goto LAB_829aeaa4;
  }
  if ((*(uint *)(param_1 + 0x558) & 4) == 0) {
    fn_829AB0F0(param_1,0xffffffff82052538);
  }
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x5cc);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0x5dc);
  do {
    if (*(int *)(param_1 + 0x568) == 0) {
      if (*(int *)(param_1 + 0x5fc) == 0) {
        do {
          fn_829B9B60(param_1,0);
          fn_829B0F38(param_1,auStack_50,4);
          uVar4 = fn_829B9AF0(param_1,auStack_50);
          *(undefined4 *)(param_1 + 0x5fc) = uVar4;
          fn_829AB2C8(param_1);
          fn_829B8F80(param_1,(byte *)(param_1 + 0x60c),4);
          pbVar8 = &lbl_82052410;
          pbVar9 = (byte *)(param_1 + 0x60c);
          do {
            bVar1 = *pbVar9;
            bVar2 = *pbVar8;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar8 = pbVar8 + 1;
          } while (pbVar9 != (byte *)(param_1 + 0x610));
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
            fn_829AB0F0(param_1,0xffffffff82052520);
          }
        } while (*(int *)(param_1 + 0x5fc) == 0);
      }
      *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x5a0);
      *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x59c);
      if (*(uint *)(param_1 + 0x5fc) < *(uint *)(param_1 + 0x5a0)) {
        *(uint *)(param_1 + 0x568) = *(uint *)(param_1 + 0x5fc);
      }
      fn_829B8F80(param_1,*(undefined4 *)(param_1 + 0x59c),*(undefined4 *)(param_1 + 0x568));
      *(int *)(param_1 + 0x5fc) = *(int *)(param_1 + 0x5fc) - *(int *)(param_1 + 0x568);
    }
    iVar5 = fn_829B8A30(param_1 + 0x564,1);
    if (iVar5 == 1) {
      if (((*(int *)(param_1 + 0x574) != 0) || (*(int *)(param_1 + 0x568) != 0)) ||
         (*(int *)(param_1 + 0x5fc) != 0)) {
        fn_829AB0F0(param_1,0xffffffff820524f4);
      }
      *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 8;
      *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x20;
      break;
    }
    if (iVar5 != 0) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x57c);
      if ((ulonglong)*(uint *)(param_1 + 0x57c) == 0) {
        uVar6 = 0xffffffff8205250c;
      }
      fn_829AB0F0(param_1,uVar6);
    }
  } while (*(int *)(param_1 + 0x574) != 0);
  *(byte *)(param_1 + 0x5fb) = *(byte *)(param_1 + 0x619);
  *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5d0);
  *(undefined1 *)(param_1 + 0x5fa) = *(undefined1 *)(param_1 + 0x61a);
  *(undefined1 *)(param_1 + 0x5f9) = *(undefined1 *)(param_1 + 0x617);
  *(undefined1 *)(param_1 + 0x5f8) = *(undefined1 *)(param_1 + 0x616);
  *(int *)(param_1 + 0x5f4) =
       (int)(((longlong)(int)(uint)*(byte *)(param_1 + 0x619) * (longlong)*(int *)(param_1 + 0x5d0)
              + 7U & 0xffffffff) >> 3);
  fn_829B96C0(param_1,param_1 + 0x5f0,*(undefined1 **)(param_1 + 0x5dc) + 1,
                  (ulonglong)*(uint *)(param_1 + 0x5d8) + 1,**(undefined1 **)(param_1 + 0x5dc));
  fn_829B5120(param_1,*(undefined4 *)(param_1 + 0x5d8),*(undefined4 *)(param_1 + 0x5dc),
                  (ulonglong)*(uint *)(param_1 + 0x5c8) + 1);
  if (*(int *)(param_1 + 0x560) != 0) {
    fn_829B0D78(param_1);
  }
  if ((*(char *)(param_1 + 0x613) == '\0') || ((*(uint *)(param_1 + 0x560) & 2) == 0)) {
    if ((param_2 & 0xffffffff) != 0) {
      fn_829B9120(param_1,param_2,0xff);
    }
    if ((param_3 & 0xffffffff) == 0) goto LAB_829aec2c;
    uVar4 = 0xff;
  }
  else {
    if (*(byte *)(param_1 + 0x614) < 6) {
      fn_829B9380(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1);
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_829B9120(param_1,param_3,
                        *(undefined4 *)(&lbl_820523EC + (uint)*(byte *)(param_1 + 0x614) * 4));
    }
    if ((param_2 & 0xffffffff) == 0) goto LAB_829aec2c;
    uVar4 = *(undefined4 *)(&lbl_820523D0 + (uint)*(byte *)(param_1 + 0x614) * 4);
    param_3 = param_2;
  }
  fn_829B9120(param_1,param_3,uVar4);
LAB_829aec2c:
  fn_829BA710(param_1);
  if (*(code **)(param_1 + 0x66c) != (code *)0x0) {
    (**(code **)(param_1 + 0x66c))
              (param_1,*(undefined4 *)(param_1 + 0x5d4),*(undefined1 *)(param_1 + 0x614));
  }
  return;
}

