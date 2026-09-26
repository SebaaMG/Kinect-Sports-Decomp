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
extern int fn_8224E978();
extern int fn_8265CA20();
extern int fn_82881EE8();
extern int fn_82895158();
extern int fn_82897BD0();
extern int fn_828AA838();
extern int fn_828EA5F0();
extern int fn_828EBB90();
extern unsigned int lbl_820244C8;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


int * fn_828AAAA0(int *param_1)

{
  undefined8 uVar1;
  int iVar3;
  undefined1 uVar4;
  longlong lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82895158();
  *param_1 = (int)&lbl_820244C8;
  fn_82897BD0(*(undefined4 *)(param_1[0xd] + 0x38));
  uVar1 = fn_82881EE8();
  iVar3 = (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(*(int *)(iVar3 + 0x48) + 0x40))((int *)(iVar3 + 0x48),&uStack_50);
  uStack_48 = uStack_50;
  iVar3 = (**(code **)(*param_1 + 4))(param_1);
  uVar4 = (**(code **)(*(int *)(iVar3 + 0xf0) + 0x3c))();
  lVar2 = (**(code **)(*param_1 + 4))(param_1);
  fn_8224E978(auStack_40,lVar2 + 0x9c);
  iVar3 = fn_828EBB90(auStack_40,&uStack_48,uVar4,uVar1);
  param_1[0x1a] = iVar3;
  if (0xf < uStack_2c) {
    fn_8265CA20(auStack_40[0]);
  }
  uStack_30 = 0;
  uStack_2c = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff;
  uVar1 = (**(code **)(*(int *)(param_1[0xd] + 0x240) + 0x3c))(param_1[0xd] + 0x240);
  fn_828EA5F0(param_1[0x1a],uVar1);
  fn_828AA838(param_1);
  return param_1;
}

