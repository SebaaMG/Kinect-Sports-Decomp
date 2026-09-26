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
extern unsigned int *auStack_40;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A5E30();
extern int fn_826B14D8();
extern int fn_8271E4E8();
extern int fn_8271F950();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


/* WARNING: Type propagation algorithm not settling */

undefined4 * fn_8271F9D8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar6;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar7;
  undefined1 auStack_60 [4];
  uint auStack_5c [3];
  int iStack_50;
  undefined1 uStack_4c;
  undefined1 auStack_40 [64];
  
  uStack_4c = 8;
  iStack_50 = param_2;
  uVar3 = fn_8267B890(*(undefined4 *)(param_2 + 0x288),0x34,0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_8271E4E8(uVar3,&iStack_50);
  }
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  lVar4 = fn_8267B890(*(undefined4 *)(param_2 + 0x288),0x50,0);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = fn_826B14D8(param_2,1);
    uVar7 = fn_8271F950(lVar4,&iStack_50,uVar5,param_1);
  }
  if (uVar7 != 0) {
    *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
  }
  auStack_5c[1] = 0x15;
  auStack_5c[0] = uVar7;
  fn_826A5E30(param_2 + 0x278,auStack_5c + 1,auStack_5c);
  if (auStack_5c[0] != 0) {
    fn_826824B0();
  }
  auStack_60[0] = 0;
  iVar1 = *(int *)(param_2 + 0x2a0);
  iVar2 = *(int *)(iVar1 + 0x10);
  uVar5 = fn_82695750(auStack_40,param_1);
  (**(code **)(iVar2 + 0x28))(iVar1 + 0x10,&iStack_50,param_2 + 0x5c,uVar5,auStack_60);
  fn_82696330(auStack_40);
  if (uVar7 != 0) {
    fn_826824B0(uVar7);
  }
  return param_1;
}

