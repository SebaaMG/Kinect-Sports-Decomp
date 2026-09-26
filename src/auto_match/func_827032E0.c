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
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696BC8();
extern int fn_8269A418();
extern int fn_8269F500();
extern int fn_826A98D8();
extern int fn_826BD928();
extern int fn_826F5BA0();
extern int fn_826F5C10();
extern int fn_826FC388();
extern int fn_826FC420();
extern int fn_826FFAD8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern U64 storeWordConditionalIndexed();


void fn_827032E0(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  char in_RESERVE;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  char *pcStack_64;
  uint auStack_60 [24];
  
  uVar7 = 0xffffffffffffffff;
  bVar1 = (param_4 & 0xffffffff) == 0;
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x9e4) + 0x254;
  if (bVar1) {
    iStack_70 = fn_82694700(lVar2);
    *(int *)(iStack_70 + 8) = *(int *)(iStack_70 + 8) + 1;
    uVar3 = fn_826F5BA0(param_1,&iStack_70);
  }
  else {
    iStack_6c = fn_82694700(lVar2);
    *(int *)(iStack_6c + 8) = *(int *)(iStack_6c + 8) + 1;
    uVar3 = fn_826A98D8(param_4,&iStack_6c,0);
  }
  if ((bVar1) &&
     (lVar2 = (ulonglong)*(uint *)(iStack_70 + 8) - 1, *(int *)(iStack_70 + 8) = (int)lVar2,
     lVar2 == 0)) {
    fn_826944C8(iStack_70);
  }
  if ((!bVar1) &&
     (lVar2 = (ulonglong)*(uint *)(iStack_6c + 8) - 1, *(int *)(iStack_6c + 8) = (int)lVar2,
     lVar2 == 0)) {
    fn_826944C8(iStack_6c);
  }
  bVar1 = false;
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_826BD928(uVar3 + 0x68);
  }
  if (iVar4 != 0) {
    uVar7 = (ulonglong)*(uint *)(iVar4 + 0x1a8);
    uVar3 = -(uint)(uVar7 == 0xffffffffffffffff) & uVar3;
  }
  if (uVar3 == 0) {
    if ((int)uVar7 == -1) {
      pcStack_64 = "";
      uVar7 = fn_8269A418(*(undefined4 *)(param_1 + 0x68));
      uVar7 = fn_826F5C10(param_2,&pcStack_64,-(6 < uVar7) & 1);
      if (*pcStack_64 != '\0') {
        uVar7 = 0xffffffffffffffff;
      }
      if ((int)uVar7 == -1) {
        return;
      }
    }
    lVar2 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x80,0);
    if (lVar2 == 0) {
      uVar7 = 0;
      goto LAB_82703588;
    }
    fn_8268C510(auStack_60,param_3);
    uVar7 = fn_826FC420(lVar2,uVar7,auStack_60,param_5,0,0);
    lVar2 = ((ulonglong)auStack_60[0] & 0xfffffffc) + 4;
    bVar1 = false;
    do {
      puVar6 = (uint *)lVar2;
      uVar5 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar2);
        *puVar6 = uVar3;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    lVar2 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x80,0);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      fn_8268C510(&uStack_68,param_3);
      uVar7 = (ulonglong)*(uint *)(uVar3 + 0x80);
      bVar1 = true;
      if (*(uint *)(uVar3 + 0x80) == 0) {
        uVar7 = fn_8269F500(uVar3);
      }
      uVar7 = fn_826FC388(lVar2,uVar7,&uStack_68,param_5,0,0);
    }
    if (!bVar1) goto LAB_82703588;
    lVar2 = ((ulonglong)uStack_68 & 0xfffffffc) + 4;
    bVar1 = false;
    do {
      puVar6 = (uint *)lVar2;
      uVar5 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar2);
        *puVar6 = uVar3;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  if (uVar5 == 1) {
    fn_8267BE38();
  }
LAB_82703588:
  if ((uVar7 & 0xffffffff) != 0) {
    fn_82696BC8(uVar7 + 0x20,param_6);
    fn_826FFAD8(param_1,uVar7);
  }
  return;
}

