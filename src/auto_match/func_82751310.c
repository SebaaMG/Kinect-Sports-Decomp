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
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A5E30();
extern int fn_826B0E90();
extern int fn_826B14D8();
extern int fn_8274E9D8();
extern int fn_82751238();
extern int fn_827512C0();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


/* WARNING: Type propagation algorithm not settling */

undefined4 * fn_82751310(undefined4 *param_1,int param_2)

{
  int iVar4;
  ulonglong uVar1;
  undefined4 uVar5;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar6;
  undefined1 auStack_70 [4];
  uint auStack_6c [3];
  int iStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  int iStack_54;
  byte bStack_50;
  undefined1 auStack_40 [64];
  
  auStack_6c[0] = *(uint *)(param_2 + 0x9c);
  *(int *)(auStack_6c[0] + 8) = *(int *)(auStack_6c[0] + 8) + 1;
  iVar4 = fn_826B0E90(param_2,auStack_6c);
  if (iVar4 == 0) {
    fn_8274E9D8(&iStack_58,param_2);
    if (((bStack_50 & 2) == 0) && (iStack_58 != 0)) {
      fn_826824B0();
    }
    iStack_58 = 0;
    if (((bStack_50 & 1) == 0) && (iStack_54 != 0)) {
      fn_826824B0();
    }
    iStack_54 = 0;
  }
  uStack_5c = 8;
  iStack_60 = param_2;
  uVar1 = fn_8267B890(*(undefined4 *)(param_2 + 0x288),0x34,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_827512C0(uVar1,&iStack_60);
  }
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  lVar2 = fn_8267B890(*(undefined4 *)(param_2 + 0x288),0x5c,0);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = fn_826B14D8(param_2,0x25);
    uVar6 = fn_82751238(lVar2,&iStack_60,uVar3,param_1);
  }
  if (uVar6 != 0) {
    *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
  }
  auStack_6c[1] = 0x27;
  auStack_6c[0] = uVar6;
  fn_826A5E30(param_2 + 0x278,auStack_6c + 1,auStack_6c);
  if (auStack_6c[0] != 0) {
    fn_826824B0();
  }
  auStack_70[0] = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x29c) + 0x10);
  uVar3 = fn_82695750(auStack_40,param_1);
  (**(code **)(iVar4 + 0x28))
            ((ulonglong)*(uint *)(param_2 + 0x29c) + 0x10,&iStack_60,param_2 + 0xa4,uVar3,auStack_70
            );
  fn_82696330(auStack_40);
  if (uVar6 != 0) {
    fn_826824B0(uVar6);
  }
  return param_1;
}

