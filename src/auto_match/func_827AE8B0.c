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
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A5E30();
extern int fn_826B14D8();
extern int fn_826C3378();
extern int fn_827AE7D0();
extern int fn_827AE860();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


/* WARNING: Type propagation algorithm not settling */

undefined4 * fn_827AE8B0(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uVar4;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_80 [4];
  uint auStack_7c [3];
  int iStack_70;
  undefined1 uStack_6c;
  int iStack_68;
  int iStack_64;
  byte bStack_60;
  undefined1 auStack_50 [80];
  
  uStack_6c = 8;
  iStack_70 = param_2;
  uVar1 = fn_8267B890(*(undefined4 *)(param_2 + 0x288),0x34,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_827AE860(uVar1,&iStack_70);
  }
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  lVar2 = fn_8267B890(*(undefined4 *)(param_2 + 0x288),0x60,0);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = fn_826B14D8(param_2,1);
    uVar5 = fn_827AE7D0(lVar2,&iStack_70,uVar3,param_1);
  }
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
  }
  auStack_7c[1] = 0x21;
  auStack_7c[0] = uVar5;
  fn_826A5E30(param_2 + 0x278,auStack_7c + 1,auStack_7c);
  if (auStack_7c[0] != 0) {
    fn_826824B0();
  }
  iVar6 = fn_826B14D8(param_2,10);
  bStack_60 = 0;
  iStack_68 = *(int *)(iVar6 + 0x3c);
  iVar8 = 0;
  if (iStack_68 != 0) {
    uVar7 = *(int *)(iStack_68 + 8) + 1;
    *(uint *)(iStack_68 + 8) = uVar7;
    *(uint *)(iStack_68 + 8) = uVar7 & 0x8fffffff;
    iVar8 = iStack_68;
  }
  iStack_64 = 0;
  if (*(int *)(iVar6 + 0x40) != 0) {
    fn_826C3378(&iStack_68,*(int *)(iVar6 + 0x40),*(byte *)(iVar6 + 0x44) & 1);
    iVar8 = iStack_68;
  }
  auStack_80[0] = 0;
  iVar6 = *(int *)(iVar8 + 0x10);
  uVar3 = fn_82695750(auStack_50,param_1);
  (**(code **)(iVar6 + 0x28))(iVar8 + 0x10,&iStack_70,param_2 + 0x8c,uVar3,auStack_80);
  fn_82696330(auStack_50);
  if (((bStack_60 & 2) == 0) && (iStack_68 != 0)) {
    fn_826824B0();
  }
  iStack_68 = 0;
  if (((bStack_60 & 1) == 0) && (iStack_64 != 0)) {
    fn_826824B0();
  }
  iStack_64 = 0;
  if (uVar5 != 0) {
    fn_826824B0(uVar5);
  }
  return param_1;
}

