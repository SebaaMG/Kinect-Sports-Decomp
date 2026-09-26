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
extern int fn_82813680();
extern int fn_82813AE0();
extern int fn_82813C48();
extern int fn_82A1E658();
extern U64 storeWordConditionalIndexed();


void fn_828140F0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte bVar6;
  undefined1 auStack_20 [16];
  
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x30) == '\0') {
    *(undefined1 *)(iVar2 + 0x30) = 1;
    sync(0);
  }
  do {
    cVar3 = fn_82813AE0(param_1,auStack_20);
    bVar6 = (cVar3 == '\0') << 1;
  } while (cVar3 != '\0');
  lVar4 = (ulonglong)*(uint *)(iVar2 + 0x20) + 0xc;
  do {
    puVar5 = (uint *)lVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,lVar4);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1));
  fn_82813680(param_1);
  if (*(int *)(iVar2 + 0x38) != 0) {
    fn_82A1E658();
  }
  do {
    puVar5 = (uint *)(param_1 + 0x2c);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,param_1 + 0x2c);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  do {
    puVar5 = (uint *)(param_1 + 0x24);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,param_1 + 0x24);
      *puVar5 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  fn_82813C48(param_1);
  return;
}

