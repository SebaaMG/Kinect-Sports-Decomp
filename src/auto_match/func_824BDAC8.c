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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_82292780();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_8248BFB8();
extern int fn_8248C270();
extern int fn_824BE968();
extern int fn_824BF150();
extern int fn_824BF240();
extern int fn_8251F720();
extern int fn_82536590();
extern int fn_8265C9E0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82191350;
extern unsigned int lbl_821C0618;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int *lbl_8327F848;
extern unsigned int uStack_b0;
extern U64 storeWordConditionalIndexed();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824BDAC8(longlong param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar6;
  undefined8 uVar4;
  undefined4 uVar7;
  int iVar8;
  longlong lVar5;
  byte in_xer_so;
  char in_RESERVE;
  byte in_cr0;
  double dVar9;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [112];
  
  piVar3 = (int *)param_1;
  piVar3[0x14] = param_4;
  piVar3[0x36] = 0;
  dVar9 = (double)lbl_821CC160;
  uStack_b0 = (ulonglong)(((U64)(uStack_b0) >> 32) & 0xFFFFFFFF);
  piVar3[0x37] = (int)lbl_821CC160;
  do {
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(0,0,param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0xe0) = uVar7;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  piVar3[0x39] = 0xb;
  if (param_2 == 0) {
    if (piVar3[0x1e] != 0) {
      (**(code **)(*lbl_8327F848 + 0x54))();
      piVar2 = (int *)piVar3[0x1e];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2,1);
      }
      piVar3[0x1e] = 0;
    }
    if (piVar3[0x14] == 0) {
      fn_82292BC0(0,0,0);
      fn_82292C30(7);
    }
    puVar6 = (undefined4 *)fn_8265C9E0(0x34);
    bVar1 = puVar6 == (undefined4 *)0x0;
    if (bVar1) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar4 = fn_82864988(auStack_a0,0xffffffff821aa470);
      puVar6[1] = piVar3 + 0x1b;
      puVar6[2] = piVar3 + 0x1c;
      *puVar6 = &lbl_821C0618;
      puVar6[3] = piVar3 + 0x1d;
      fn_82292780(puVar6 + 4,uVar4);
    }
    piVar3[0x1e] = (int)puVar6;
    if (!bVar1) {
      fn_82864898(auStack_a0);
    }
    bVar1 = false;
    if (lbl_832659CD != '\0') {
      bVar1 = (*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 3 & 1) == 0;
    }
    if ((param_3 != 0) && (bVar1)) {
      fn_82864988(auStack_70,0xffffffff821c05f0);
      uVar7 = fn_828647D8();
      uStack_b0 = CONCAT44(uVar7,(((U64)(uStack_b0) >> 32) & 0xFFFFFFFF));
      fn_82864898(auStack_70);
      uVar4 = fn_828647D8(param_1 + 0x4bc);
      fn_82536590(&uStack_b0,uVar4);
    }
    (**(code **)(*lbl_8327F848 + 0x50))(lbl_8327F848,piVar3[0x1e]);
  }
  else {
    fn_824BE968(param_1);
  }
  piVar3[0x20] = 0;
  piVar3[0x11] = 1;
  piVar3[0x17] = 0;
  piVar3[0x18] = 0;
  piVar3[0x1a] = 0;
  *(undefined4 *)(*(int *)(*piVar3 + 0x14) + 0x20) = 0;
  if ((piVar3[10] - piVar3[9]) / 0x28 != 0) {
    fn_824BF150(param_1);
    fn_8248C270(*piVar3,*(undefined4 *)piVar3[0xd]);
  }
  bVar1 = (piVar3[2] - piVar3[1]) / 0x28 == 0;
  in_xer_so = bVar1 << 1 | in_xer_so;
  if (!bVar1) {
    fn_824BF240(param_1);
    uStack_b0 = (ulonglong)(uint)((int *)piVar3[5])[4];
    for (iVar8 = *(int *)(*piVar3 + 0x18); iVar8 != *(int *)(*piVar3 + 0x1c); iVar8 = iVar8 + 0x68)
    {
      if (*(int *)(iVar8 + 0x2c) == *(int *)piVar3[5]) {
        dVar9 = (double)*(float *)(iVar8 + 0x30);
        break;
      }
    }
    fn_8248BFB8((double)(float)(dVar9 - (double)((float)uStack_b0 * lbl_82191350)));
  }
  if (piVar3[0x151] == 0) {
    if (piVar3[0x138] != 0) {
      iVar8 = fn_8251F720(param_1 + 0x4e0,0);
      piVar3[0x3a] = iVar8;
    }
    iVar8 = piVar3[0x139];
    lVar5 = param_1 + 0x4e4;
  }
  else {
    if (piVar3[0x13a] != 0) {
      iVar8 = fn_8251F720(param_1 + 0x4e8,0);
      piVar3[0x3a] = iVar8;
    }
    iVar8 = piVar3[0x13b];
    lVar5 = param_1 + 0x4ec;
  }
  if (iVar8 != 0) {
    iVar8 = fn_8251F720(lVar5,0);
    piVar3[0x3b] = iVar8;
  }
  if (piVar3[0x13c] != 0) {
    iVar8 = fn_8251F720(param_1 + 0x4f0,0);
    piVar3[0x3c] = iVar8;
  }
  do {
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(0,0,param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x6c) = uVar7;
      in_xer_so = 2;
    }
  } while (!(bool)(in_xer_so >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(0,0,param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x70) = uVar7;
      in_xer_so = 2;
    }
  } while (!(bool)(in_xer_so >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(0,0,param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x74) = uVar7;
      in_xer_so = 2;
    }
  } while (!(bool)(in_xer_so >> 1 & 1));
  return;
}

