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
extern unsigned int *auStack_150;
extern unsigned int *auStack_250;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_4d0;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_4f8;
extern unsigned int *auStack_520;
extern int fn_82A1F2F8();
extern int fn_82CE06C0();
extern int fn_82F64020();
extern int fn_82F69CA0();
extern int fn_82F6F870();
extern int fn_82F8ED10();
extern int fn_82F8EDC0();
extern int fn_82F8EDD0();
extern int fn_82F8EE20();
extern int fn_82F8EE48();
extern int fn_82F8EE90();
extern int fn_82F8EEE0();
extern int fn_82F8EF78();
extern int fn_82F8F000();
extern int fn_82F8F070();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F91258();
extern int fn_82F91510();
extern int fn_82F91548();
extern int fn_82F93A00();
extern int fn_82F93A68();
extern int fn_82F94390();
extern unsigned int iStack00000014;
extern unsigned int iStack_2c;
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_34;


int fn_82F8E8D0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar5;
  char cVar9;
  int iVar6;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar7;
  undefined8 uVar4;
  int iVar8;
  int iStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined1 auStack_520 [40];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [16];
  undefined1 auStack_4d0 [528];
  undefined1 auStack_2c0 [48];
  undefined1 auStack_290 [48];
  int aiStack_260 [4];
  undefined1 auStack_250 [256];
  undefined1 auStack_150 [284];
  undefined4 uStack_34;
  int iStack_2c;
  
  uVar1 = lbl_831BB8F0;
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  fn_82F90628(auStack_4f8,param_1 + 0xc);
  iVar5 = fn_82F8EDC0(iStack00000014);
  fn_82F8EDD0(auStack_4e0);
  aiStack_260[0] = 0;
  while( true ) {
    if (*(int *)(iStack00000014 + 0x74) <= aiStack_260[0]) break;
    fn_82F64020(auStack_4d0,0x201,0xffffffff8216b91c,iVar5 + aiStack_260[0] * 0xd0 + 8);
    fn_82F69CA0(auStack_4d0,0x201);
    cVar9 = fn_82F91258(uStack00000024,auStack_4d0);
    fn_82F64020(auStack_250,0x100,0xffffffff8216b900,uStack00000024,auStack_4d0,cVar9);
    (**(code **)(*(int *)(iStack00000014 + 8) + 0xc))(iStack00000014 + 8,0,auStack_250);
    if (cVar9 != '\0') {
      fn_82F8EEE0(auStack_4e0,aiStack_260);
    }
    aiStack_260[0] = aiStack_260[0] + 1;
  }
  iVar6 = fn_82F8EE48(auStack_4e0);
  if (iVar6 == 0) {
    fn_82F8EE20(auStack_4e0);
    fn_82F90680(auStack_4f8);
    fn_82F6F870(uVar1);
    iVar8 = -0x7fabffe1;
  }
  else {
    uVar2 = fn_82A1F2F8();
    uVar3 = fn_82F8EE48(auStack_4e0);
    trapWord(6,uVar3,0);
    piVar7 = (int *)fn_82F8EE90(auStack_4e0,
                                    uVar2 - (longlong)
                                            (int)((uVar2 & 0xffffffff) / (uVar3 & 0xffffffff)) *
                                            (longlong)(int)uVar3);
    iVar6 = *piVar7;
    fn_82F91510(auStack_290);
    uVar4 = fn_82F93A00(iStack00000014 + 0x30);
    iVar8 = fn_82F94390(*(undefined4 *)(iVar5 + iVar6 * 0xd0),uStack0000002c,uVar4,auStack_290);
    if (iVar8 == 0) {
      fn_82CE06C0(*(undefined4 *)(iVar5 + iVar6 * 0xd0),auStack_520,0x20);
      fn_82F64020(auStack_150,0x100,0xffffffff8216b8f4,iVar5 + iVar6 * 0xd0 + 8,auStack_520);
      (**(code **)(*(int *)(iStack00000014 + 8) + 0xc))(iStack00000014 + 8,0,auStack_150);
      iVar8 = fn_82F8F070(0x43c);
      if (iVar8 == 0) {
        uStack_34 = 0;
      }
      else {
        uStack_34 = fn_82F8ED10(iVar8);
      }
      fn_82F8EF78(auStack_2c0,uStack_34);
      iStack_2c = fn_82F93A00(auStack_290);
      if (iStack_2c == 0) {
        iStack_2c = 0;
      }
      else {
        iStack_2c = iStack_2c + 4;
      }
      uVar4 = fn_82F93A00(auStack_2c0);
      fn_82F93A68(uVar4,iVar5 + iVar6 * 0xd0 + 8,auStack_520,iStack_2c);
      uVar4 = fn_82F93A00(auStack_2c0);
      fn_82F91548(uStack00000034,uVar4);
      fn_82F8F000(auStack_2c0);
      fn_82F8F000(auStack_290);
      fn_82F8EE20(auStack_4e0);
      fn_82F90680(auStack_4f8);
      fn_82F6F870(uVar1);
      iVar8 = 0;
    }
    else {
      fn_82F8F000(auStack_290);
      fn_82F8EE20(auStack_4e0);
      fn_82F90680(auStack_4f8);
      fn_82F6F870(uVar1);
    }
  }
  return iVar8;
}

