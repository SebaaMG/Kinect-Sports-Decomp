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
extern int fn_8267C4F0();
extern int fn_82681D00();
extern int fn_82683F88();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_826B4808();
extern int fn_82705520();


ulonglong fn_82708B98(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar4;
  int *piVar5;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 0x68) != 0) {
    if ((param_2 & 0xffffffff) != 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
      aiStack_50[0] = fn_82694700((ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,param_2);
      *(int *)(aiStack_50[0] + 8) = *(int *)(aiStack_50[0] + 8) + 1;
      auStack_40[0] = 0;
      fn_82681D00(param_1,param_3,auStack_40);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
      iVar3 = (int)param_4;
      uVar1 = fn_826B4808(uVar2,aiStack_50,auStack_40,0,iVar3 == 0);
      if ((((uVar1 & 0xff) == 0) && (iVar3 != 0)) || (iVar3 == 2)) {
        fn_82705520(param_1,aiStack_50,auStack_40,param_4);
      }
      fn_82696330(auStack_40);
      lVar4 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
      *(int *)(aiStack_50[0] + 8) = (int)lVar4;
      if (lVar4 != 0) {
        return uVar1;
      }
      fn_826944C8(aiStack_50[0]);
      return uVar1;
    }
    piVar5 = (int *)(param_1 + 8);
    iVar3 = (**(code **)(*piVar5 + 0xc))(piVar5,4);
    if (iVar3 != 0) {
      fn_8267C4F0();
      uVar1 = (**(code **)(*piVar5 + 0xc))(piVar5,4);
      fn_82683F88(uVar1 + 0xc,0xffffffff8200e020);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar1);
      }
    }
  }
  return 0;
}

