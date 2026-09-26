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
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82682AF0();
extern int fn_82682D30();
extern int fn_82696330();
extern int fn_826964E0();
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


void fn_82683150(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  ulonglong uVar1;
  uint uVar3;
  uint uStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined1 auStack_50 [80];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
  auStack_50[0] = 0;
  uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(iVar2 + 0x78) + 0x288),0x38,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82682AF0(uVar1,iVar2 + 0x78,param_3,param_4);
  }
  bStack_58 = 0;
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
  }
  iStack_5c = 0;
  uStack_60 = uVar3;
  fn_826964E0(auStack_50,&uStack_60);
  if (((bStack_58 & 2) == 0) && (uStack_60 != 0)) {
    fn_826824B0();
  }
  uStack_60 = 0;
  if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
    fn_826824B0();
  }
  iStack_5c = 0;
  fn_82682D30(param_1,iVar2,auStack_50,param_2);
  if (uVar3 != 0) {
    fn_826824B0(uVar3);
  }
  fn_82696330(auStack_50);
  return;
}

