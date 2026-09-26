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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_826933E8();
extern int fn_826EF268();
extern int fn_826EFBA8();
extern int fn_826EFDB8();
extern int fn_82F6C9F8();
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_58;
extern U64 storeWordConditionalIndexed();


longlong fn_826F7C20(int param_1)

{
  uint uVar1;
  int *piVar3;
  ulonglong uVar2;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  char in_RESERVE;
  byte bVar7;
  uint auStack_80 [4];
  undefined1 auStack_70 [12];
  undefined **ppuStack_64;
  undefined4 uStack_58;
  
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x24);
  bVar7 = (piVar3 == (int *)0x0) << 1;
  if (piVar3 == (int *)0x0) {
    uVar2 = fn_826933E8();
    lVar6 = uVar2 / 1000 - *(longlong *)(param_1 + 0xaa8);
  }
  else {
    fn_8267C4F0(piVar3);
    if (piVar3[3] == 0) {
      uVar2 = fn_826933E8();
      lVar6 = uVar2 / 1000 - *(longlong *)(param_1 + 0xaa8);
      fn_826EFBA8(auStack_70,lVar6);
      fn_826EFDB8(auStack_70);
      (**(code **)(*piVar3 + 8))(piVar3,0xffffffff8200dbc4,uStack_58);
      ppuStack_64 = &lbl_8200C4D4;
      fn_826EF268(auStack_70);
    }
    else {
      fn_8268B330(auStack_80);
      (**(code **)(*piVar3 + 4))(piVar3,0xffffffff8200dbc4,auStack_80);
      lVar6 = fn_82F6C9F8(((ulonglong)auStack_80[0] & 0xfffffffc) + 8,0,10);
      lVar4 = ((ulonglong)auStack_80[0] & 0xfffffffc) + 4;
      do {
        puVar5 = (uint *)lVar4;
        uVar2 = (ulonglong)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar4);
          *puVar5 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      if (uVar2 == 1) {
        fn_8267BE38();
      }
    }
  }
  return lVar6;
}

