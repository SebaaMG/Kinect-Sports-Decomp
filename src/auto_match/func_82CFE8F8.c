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
extern int fn_82CFBE40();
extern int fn_82CFE180();
extern int fn_82CFE240();
extern int fn_82CFE370();
extern int fn_82CFE418();
extern unsigned int uStack_60;


void fn_82CFE8F8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 uStack_60;
  undefined1 auStack_50 [80];
  
  fn_82CFE240(auStack_50,param_2,uStack_60);
  uVar1 = *param_1;
  uVar4 = fn_82CFBE40(uVar1);
  fn_82CFE180(auStack_50,uVar1,uVar4);
  uVar2 = param_1[2];
  if (0 < (int)uVar2) {
    iVar5 = 0;
    uVar6 = (ulonglong)uVar2;
    do {
      iVar3 = param_1[1];
      uVar1 = ((undefined4 *)(iVar5 + iVar3))[1];
      uVar4 = fn_82CFBE40(uVar1);
      fn_82CFE180(auStack_50,uVar1,uVar4);
      fn_82CFE418(auStack_50,*(undefined4 *)(iVar5 + iVar3));
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + 8;
    } while (uVar6 != 0);
  }
  fn_82CFE418(auStack_50,(ulonglong)uVar2);
  fn_82CFE370(auStack_50);
  return;
}

