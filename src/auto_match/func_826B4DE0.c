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
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_8269F500();
extern int fn_826ADE60();
extern int fn_826AEA50();
extern int fn_826B44A0();
extern int fn_826BD868();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_90;
extern unsigned int uStack_8c;


undefined8
fn_826B4DE0(char *param_1,undefined8 param_2,int *param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  bool bVar1;
  char cVar4;
  int iVar3;
  undefined8 uVar2;
  longlong lVar5;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  byte bStack_80;
  char acStack_70 [16];
  undefined1 auStack_60 [96];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 == '\0') {
    return 0;
  }
  uStack_8c = 0;
  auStack_60[0] = 0;
  acStack_70[0] = '\0';
  iStack_90 = fn_82694700((ulonglong)*(uint *)(param_4 + 0x78) + 0x254,param_1);
  *(int *)(iStack_90 + 8) = *(int *)(iStack_90 + 8) + 1;
  cVar4 = fn_826B44A0(param_4,&iStack_90,auStack_60,0,&uStack_8c,acStack_70,0);
  lVar5 = (ulonglong)*(uint *)(iStack_90 + 8) - 1;
  *(int *)(iStack_90 + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(iStack_90);
  }
  if (cVar4 == '\0') {
    if (param_3 != (int *)0x0) {
      iVar3 = (**(code **)(*param_3 + 8))(param_3);
      if ((iVar3 < 2) || (bVar1 = true, 5 < iVar3)) {
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = fn_826BD868(param_3);
        iVar3 = *(int *)(iVar3 + 0x80);
        if (iVar3 == 0) {
          iVar3 = fn_8269F500();
        }
        fn_826ADE60(param_4,0xffffffff82007b8c,**(undefined4 **)(iVar3 + 0xc),param_1);
        goto LAB_826b4f28;
      }
    }
    fn_826ADE60(param_4,0xffffffff82007b60,param_1);
    goto LAB_826b4f28;
  }
  fn_82696B20(&iStack_88,auStack_60,param_4);
  if (iStack_88 != 0) {
    if ((acStack_70[0] == '\a') || (acStack_70[0] == '\x06')) {
      param_3 = (int *)fn_82696AD0(acStack_70,param_4);
    }
    else if (uStack_8c != 0) {
      param_3 = (int *)(uStack_8c + 0x68);
    }
    uVar2 = fn_826AEA50(auStack_60,param_2,param_3,param_4,param_5,param_6,param_1);
    if (((bStack_80 & 2) == 0) && (iStack_88 != 0)) {
      fn_826824B0();
    }
    iStack_88 = 0;
    if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
      fn_826824B0();
    }
    iStack_84 = 0;
    fn_82696330(acStack_70);
    fn_82696330(auStack_60);
    return uVar2;
  }
  if (param_3 == (int *)0x0) {
LAB_826b4fd8:
    fn_826ADE60(param_4,0xffffffff82007afc,param_1);
  }
  else {
    iVar3 = (**(code **)(*param_3 + 8))(param_3);
    if ((iVar3 < 2) || (bVar1 = true, 5 < iVar3)) {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_826b4fd8;
    iVar3 = fn_826BD868(param_3);
    iVar3 = *(int *)(iVar3 + 0x80);
    if (iVar3 == 0) {
      iVar3 = fn_8269F500();
    }
    fn_826ADE60(param_4,0xffffffff82007b2c,**(undefined4 **)(iVar3 + 0xc),param_1);
  }
  if (((bStack_80 & 2) == 0) && (iStack_88 != 0)) {
    fn_826824B0();
  }
  iStack_88 = 0;
  if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
    fn_826824B0();
  }
  iStack_84 = 0;
LAB_826b4f28:
  fn_82696330(acStack_70);
  fn_82696330(auStack_60);
  return 0;
}

