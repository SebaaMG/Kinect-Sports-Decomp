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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_ad0;
extern unsigned int *auStack_b00;
extern unsigned int *auStack_b10;
extern int fn_822315A0();
extern int fn_823D22D0();
extern int fn_824B42C8();
extern int fn_82517978();
extern int fn_82A1DD38();
extern int fn_82E581C0();
extern int fn_82F50CC0();
extern int fn_82F50FC8();
extern int fn_82F534F8();
extern int fn_82F564D8();
extern int fn_82F57338();
extern int fn_82F5A6A0();
extern int fn_8306ED30();
extern unsigned int iStack_b1c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BAB30;
extern unsigned int uStack_b20;
extern U64 storeWordConditionalIndexed();


void fn_82F51AC0(undefined8 param_1,int *param_2)

{
  undefined8 in_r0;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  char in_RESERVE;
  byte in_cr0;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_b20;
  int iStack_b1c;
  undefined1 auStack_b10 [4];
  int *piStack_b0c;
  undefined1 auStack_b00 [48];
  undefined1 auStack_ad0 [2768];
  
  fn_82F50CC0(*(undefined4 *)(param_2[1] + 8));
  lVar1 = fn_82E581C0(*(undefined4 *)(param_2[1] + 8));
  if (lVar1 != *(longlong *)(param_2[1] + 2000)) {
    puVar4 = (undefined4 *)param_2[1];
    uVar2 = fn_823D22D0(*puVar4);
    fn_82F50FC8(param_2,uVar2,puVar4 + 4);
    dVar9 = (double)fn_824B42C8(lVar1 - *(longlong *)(param_2[1] + 2000));
    uVar8 = 0x1d0;
    lVar7 = 0;
    dVar10 = (double)(float)((double)lbl_82002AE0 / dVar9);
    do {
      iVar3 = fn_82F564D8(&uStack_b20,*(undefined4 *)param_2[1],lVar7);
      puVar4 = (undefined4 *)((int)in_r0 + iVar3 & 0xfffffff0);
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      fn_8306ED30();
      fn_82F534F8(dVar10);
      puVar4 = (undefined4 *)(uVar8 + param_2[1] & 0xfffffff0);
      *puVar4 = uVar11;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar4 = (undefined4 *)((uVar8 + param_2[1]) - 0x1a0 & 0xfffffff0);
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      fn_8306ED30();
      fn_82F534F8(dVar10);
      lVar7 = lVar7 + 1;
      iVar3 = uVar8 + param_2[1];
      uVar8 = uVar8 + 0x10;
      puVar4 = (undefined4 *)(iVar3 + 0x140U & 0xfffffff0);
      *puVar4 = uVar11;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
    } while (uVar8 < 0x310);
    (**(code **)(**(int **)(param_2[1] + 8) + 8))(*(int **)(param_2[1] + 8),auStack_b00);
    uVar2 = fn_823D22D0(*(undefined4 *)param_2[1]);
    fn_82A1DD38(auStack_ad0,uVar2,0x1c0);
    puVar4 = (undefined4 *)fn_82F57338(auStack_b10,*(undefined4 *)param_2[1]);
    uStack_b20 = 0;
    iStack_b1c = 0;
    fn_82517978(&uStack_b20,*puVar4,puVar4[1],0);
    dVar10 = (double)fn_82F5A6A0(uStack_b20,0);
    if (iStack_b1c != 0) {
      fn_822315A0();
    }
    if (ZEXT48(piStack_b0c) != 0) {
      lVar7 = ZEXT48(piStack_b0c) + 8;
      do {
        puVar6 = (uint *)lVar7;
        lVar5 = (ulonglong)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar8 = storeWordConditionalIndexed(lVar5,0,lVar7);
          *puVar6 = uVar8;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar5 == 0) {
        (**(code **)(*piStack_b0c + 4))();
      }
    }
    if (((double)lbl_831BAB30 <= dVar10) ||
       (iVar3 = (**(code **)(*param_2 + 4))(param_2), iVar3 == 0)) {
      *(undefined4 *)(param_2[1] + 0x7f0) = lbl_821AAD20;
    }
    else {
      *(float *)(param_2[1] + 0x7f0) = (float)((double)*(float *)(param_2[1] + 0x7f0) + dVar9);
    }
    uVar2 = fn_823D22D0(*(undefined4 *)param_2[1]);
    fn_82A1DD38((ulonglong)(uint)param_2[1] + 0x450,uVar2,0x1c0);
    fn_82A1DD38((ulonglong)(uint)param_2[1] + 0x610,(ulonglong)(uint)param_2[1] + 0x10,0x1c0);
    *(longlong *)(param_2[1] + 2000) = lVar1;
  }
  (**(code **)(*param_2 + 8))(param_1,param_2);
  return;
}

