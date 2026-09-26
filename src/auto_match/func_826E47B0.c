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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_826861C8();
extern int fn_82686CA8();
extern int fn_82687270();
extern int fn_826874B8();
extern int fn_82687570();
extern int fn_82687AB8();
extern int fn_8268C590();
extern int fn_826D9298();
extern int fn_826DB5E8();
extern int fn_826DC518();
extern unsigned int iStack_68;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;
extern U64 storeWordConditionalIndexed();


ulonglong fn_826E47B0(int param_1,int param_2,undefined8 param_3,int *param_4,undefined8 param_5,
                       undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar7;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar8;
  uint *puVar9;
  char in_RESERVE;
  byte bVar10;
  uint auStack_70 [2];
  int iStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iStack_68 = 0;
  uStack_64 = 0;
  fn_826D9298(&piStack_60,param_2,uVar2);
  iVar7 = fn_82687AB8(*(undefined4 *)(param_1 + 0x38),&iStack_68,&piStack_60);
  if (iVar7 != 3) {
    uVar4 = fn_82686CA8(&iStack_68);
    if (uVar4 != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_826e4a04;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      if (iStack_68 < 2) {
        uVar6 = 0xffffffff82196582;
      }
      else {
        uVar6 = fn_826861C8(uStack_64);
      }
      fn_82683F88((ulonglong)*(uint *)(param_1 + 0xc) + 0xc,0xffffffff8200d370,uVar6);
    }
    goto LAB_826e4950;
  }
  uVar4 = fn_8267B890(lbl_831E7E64,0x20,0);
  bVar1 = (uVar4 & 0xffffffff) == 0;
  bVar10 = bVar1 << 1;
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_826DC518(uVar4,param_2,uVar2,*(int *)(param_1 + 0x3c),param_3,
                          *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x14),0,0);
  }
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 1;
  }
  if (param_4 == (int *)0x0) {
LAB_826e48c0:
    if ((uVar4 & 0xffffffff) != 0) {
      fn_826874B8(uStack_64,uVar4);
LAB_826e4a04:
      if (piStack_60 != (int *)0x0) {
        (**(code **)(*piStack_60 + 8))(piStack_60,uStack_5c);
      }
      if (iStack_68 == 1) {
        fn_82687270(uStack_64);
        return uVar4;
      }
      if (iStack_68 < 2) {
        return uVar4;
      }
      fn_8267C4F0(uStack_64);
      return uVar4;
    }
  }
  else {
    uVar5 = fn_8267B890(lbl_831E7E64,0x34,0);
    bVar1 = (uVar5 & 0xffffffff) == 0;
    bVar10 = bVar1 << 1;
    if (bVar1) {
      iVar7 = 0;
    }
    else {
      iVar7 = fn_826DB5E8(uVar5,param_1,uVar4,param_6);
    }
    *param_4 = iVar7;
    if (iVar7 != 0) goto LAB_826e48c0;
    if ((uVar4 & 0xffffffff) != 0) {
      fn_82687270(uVar4);
      uVar4 = 0;
      goto LAB_826e48c0;
    }
  }
  fn_8268C590(auStack_70,0xffffffff8200d37c,
                    ((ulonglong)*(uint *)(*(int *)(param_2 + 0x20) + 0x24) & 0xfffffffc) + 8,
                    0xffffffff8200d338);
  fn_82687570(uStack_64,((ulonglong)auStack_70[0] & 0xfffffffc) + 8);
  lVar8 = ((ulonglong)auStack_70[0] & 0xfffffffc) + 4;
  do {
    puVar9 = (uint *)lVar8;
    uVar4 = (ulonglong)*puVar9;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar4 - 1,0,lVar8);
      *puVar9 = uVar3;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (uVar4 == 1) {
    fn_8267BE38();
  }
LAB_826e4950:
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 8))(piStack_60,uStack_5c);
  }
  if (iStack_68 == 1) {
    fn_82687270(uStack_64);
  }
  else if (1 < iStack_68) {
    fn_8267C4F0(uStack_64);
  }
  return 0;
}

