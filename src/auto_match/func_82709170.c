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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826A2AB8();
extern int fn_826A2CB0();
extern int fn_826B44A0();
extern int fn_826B4808();
extern int fn_82705520();


ulonglong fn_82709170(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar4;
  char cVar6;
  int iVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar7;
  int aiStack_60 [4];
  char acStack_50 [16];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    aiStack_60[0] = fn_82694700((ulonglong)*(uint *)(iVar4 + 0x78) + 0x254,param_2);
    *(int *)(aiStack_60[0] + 8) = *(int *)(aiStack_60[0] + 8) + 1;
    acStack_50[0] = '\0';
    cVar6 = fn_826B44A0(iVar4,aiStack_60,acStack_50,0,0,0,0);
    if ((((cVar6 == '\0') || (acStack_50[0] != '\x06')) ||
        (iVar4 = fn_82696958(acStack_50,iVar4), iVar4 == 0)) ||
       (iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 != 7)) {
      lVar7 = fn_8267B890(*(undefined4 *)(param_1 + 0x14),0x48,0);
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
        uVar3 = fn_826A2AB8(lVar7,uVar2);
      }
      fn_826A2CB0(uVar3,param_3);
      auStack_40[0] = 0;
      fn_82696BC8(auStack_40,uVar3);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
      iVar4 = (int)param_4;
      uVar1 = fn_826B4808(uVar2,aiStack_60,auStack_40,0,iVar4 == 0);
      if ((((uVar1 & 0xff) == 0) && (iVar4 != 0)) || (iVar4 == 2)) {
        fn_82705520(param_1,aiStack_60,auStack_40,param_4);
      }
      fn_82696330(auStack_40);
      fn_82696330(acStack_50);
      if ((uVar3 & 0xffffffff) != 0) {
        fn_826824B0(uVar3);
      }
      lVar7 = (ulonglong)*(uint *)(aiStack_60[0] + 8) - 1;
      *(int *)(aiStack_60[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_60[0]);
      }
    }
    else {
      *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      if ((param_3 & 0xffffffff) != (ulonglong)*(uint *)(iVar4 + 0x38)) {
        fn_826A2CB0(iVar4,param_3);
      }
      fn_82696330(acStack_50);
      fn_826824B0(iVar4);
      lVar7 = (ulonglong)*(uint *)(aiStack_60[0] + 8) - 1;
      *(int *)(aiStack_60[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_60[0]);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

