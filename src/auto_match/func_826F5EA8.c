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
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695370();
extern int fn_82696330();
extern int fn_826B44A0();


undefined8 fn_826F5EA8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar4;
  int *piVar3;
  longlong lVar5;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    auStack_40[0] = 0;
    aiStack_50[0] = fn_82694700((ulonglong)*(uint *)(iVar2 + 0x78) + 0x254,param_2);
    *(int *)(aiStack_50[0] + 8) = *(int *)(aiStack_50[0] + 8) + 1;
    cVar4 = fn_826B44A0(iVar2,aiStack_50,auStack_40,0,0,0,0);
    lVar5 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
    if ((cVar4 == '\0') ||
       (piVar3 = (int *)fn_82695370(auStack_40,iVar2), piVar3 == (int *)0x0)) {
      uVar1 = 0;
    }
    else {
      (**(code **)(*piVar3 + 0xf0))(piVar3,param_3,param_4);
      uVar1 = 1;
    }
    fn_82696330(auStack_40);
  }
  return uVar1;
}

