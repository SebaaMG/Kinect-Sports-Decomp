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
extern unsigned int *auStack_2c;
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82697610();
extern int fn_8269A1F0();
extern int fn_826BC950();
extern int fn_82F6A3E8();


void fn_826A6AC0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puStack_30;
  uint auStack_2c [11];
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = 10;
  uVar4 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_30,uVar4,uVar2,0xffffffffffffffff,0);
  lVar5 = 0;
  if (*(int *)(param_1 + 0x1c) < 2) {
    if ((1 < puStack_30[4]) && (*(char *)*puStack_30 == '0')) {
      cVar1 = ((char *)*puStack_30)[1];
      lVar5 = 1;
      uVar6 = 8;
      if ((cVar1 == 'x') || (cVar1 == 'X')) {
        uVar6 = 0x10;
        lVar5 = 2;
      }
    }
LAB_826a6b4c:
    uVar3 = *puStack_30;
    auStack_2c[0] = 0;
    uVar4 = fn_82F6A3E8((ulonglong)*puStack_30 + lVar5,auStack_2c,uVar6);
    if ((((ulonglong)uVar3 + lVar5 & 0xffffffff) != (ulonglong)auStack_2c[0]) || ((int)uVar6 == 8))
    {
      fn_8269A1F0(*(undefined4 *)(param_1 + 4),uVar4);
      goto LAB_826a6be4;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    uVar6 = fn_82697610(uVar4,uVar2);
    if ((1 < (int)uVar6) && ((int)uVar6 < 0x25)) goto LAB_826a6b4c;
  }
  fn_826BC950();
  fn_82681898(*(undefined4 *)(param_1 + 4));
LAB_826a6be4:
  uVar3 = puStack_30[2];
  puStack_30[2] = (uint)((ulonglong)uVar3 - 1);
  if ((ulonglong)uVar3 - 1 == 0) {
    fn_826944C8(puStack_30);
  }
  return;
}

