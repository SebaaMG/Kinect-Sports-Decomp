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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82882290();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289DC60();
extern int fn_8289EEE0();
extern int fn_828A17A0();
extern int fn_828A2CF8();
extern int fn_828A3248();
extern int fn_828A3578();
extern int fn_828A8BA8();
extern int fn_828A8BB8();
extern int fn_828ACBD8();
extern int fn_828ACDB8();
extern int fn_828ACE38();
extern int fn_828AD0F8();
extern int fn_828AD740();
extern int fn_828AE3A8();
extern int fn_828AE888();
extern int fn_828AEA30();
extern int fn_828AEC80();
extern int fn_828AEC98();
extern int fn_828BE158();
extern int fn_828C0038();
extern int fn_828D0D98();
extern int fn_828D20A0();
extern int fn_828D3318();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int lbl_83213FC8;


void fn_828A3CB8(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar8;
  ulonglong uVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  int aiStack_40 [2];
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iVar7 = *(int *)(param_1 + 0xb8);
  if (6 < iVar7 - 1U) {
    return;
  }
  if (iVar7 == 2) {
    if (*(char *)(param_1 + 0xa4) == '\0') {
      fn_828C0038(4);
      cVar8 = fn_828ACBD8(param_1);
      if (cVar8 == '\0') {
        return;
      }
      fn_828AE888(param_1,0x12);
      return;
    }
LAB_828a3de4:
    fn_828AE888(param_1,*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  if (iVar7 == 3) {
    if ((*(char *)(param_1 + 0x1dc) != '\0') &&
       ((*(int *)(param_1 + 0x1e4) - *(int *)(param_1 + 0x1e0) & 0xfffffffcU) == 0)) {
      bVar2 = true;
      aiStack_40[0] = **(int **)(param_1 + 0x230);
      if ((int *)aiStack_40[0] != *(int **)(param_1 + 0x230)) {
        do {
          uVar6 = *(undefined4 *)(aiStack_40[0] + 0x10);
          cVar8 = fn_828AEC80(uVar6);
          if (cVar8 != '\0') {
            cVar8 = fn_828AEC98(uVar6);
            bVar2 = (bool)(cVar8 != '\0' & bVar2);
          }
          fn_82381BC0(aiStack_40);
        } while (aiStack_40[0] != *(int *)(param_1 + 0x230));
      }
      if (bVar2) {
        *(undefined1 *)(param_1 + 0x1dc) = 0;
        uVar3 = fn_8265C9E0(0xd8);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = fn_828D20A0(uVar3,2);
        }
        fn_82886518(uVar4,0xffffffffffffffff,0xffffffffffffffff);
        fn_8289EEE0(param_1);
        uVar5 = fn_82897BD0();
        fn_828BE158(param_1,uVar4,uVar5,0);
      }
    }
    if (*(char *)(param_1 + 0xa4) == '\0') {
      fn_828C0038(5);
      cVar8 = fn_828ACBD8(param_1);
      if (cVar8 == '\0') {
        return;
      }
      fn_828AE888(param_1,0x13);
      return;
    }
    goto LAB_828a3de4;
  }
  if (iVar7 == 4) {
    cVar8 = fn_828AD740(param_1);
    if (cVar8 == '\0') {
      cVar8 = fn_828A8BA8(param_1);
      if (cVar8 == '\0') {
        fn_828C0038(8);
        cVar8 = fn_828ACBD8(param_1);
        if (cVar8 == '\0') {
          return;
        }
        fn_828AE888(param_1,0x14);
        return;
      }
      fn_828ACDB8(param_1,5);
      cVar8 = fn_828AD0F8(param_1);
      if (cVar8 == '\0') {
        return;
      }
      uVar3 = (ulonglong)lbl_83213FC8;
      if (uVar3 == 0) {
        uVar3 = fn_828A17A0();
      }
      fn_828D0D98(auStack_30,uVar3);
      if (iStack_2c == 0) {
        return;
      }
      fn_822315A0();
      return;
    }
    *(undefined1 *)(param_1 + 200) = 1;
    fn_828A8BB8();
    fn_828ACDB8(param_1,5);
    cVar8 = fn_828AD0F8(param_1);
    if (cVar8 == '\0') {
      return;
    }
    uVar3 = (ulonglong)lbl_83213FC8;
    if (uVar3 == 0) {
      uVar3 = fn_828A17A0();
    }
    fn_828D0D98(auStack_38,uVar3);
    if (iStack_34 == 0) {
      return;
    }
    fn_822315A0();
    return;
  }
  if (iVar7 == 5) {
    if (*(char *)(param_1 + 0xa4) != '\x01') {
      return;
    }
    fn_828AE3A8(param_1,*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  if (iVar7 != 6) {
    if (iVar7 == 1) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
      if (iVar7 != 0) {
        if (iVar7 == 2) {
          cVar8 = fn_828ACE38(param_1,1);
          if (cVar8 == '\0') {
            fn_828AE888(param_1,7);
            return;
          }
        }
        else {
          if (iVar7 != 4) {
            return;
          }
          cVar8 = fn_828ACE38(param_1,0);
          if (cVar8 == '\0') {
            fn_828AE888(param_1,8);
            return;
          }
        }
        uVar3 = fn_8265C9E0(0x28);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_828D3318(uVar3,param_1);
        }
        puVar1 = *(undefined4 **)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x58) = uVar6;
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
        (**(code **)*puVar1)(puVar1,1);
        return;
      }
      *(undefined4 *)(param_1 + 0xb4) = 2;
      fn_828ACDB8(param_1,7);
    }
    else if (*(int *)(*(int *)(param_1 + 0x8c) + 8) != 0) {
      return;
    }
    fn_828AEA30(param_1);
    fn_828ACDB8(param_1,0);
    return;
  }
  bVar2 = false;
  fn_828C0038(10);
  cVar8 = fn_828ACBD8(param_1);
  if (cVar8 == '\0') {
    fn_8289D8D0(param_1);
    cVar8 = fn_8289DAD0();
    if (cVar8 != '\0') {
      bVar2 = true;
      aiStack_40[0] = **(int **)(param_1 + 0x230);
      if ((int *)aiStack_40[0] != *(int **)(param_1 + 0x230)) {
        do {
          if (bVar2) {
            cVar8 = fn_8289DC60(*(undefined4 *)(aiStack_40[0] + 0x10));
            bVar2 = true;
            if (cVar8 == '\0') goto LAB_828a40f8;
          }
          else {
LAB_828a40f8:
            bVar2 = false;
          }
          fn_82381BC0(aiStack_40);
        } while (aiStack_40[0] != *(int *)(param_1 + 0x230));
      }
      goto LAB_828a4168;
    }
    fn_8289EEE0(param_1);
    cVar8 = fn_8289DC60();
    if (cVar8 == '\0') {
      fn_8289EEE0(param_1);
      iVar7 = fn_82897BD0();
      if (iVar7 != -1) {
        fn_8289EEE0(param_1);
        fn_82897BD0();
        cVar8 = fn_82882290();
        if (cVar8 == '\0') goto LAB_828a4168;
      }
    }
  }
  bVar2 = true;
LAB_828a4168:
  if (!bVar2) {
    return;
  }
  aiStack_40[0] = **(int **)(param_1 + 0x220);
  if ((int *)aiStack_40[0] != *(int **)(param_1 + 0x220)) {
    do {
      puVar1 = *(undefined4 **)(aiStack_40[0] + 0x10);
      fn_82381BC0(aiStack_40);
      fn_823AA970(puVar1);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    } while (aiStack_40[0] != *(int *)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 0x23c) = 0;
  fn_828A2CF8(param_1 + 0x268);
  fn_828A3248(param_1 + 600);
  fn_828A3578(param_1 + 0x2f4);
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x20))();
  fn_828ACDB8(param_1,7);
  return;
}

