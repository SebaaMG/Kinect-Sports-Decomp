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
extern int fn_8288F730();
extern int fn_82897BD0();
extern int fn_8289F350();
extern int fn_828B5580();
extern int fn_828B57E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828C7498(int param_1,undefined8 param_2)

{
  int iVar4;
  int iVar5;
  longlong lVar1;
  undefined4 uVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar7;
  undefined1 auStack_40 [64];
  
  iVar7 = param_1 + 0x80;
  fn_828B57E8(iVar7,*(undefined4 *)(param_1 + 0x6c),param_2);
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = fn_828E9FF8(param_2,1);
  }
  *(char *)(param_1 + 0xa5) = '\x01' - (lVar1 == 0);
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 8) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_828E9FF8(param_2,8);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < 0x10) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_828E9FF8(param_2,0x10);
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  lVar1 = fn_8289F350(*(undefined4 *)(param_1 + 0x6c));
  *(bool *)(param_1 + 0xa4) = lVar1 != 0;
  if (lVar1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x6c);
    uVar2 = fn_82897BD0();
    uVar3 = fn_828B5580(auStack_40,iVar7);
    fn_8288F730(uVar6,uVar3,uVar2,param_2,param_1 + 0x90);
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x6c);
    uVar2 = fn_828B5580(auStack_40,iVar7);
    fn_8288F730(uVar6,uVar2,0xffffffffffffffff,param_2,param_1 + 0x90);
  }
  return;
}

