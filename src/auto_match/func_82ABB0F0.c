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
extern int fn_82ABA770();
extern int fn_82ABAB58();


longlong fn_82ABB0F0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      ulonglong param_5,int *param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int aiStack_30 [12];
  
  *param_1 = 0xc;
  aiStack_30[0] = 1;
  lVar1 = fn_82ABA770(param_1 + 1,param_2,param_3,aiStack_30,param_7);
  uVar4 = 0xe40000;
  uVar5 = -(uint)((param_4 & 0xf000000) == 0xd000000) & 0x10000;
  *(undefined4 *)lVar1 = 0x440020;
  if ((param_4 & 0xff0000) == 0xe40000) {
    lVar1 = lVar1 + 4;
    *(uint *)lVar1 = uVar5 | 0x3210;
  }
  else {
    uVar2 = fn_82ABAB58(param_4);
    lVar1 = lVar1 + 4;
    *(uint *)lVar1 = uVar2 | uVar5;
  }
  lVar1 = lVar1 + 4;
  iVar6 = aiStack_30[0] + 2;
  if ((param_5 & 0xffffffff) == (uVar4 & 0xffffffff)) {
    aiStack_30[0] = aiStack_30[0] + 3;
    *(undefined4 *)lVar1 = 0x40021;
  }
  else {
    *(undefined4 *)lVar1 = 0x440021;
    uVar3 = fn_82ABAB58(param_5);
    lVar1 = lVar1 + 4;
    *(undefined4 *)lVar1 = uVar3;
    aiStack_30[0] = iVar6 + 2;
  }
  *param_6 = *param_6 + aiStack_30[0];
  return lVar1 + 4;
}

