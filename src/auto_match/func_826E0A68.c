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
extern unsigned int *auStack_58;
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_826A6A38();
extern int fn_826C8C70();
extern int fn_826E0920();
extern int fn_826E8660();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern U64 storeWordConditionalIndexed();


void fn_826E0A68(int param_1,undefined4 *param_2)

{
  uint uVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  char in_RESERVE;
  byte in_cr0;
  byte bVar8;
  uint uStack_60;
  uint uStack_5c;
  uint auStack_58 [2];
  int iStack_50;
  int iStack_4c;
  
  iVar7 = *(int *)(param_1 + 0x314);
  if (iVar7 == 0) {
    iVar7 = param_1 + 0x28;
  }
  uVar4 = fn_826A6A38(param_1);
  uVar1 = fn_826A6A38(param_1);
  uVar2 = fn_826A6A38(param_1);
  uVar3 = fn_826A6A38(param_1);
  fn_8268B330(&uStack_5c);
  fn_8268B330(&uStack_60);
  fn_826E8660(iVar7,&uStack_5c);
  fn_826E8660(iVar7,&uStack_60);
  fn_826C8C70(iVar7,0xffffffff8200cc18,*param_2,uVar4 & 0xffff,uVar1 & 0xffff,
                    ((ulonglong)uStack_60 & 0xfffffffc) + 8,((ulonglong)uStack_5c & 0xfffffffc) + 8,
                    uVar2 & 0xffff);
  auStack_58[0] = uVar4 & 0xffff;
  fn_826E0920(&iStack_50,param_1,auStack_58,((ulonglong)uStack_60 & 0xfffffffc) + 8,
                ((ulonglong)uStack_5c & 0xfffffffc) + 8,uVar1,uVar2,uVar3);
  if ((iStack_50 == 0) && (iStack_4c != 0)) {
    fn_82687270();
  }
  lVar5 = ((ulonglong)uStack_60 & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar5;
    uVar1 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar1 - 1,0,lVar5);
      *puVar6 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar8 = (uVar1 == 1) << 1;
  if (uVar1 == 1) {
    fn_8267BE38();
  }
  lVar5 = ((ulonglong)uStack_5c & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar5;
    uVar1 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar1 - 1,0,lVar5);
      *puVar6 = uVar4;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar1 == 1) {
    fn_8267BE38();
  }
  return;
}

