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
extern int fn_82682D30();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern unsigned int iStack_3c;


void fn_82683020(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
  iVar2 = fn_82694700((ulonglong)*(uint *)(iVar1 + 0x78) + 0x254,param_3);
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  auStack_40[0] = 5;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  iStack_3c = iVar2;
  fn_82682D30(param_1,iVar1,auStack_40,param_2);
  fn_82696330(auStack_40);
  lVar3 = (ulonglong)*(uint *)(iVar2 + 8) - 1;
  *(int *)(iVar2 + 8) = (int)lVar3;
  if (lVar3 == 0) {
    fn_826944C8(iVar2);
  }
  return;
}

