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
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_58;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268ACE8();
extern int fn_8268B330();
extern int fn_8268C750();
extern int fn_826959C8();
extern int fn_826D7220();
extern int fn_826F34B0();
extern int fn_826F35B0();
extern int fn_826F8298();
extern int fn_82704528();
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern U64 storeWordConditionalIndexed();


void fn_82704EB0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  char cVar4;
  ulonglong uVar5;
  uint *puVar6;
  char in_RESERVE;
  byte bVar7;
  uint uStack_60;
  uint uStack_5c;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [72];
  
  fn_8268B330(&uStack_60);
  auStack_58[0] = 0;
  iVar3 = fn_8268ACE8(param_2 + 0xc);
  bVar7 = (iVar3 == 0) << 1;
  if (iVar3 != 0) {
    uStack_50 = 4;
    fn_8268C750(auStack_4c,param_2 + 0xc);
    fn_8268C750(auStack_48,param_4);
    fn_8268B330(&uStack_5c);
    fn_826F35B0(param_3,&uStack_5c,&uStack_50);
    lVar2 = fn_826F34B0(param_3,((ulonglong)uStack_5c & 0xfffffffc) + 8,0);
    bVar7 = (lVar2 == 0) << 1;
    if (lVar2 != 0) {
      if (*(char *)(param_2 + 0x30) == '\x06') {
        cVar4 = fn_826F8298(lVar2,&uStack_60,auStack_58);
        bVar7 = (cVar4 == '\0') << 1;
        if (cVar4 == '\0') {
          fn_826959C8(param_2 + 0x30);
        }
      }
      else {
        fn_826F8298(lVar2,&uStack_60,auStack_58);
      }
      fn_8267C4F0(lVar2);
    }
    lVar2 = ((ulonglong)uStack_5c & 0xfffffffc) + 4;
    do {
      puVar6 = (uint *)lVar2;
      uVar5 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar2);
        *puVar6 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    bVar7 = (uVar5 == 1) << 1;
    if (uVar5 == 1) {
      fn_8267BE38();
    }
    fn_826D7220(&uStack_50);
  }
  fn_82704528(param_1,param_2,param_3,&uStack_60,auStack_58[0]);
  lVar2 = ((ulonglong)uStack_60 & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar2;
    uVar5 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar2);
      *puVar6 = uVar1;
      bVar7 = 2;
    }
  } while (!(bool)(bVar7 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return;
}

