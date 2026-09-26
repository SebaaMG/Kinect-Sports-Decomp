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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FFBD98();
extern int fn_82FFC4C8();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B580();
extern int fn_8302B618();
extern int fn_8302B660();
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;
extern U64 storeWordConditionalIndexed();


undefined8
fn_82FFCDE0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined8 uStack00000030;
  ulonglong uStack00000040;
  int aiStack_50 [20];
  
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  fn_8302B530();
  lVar6 = param_1 + 0x39c;
  uVar3 = fn_8302B618(lVar6,param_7);
  if ((uVar3 & 0xffffffff) != 0) {
    do {
      puVar5 = (uint *)(uVar3 + 0x44);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,uVar3 + 0x44);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    iVar2 = (int)uVar3;
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
    if (((int)param_8 == 2) || ((*(byte *)(iVar2 + 0x48) & 0x20) != 0)) {
      fn_8302B540();
      return 1;
    }
    param_8 = 3;
  }
  fn_8302B540();
  uStack00000030 = CONCAT44((int)param_7,(((U64)(uStack00000030) >> 32) & 0xFFFFFFFF));
  aiStack_50[0] = 0;
  uVar4 = fn_82FFC4C8(param_1,param_2,param_3,uStack00000030,param_5,
                            uStack00000040 & 0xffffffff00000000,aiStack_50,param_8);
  iVar2 = aiStack_50[0];
  if ((int)uVar4 == 1) {
    fn_8302B580(lVar6,param_7,aiStack_50[0]);
  }
  else if (((int)uVar4 != 0x45) && (aiStack_50[0] != 0)) {
    fn_8302B660(lVar6,param_7);
    fn_82FFBD98(iVar2,0);
  }
  return uVar4;
}

