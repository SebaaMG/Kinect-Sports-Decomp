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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828A1D70();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828CCCC0();
extern int fn_828DF918();
extern int fn_828E4988();
extern int fn_828E6EC0();
extern int fn_828E7140();
extern int fn_828E7708();
extern int fn_828E8EF8();
extern int fn_828E8F80();
extern int fn_828E97F8();
extern unsigned int iStack_44;
extern unsigned int iStack_64;
extern unsigned int lbl_82027474;
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern U64 storeWordConditionalIndexed();


int fn_828E9B20(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined1 auStack_4c [8];
  int iStack_44;
  
  fn_828B5580(auStack_70,param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = fn_828B55F8(auStack_70);
  uVar4 = fn_828E97F8(uVar1,uVar4);
  fn_828E4988(param_1,uVar4);
  fn_828B55B0(auStack_70);
  fn_828B5580(param_1 + 0x38,param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar4 = fn_828E8F80();
  fn_828DF918(&uStack_78,uVar1,uVar4);
  uVar3 = uStack_74;
  uVar7 = (ulonglong)uStack_74;
  if (uVar7 != 0) {
    do {
      puVar8 = (uint *)(uVar7 + 4);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,uVar7 + 4);
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  uStack_7c = uStack_74;
  uStack_80 = uStack_78;
  puVar5 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fn_828E6EC0(puVar5,0xffffffff8315a35c,&uStack_80);
    *puVar5 = &lbl_82027474;
  }
  puVar5 = (undefined4 *)fn_828E7140(auStack_68,puVar5);
  uStack_80 = 0;
  uStack_7c = 0;
  fn_828CCCC0(&uStack_80,*puVar5,puVar5[1],0);
  iVar6 = *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uStack_7c;
  *(undefined4 *)(param_1 + 8) = uStack_80;
  if (iVar6 != 0) {
    fn_822315A0();
  }
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  uStack_60 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x28);
  fn_828B5580(auStack_5c,param_1 + 0x38);
  uStack_50 = uStack_60;
  fn_828B5580(auStack_4c,auStack_5c);
  iStack_44 = param_1;
  uVar4 = fn_828E8EF8();
  iVar6 = fn_828A1D70();
  if ((undefined4 *)(iVar6 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar6 + 0xc) = uStack_50;
    fn_828B5580(iVar6 + 0x10,auStack_4c);
    *(int *)(iVar6 + 0x18) = iStack_44;
  }
  fn_828E7708(&uStack_80,uVar4,iVar6,0);
  fn_828B55B0(auStack_4c);
  fn_828B55B0(auStack_5c);
  if (uVar3 != 0) {
    fn_822315A0(uVar7);
  }
  if (uStack_74 != 0) {
    fn_822315A0();
  }
  return param_1;
}

