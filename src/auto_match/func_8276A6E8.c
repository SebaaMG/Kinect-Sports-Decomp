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
extern unsigned int *auStack_3c;
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268B330();
extern int fn_8268BA10();
extern int fn_8268C510();
extern int fn_8268CAB0();
extern unsigned int lbl_82014EF8;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_8276A6E8(undefined4 *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  byte bVar6;
  uint uStack_40;
  uint auStack_3c [15];
  
  param_1[1] = 1;
  *param_1 = &lbl_82014EF8;
  param_1[2] = 0;
  fn_8268B330(param_1 + 3);
  uVar2 = fn_8268C510(auStack_3c,param_2);
  uVar2 = fn_8268CAB0(&uStack_40,uVar2);
  fn_8268BA10(param_1 + 3,uVar2);
  lVar3 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar6 = (uVar5 == 1) << 1;
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  lVar3 = ((ulonglong)auStack_3c[0] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      bVar6 = 2;
    }
  } while (!(bool)(bVar6 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  param_1[4] = param_3 & 3;
  if ((param_4 & 0xffffffff) != 0) {
    fn_8267C4C8(param_4);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  param_1[2] = (int)param_4;
  return param_1;
}

