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
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF4E8();
extern int fn_826DFA28();
extern int fn_826EBB60();
extern int fn_8275B020();
extern int fn_827601F0();


longlong fn_82764DC0(uint *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar4 = fn_826DF4E8(param_2);
  uVar4 = uVar4 & 0xff;
  if ((2 < (int)param_3) && (uVar4 == 0xff)) {
    uVar4 = fn_826A6A38(param_2);
    uVar4 = uVar4 & 0xffff;
  }
  iVar5 = *(int *)(param_2 + 0x314);
  if (iVar5 == 0) {
    iVar5 = param_2 + 0x28;
  }
  uVar1 = *(uint *)(iVar5 + 0x34);
  uVar2 = *(uint *)(iVar5 + 0x30);
  uVar3 = *(uint *)(iVar5 + 0x2c);
  if (param_1 == (uint *)0x0) {
    if (uVar4 != 0) {
      fn_826DFA28(param_2 + 0x14,0xffffffff82014a30,uVar4);
    }
  }
  else {
    fn_826A9280(param_2 + 0x14,0xffffffff82014a80,uVar4);
    uVar8 = (ulonglong)param_1[1];
    if (uVar4 != 0) {
      uVar6 = uVar8 + uVar4;
      fn_826EBB60(param_1,param_1,uVar6);
      if (uVar8 < (uVar6 & 0xffffffff)) {
        fn_827601F0(uVar8 * 0x28 + (ulonglong)*param_1,uVar6 - uVar8);
      }
      if (uVar4 != 0) {
        lVar7 = uVar8 * 0x28;
        do {
          iVar5 = *(int *)(param_2 + 0x314);
          if (iVar5 == 0) {
            iVar5 = param_2 + 0x28;
          }
          *(undefined1 *)(iVar5 + 0x15) = 0;
          fn_8275B020((ulonglong)*param_1 + lVar7,param_2,param_3);
          uVar4 = uVar4 - 1;
          lVar7 = lVar7 + 0x28;
        } while (uVar4 != 0);
      }
    }
  }
  return ((ulonglong)uVar1 - (ulonglong)uVar2) + (ulonglong)uVar3;
}

