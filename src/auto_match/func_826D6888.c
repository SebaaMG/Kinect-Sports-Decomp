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
extern unsigned int *auStack_60;
extern int fn_8267B7A8();
extern int fn_8267B848();
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C2D8();
extern int fn_8268C590();
extern int fn_826A7828();
extern int fn_827064B8();
extern int fn_8270C6B0();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern U64 storeWordConditionalIndexed();


int fn_826D6888(undefined8 param_1,int param_2,char param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  char in_RESERVE;
  byte bVar9;
  uint auStack_60 [4];
  uint auStack_50 [5];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar4 = fn_8270C6B0();
  fn_8268C590(auStack_60,0xffffffff8200c4fc,uVar4,0xffffffff8200c4f8);
  fn_82F68CC0(auStack_50,param_2,0x20);
  uVar3 = uStack_3c;
  uStack_38 = 3;
  uStack_3c = 0x20000;
  auStack_50[0] = -(uint)(param_3 != '\0') & 0x1000 | auStack_50[0] | 3;
  uVar4 = fn_8267C2D8(lbl_831E7E64,((ulonglong)auStack_60[0] & 0xfffffffc) + 8,auStack_50);
  uVar5 = fn_8267B890(uVar4,0xb90,0);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  bVar9 = bVar1 << 1;
  if (bVar1) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_827064B8(uVar5,uVar4);
  }
  fn_8267B848(uVar4,iVar6);
  *(int *)(iVar6 + 0xb0c) = iVar6;
  *(undefined4 *)(iVar6 + 0xb10) = uVar3;
  *(undefined4 *)(iVar6 + 0xb1c) = *(undefined4 *)(param_2 + 0x20);
  fn_8267B7A8(uVar4,iVar6 + 0xb08);
  fn_826A7828(iVar6 + 0x18,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x24));
  lVar7 = ((ulonglong)auStack_60[0] & 0xfffffffc) + 4;
  do {
    puVar8 = (uint *)lVar7;
    uVar5 = (ulonglong)*puVar8;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
      *puVar8 = uVar2;
      bVar9 = 2;
    }
  } while (!(bool)(bVar9 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return iVar6;
}

