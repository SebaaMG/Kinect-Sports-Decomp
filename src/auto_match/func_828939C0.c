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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_825089A0();
extern int fn_8251C390();
extern int fn_8265C9E0();
extern int fn_8288CD40();
extern int fn_8288F870();
extern int fn_828921E8();
extern int fn_828922B0();
extern int fn_82892E00();
extern int fn_82897568();
extern int fn_828977F0();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55C0();
extern int fn_828CB3C8();
extern int fn_828CB9B0();
extern int fn_828CCCC0();
extern int fn_828E7140();
extern int fn_829E53B0();
extern unsigned int iStack_54;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


void fn_828939C0(int param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  bool bVar1;
  undefined2 uVar9;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 *puVar5;
  longlong lVar4;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint auStack_70 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [80];
  
  auStack_70[0] = 0;
  fn_8251C390(auStack_50,0xffffffff82023888,0xb5);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  if ((param_3 & 0xffffffff) != 0) {
    fn_828B55C0(param_1 + 0x14,param_3);
  }
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  uVar8 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x54) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x58) = uVar8;
  if (*(char *)(param_4 + 0x26) != '\0') {
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    fn_8289D8D0(uVar8);
    uVar9 = fn_8240D928();
    uVar2 = fn_828A12E8(uVar8);
    uVar2 = fn_8288F870(&uStack_68,uVar2,uVar9,param_2);
    fn_828B55C0(param_1 + 0x14,uVar2);
    fn_828B55B0(&uStack_68);
  }
  uVar3 = fn_8265C9E0(0x18);
  bVar1 = (uVar3 & 0xffffffff) == 0;
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    fn_828B5580(auStack_60,param_1 + 0x14);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = fn_828CB9B0();
    uVar2 = fn_828CB3C8(uVar3,uVar2,uVar8,auStack_60);
  }
  puVar5 = (undefined4 *)fn_828E7140(auStack_58,uVar2);
  uStack_68 = 0;
  uStack_64 = 0;
  fn_828CCCC0(&uStack_68,*puVar5,puVar5[1],0);
  iVar7 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uStack_64;
  *(undefined4 *)(param_1 + 8) = uStack_68;
  if (iVar7 != 0) {
    fn_822315A0();
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  if (!bVar1) {
    fn_828B55B0(auStack_60);
  }
  lVar4 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x30) = 1;
  fn_828B55C0(param_1 + 0x28,param_1 + 0x14);
  auStack_70[0] = (uint)param_2 & 0xffff;
  piVar6 = (int *)fn_8288CD40(&uStack_68,lVar4 + 0x94,auStack_70);
  iVar7 = *piVar6;
  *(int *)(param_1 + 0x38) = iVar7 + 0x10;
  iVar7 = (**(code **)(iVar7 + 0x34))(param_1);
  *(int *)(param_1 + 0x34) = iVar7;
  *(int *)(iVar7 + 0x38) = param_4;
  uVar8 = fn_82897BD0(param_4);
  *(undefined4 *)(iVar7 + 0x3c) = uVar8;
  uVar8 = fn_823AA970(param_4);
  *(undefined4 *)(iVar7 + 0x40) = uVar8;
  fn_82897568(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x30)
                    ,param_1 + 0x20);
  fn_828977F0(*(int *)(param_1 + 0x34),*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x38),1);
  fn_828921E8(param_1 + 0x3c,4,0);
  fn_828922B0(param_1 + 0x3c,4,0);
  uVar2 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
  fn_82892E00(uVar2,param_1);
  piVar6 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar6 + 0xc))();
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  fn_829E53B0(auStack_50);
  return;
}

