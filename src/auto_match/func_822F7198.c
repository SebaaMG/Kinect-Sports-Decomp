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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_c0;
extern float fRam831ca08c;
extern float fRam831cce30;
extern float fRam831cce34;
extern float fRam831cce38;
extern float fRam831cce3c;
extern float fRam831cce40;
extern float fRam831cce44;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_822E5FA8();
extern int fn_822EAEE0();
extern int fn_822EB2D0();
extern int fn_822F81C0();
extern int fn_8265C9E0();
extern int iRam831cce28;
extern int iRam831cce2c;
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AE6D4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;


uint * fn_822F7198(uint *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 auStack_c0 [2];
  undefined **ppuStack_b8;
  undefined4 uStack_b4;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [112];
  
  lVar1 = fn_8265C9E0(0x4c);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)lVar1;
    puVar2[1] = 1;
    puVar2[2] = 1;
    *puVar2 = &lbl_821AE6D4;
    if (lVar1 != -0xc) {
      fn_822EAEE0();
    }
  }
  uVar4 = (uint)lVar1;
  param_1[1] = uVar4;
  *param_1 = (uint)(lVar1 + 0xc);
  puVar2 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_ac = 0;
    ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_b0);
  }
  *puVar2 = *(undefined4 *)(uVar4 + 0x10);
  puVar2[1] = *(undefined4 *)(uVar4 + 0x10);
  puVar2[2] = *(undefined4 *)(uVar4 + 0x10);
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = 1;
  }
  fn_822EB2D0(auStack_c0,lVar1 + 0xc);
  uVar4 = *param_1;
  puVar2 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_b4 = 0;
    ppuStack_b8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_b8);
  }
  *puVar2 = *(undefined4 *)(uVar4 + 4);
  puVar2[1] = *(undefined4 *)(uVar4 + 4);
  puVar2[2] = *(undefined4 *)(uVar4 + 4);
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined1 *)((int)puVar2 + 0x11) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = 0;
  }
  fn_822EB2D0(auStack_c0,uVar4);
  auStack_c0[0] = 0;
  fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x10,auStack_c0);
  auStack_c0[0] = 1;
  fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x10,auStack_c0);
  auStack_c0[0] = 2;
  fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x10,auStack_c0);
  auStack_c0[0] = 3;
  fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x10,auStack_c0);
  if (*(int *)(*(int *)(param_2 + 0x10) + 0x844) == 4) {
    auStack_c0[0] = 4;
    fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x10,auStack_c0);
    auStack_c0[0] = 5;
    fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x10,auStack_c0);
  }
  piVar3 = (int *)fn_822E5FA8(auStack_a8,*(undefined4 *)(param_2 + 0xc));
  if ((*(int *)(*(int *)*piVar3 + 0x184) == 0) ||
     (bVar5 = true, (float)((int *)*piVar3)[10] <= fRam831ca08c)) {
    bVar5 = false;
  }
  if (iStack_a4 != 0) {
    fn_822315A0();
  }
  if (bVar5) {
    auStack_c0[0] = 3;
LAB_822f7548:
    fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x20,auStack_c0);
  }
  else {
    bVar5 = false;
    piVar3 = (int *)fn_822E5FA8(auStack_a0,*(undefined4 *)(param_2 + 0xc));
    bVar6 = *(float *)(*piVar3 + 0x28) <= fRam831cce30;
    if (iStack_9c != 0) {
      fn_822315A0();
    }
    if (bVar6) {
      piVar3 = (int *)fn_822E5FA8(auStack_98,*(undefined4 *)(param_2 + 0xc));
      bVar6 = *(float *)(*piVar3 + 0x28) < fRam831cce34;
      if (iStack_94 != 0) {
        fn_822315A0();
      }
      if (bVar6) {
        auStack_c0[0] = 1;
        goto LAB_822f7440;
      }
    }
    else {
      auStack_c0[0] = 3;
LAB_822f7440:
      fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x20,auStack_c0);
      bVar5 = true;
    }
    piVar3 = (int *)fn_822E5FA8(auStack_90,*(undefined4 *)(param_2 + 0xc));
    bVar6 = *(float *)(*piVar3 + 0x2c) <= fRam831cce38;
    if (iStack_8c != 0) {
      fn_822315A0();
    }
    if (bVar6) {
      piVar3 = (int *)fn_822E5FA8(auStack_88,*(undefined4 *)(param_2 + 0xc));
      bVar6 = *(float *)(*piVar3 + 0x2c) < fRam831cce3c;
      if (iStack_84 != 0) {
        fn_822315A0();
      }
      if (bVar6) {
        auStack_c0[0] = 0;
        fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x20,auStack_c0);
        bVar5 = true;
      }
      if (bVar5) goto LAB_822f7520;
LAB_822f752c:
      auStack_c0[0] = 2;
      fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x20,auStack_c0);
      auStack_c0[0] = 4;
      goto LAB_822f7548;
    }
    auStack_c0[0] = 5;
    fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x20,auStack_c0);
LAB_822f7520:
    if (iRam831cce28 != 0) goto LAB_822f752c;
  }
  piVar3 = (int *)fn_822E5FA8(auStack_80,*(undefined4 *)(param_2 + 0xc));
  bVar5 = fRam831cce40 <= *(float *)(*piVar3 + 0x24);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (bVar5) {
    piVar3 = (int *)fn_822E5FA8(auStack_78,*(undefined4 *)(param_2 + 0xc));
    bVar5 = *(float *)(*piVar3 + 0x24) <= fRam831cce44;
    if (iStack_74 != 0) {
      fn_822315A0();
    }
    if (bVar5) goto LAB_822f7610;
    auStack_c0[0] = 1;
  }
  else {
    auStack_c0[0] = 0;
  }
  fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x30,auStack_c0);
  if (iRam831cce2c == 0) {
    return param_1;
  }
LAB_822f7610:
  auStack_c0[0] = 2;
  fn_822F81C0(auStack_70,(ulonglong)*param_1 + 0x30,auStack_c0);
  return param_1;
}

