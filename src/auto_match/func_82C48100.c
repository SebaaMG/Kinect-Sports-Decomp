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
extern unsigned int *auStack_80;
extern unsigned int *auStack_84;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern int fn_82C5E518();
extern int fn_82C80278();
extern int fn_82C81730();
extern int fn_82C818C8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_62;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_90;


undefined8
fn_82C48100(int param_1,int param_2,ushort param_3,undefined8 param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 in_stack_00000054;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  int iStack_6c;
  uint uStack_68;
  undefined2 uStack_64;
  ushort uStack_62;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x2e0);
    iStack_6c = (int)param_4;
    uStack_70 = 0x28;
    uStack_64 = 1;
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar3 = (uint)param_3 * iStack_6c;
      iStack_5c = ((param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f)) *
                  (((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0) + 3 & 0xfffffffc);
    }
    else {
      uVar3 = (uint)param_3 * iStack_6c * param_5;
      iStack_5c = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_68 = param_5;
    uStack_62 = param_3;
    iStack_60 = param_2;
    fn_82C5E518(uVar1,auStack_8c,auStack_88);
    fn_82C818C8(uVar1,&uStack_70,&uStack_90,param_6,param_7,0,0,param_4);
    uVar3 = (uint)uStack_62 * (int)param_6 * (int)param_7;
    fn_82C81730(uStack_90,param_8,iStack_5c,auStack_80,in_stack_00000054,
                      (longlong)((int)uVar3 >> 3) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 7) != 0),
                      auStack_84);
    fn_82C80278(uStack_90);
    uVar2 = 0;
  }
  return uVar2;
}

