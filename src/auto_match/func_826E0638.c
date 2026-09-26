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
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268C3A8();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DC448();
extern int fn_826DF328();
extern int fn_826DFA28();
extern int fn_826E9530();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern U64 storeWordConditionalIndexed();


void fn_826E0638(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  char in_RESERVE;
  byte bVar9;
  uint auStack_60 [2];
  int iStack_58;
  int iStack_54;
  uint auStack_50 [20];
  
  uVar1 = fn_826A6A38();
  uVar1 = uVar1 & 0xffff;
  iVar8 = param_1 + 0x14;
  fn_826A9280(iVar8,0xffffffff8200cbc4,uVar1);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = fn_826A6A38(param_1);
    fn_8268C3A8(auStack_50,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c));
    iVar3 = *(int *)(param_1 + 0x314);
    if (iVar3 == 0) {
      iVar3 = param_1 + 0x28;
    }
    fn_826E9530(iVar3,auStack_50);
    uVar2 = uVar2 & 0xffff;
    fn_826A9280(iVar8,0xffffffff8200cb68,uVar2,((ulonglong)auStack_50[0] & 0xfffffffc) + 8);
    iStack_58 = 0;
    iStack_54 = 0;
    auStack_60[0] = uVar2;
    cVar4 = fn_826DC448(*(undefined4 *)(param_1 + 0x20),&iStack_58,auStack_60);
    bVar9 = (cVar4 == '\0') << 1;
    if (cVar4 == '\0') {
      fn_826DFA28(iVar8,0xffffffff8200cb88,((ulonglong)auStack_50[0] & 0xfffffffc) + 8);
    }
    else {
      auStack_60[0] = uVar2;
      fn_826DF328(*(undefined4 *)(param_1 + 0x20),auStack_50,auStack_60,&iStack_58);
    }
    if ((iStack_58 == 0) && (iStack_54 != 0)) {
      fn_82687270();
    }
    lVar6 = ((ulonglong)auStack_50[0] & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar5 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

