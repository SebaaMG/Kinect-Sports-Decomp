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
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268ACE8();
extern int fn_8268B330();
extern int fn_8268BD50();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_8269A190();
extern unsigned int iStack_2c;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200FCF0;
extern unsigned int uStack_24;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_8271C770(int param_1)

{
  uint uVar1;
  char cVar3;
  longlong lVar2;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  char in_RESERVE;
  byte bVar7;
  uint uStack_30;
  int iStack_2c;
  undefined **ppuStack_28;
  uint uStack_24;
  uint *puStack_20;
  
  cVar3 = fn_82695468(param_1,0x1b);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee50,0,0);
  }
  else {
    iVar6 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar6 = 0;
    }
    fn_8268B330(&uStack_30);
    uStack_24 = *(uint *)(param_1 + 0x18);
    puStack_20 = &uStack_30;
    ppuStack_28 = &lbl_8200FCF0;
    (**(code **)(*(int *)(iVar6 + 0x10) + 0x20))
              (iVar6 + 0x10,(ulonglong)uStack_24 + 0x78,&ppuStack_28,0,0);
    lVar2 = fn_8268ACE8(&uStack_30);
    fn_8268BD50(&uStack_30,lVar2 + -1,1);
    fn_8269A190(&iStack_2c,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      &uStack_30);
    fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_2c);
    lVar2 = (ulonglong)*(uint *)(iStack_2c + 8) - 1;
    bVar7 = (lVar2 == 0) << 1;
    *(int *)(iStack_2c + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8();
    }
    ppuStack_28 = &lbl_8200C4D4;
    lVar2 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
    do {
      puVar5 = (uint *)lVar2;
      uVar4 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    if (uVar4 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

