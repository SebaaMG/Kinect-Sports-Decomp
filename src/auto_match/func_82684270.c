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
extern unsigned int *auStack_20;
extern int fn_8267BE38();
extern int fn_8268ACE8();
extern int fn_8268AD58();
extern int fn_8268BA10();
extern int fn_8268C928();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82684270(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte bVar8;
  uint auStack_20 [2];
  
  uVar2 = fn_8268ACE8();
  do {
    uVar7 = uVar2;
    uVar2 = uVar7 - 1;
    if ((longlong)uVar2 < 0) goto LAB_82684318;
    bVar8 = (uVar2 == 0) << 1;
    iVar4 = fn_8268AD58(param_1,uVar2);
  } while ((iVar4 != 0x2f) && (iVar4 != 0x5c));
  uVar3 = fn_8268C928(auStack_20,param_1,0,uVar7);
  fn_8268BA10(param_1,uVar3);
  lVar5 = ((ulonglong)auStack_20[0] & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar5;
    uVar7 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
      *puVar6 = uVar1;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
LAB_82684318:
  return (uVar2 & 0xffffffff) >> 0x1f ^ 1;
}

