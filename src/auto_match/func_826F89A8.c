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
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268C750();
extern int fn_826D7220();
extern int fn_826F34B0();
extern int fn_826F35B0();
extern int fn_826F8298();
extern unsigned int uStack_38;
extern U64 storeWordConditionalIndexed();


void fn_826F89A8(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte bVar6;
  uint auStack_40 [2];
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [48];
  
  uStack_38 = 4;
  fn_8268C750(auStack_34,param_1 + 0x18);
  fn_8268C750(auStack_30,param_1 + 0x14);
  fn_8268B330(auStack_40);
  fn_826F35B0(*(undefined4 *)(param_1 + 0x10),auStack_40,&uStack_38);
  uVar2 = fn_826F34B0(*(undefined4 *)(param_1 + 0x10),((ulonglong)auStack_40[0] & 0xfffffffc) + 8,
                        0);
  bVar6 = (uVar2 == 0) << 1;
  if (uVar2 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    uVar3 = fn_826F8298(uVar2,param_1 + 0x1c,param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x28) = uVar3;
  }
  sync(1);
  *(undefined4 *)(param_1 + 0x24) = 1;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  lVar4 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
  do {
    puVar5 = (uint *)lVar4;
    uVar2 = (ulonglong)*puVar5;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar4);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  if (uVar2 == 1) {
    fn_8267BE38();
  }
  fn_826D7220(&uStack_38);
  return;
}

