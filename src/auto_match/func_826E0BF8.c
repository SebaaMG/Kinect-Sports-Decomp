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
extern int fn_826DF558();
extern int fn_826E0920();
extern int fn_826E8660();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern U64 storeWordConditionalIndexed();


void fn_826E0BF8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  char in_RESERVE;
  byte in_cr0;
  byte bVar9;
  uint uStack_60;
  uint uStack_5c;
  uint auStack_58 [2];
  int iStack_50;
  int iStack_4c;
  
  iVar8 = *(int *)(param_1 + 0x314);
  if (iVar8 == 0) {
    iVar8 = param_1 + 0x28;
  }
  uVar2 = fn_826DF558(param_1);
  uVar3 = fn_826A6A38(param_1);
  uVar4 = fn_826A6A38(param_1);
  uVar5 = fn_826A6A38(param_1);
  fn_8268B330(&uStack_5c);
  fn_8268B330(&uStack_60);
  fn_826E8660(iVar8,&uStack_5c);
  fn_826E8660(iVar8,&uStack_60);
  fn_826C8C70(iVar8,0xffffffff8200cc88,*param_2,uVar2,uVar3 & 0xffff,
                    ((ulonglong)uStack_60 & 0xfffffffc) + 8,((ulonglong)uStack_5c & 0xfffffffc) + 8,
                    uVar4 & 0xffff);
  auStack_58[0] = (uint)uVar2 & 0x9ffff;
  fn_826E0920(&iStack_50,param_1,auStack_58,((ulonglong)uStack_60 & 0xfffffffc) + 8,
                ((ulonglong)uStack_5c & 0xfffffffc) + 8,uVar3,uVar4,uVar5);
  if ((iStack_50 == 0) && (iStack_4c != 0)) {
    fn_82687270();
  }
  lVar6 = ((ulonglong)uStack_60 & 0xfffffffc) + 4;
  do {
    puVar7 = (uint *)lVar6;
    uVar3 = (ulonglong)*puVar7;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 - 1,0,lVar6);
      *puVar7 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar9 = (uVar3 == 1) << 1;
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  lVar6 = ((ulonglong)uStack_5c & 0xfffffffc) + 4;
  do {
    puVar7 = (uint *)lVar6;
    uVar3 = (ulonglong)*puVar7;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 - 1,0,lVar6);
      *puVar7 = uVar1;
      bVar9 = 2;
    }
  } while (!(bool)(bVar9 >> 1 & 1));
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  return;
}

