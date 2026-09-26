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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8248E2C0();


void fn_8248F390(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  uVar6 = param_2;
  while( true ) {
    uVar7 = (uVar6 + 1 & 0x7fffffff) * 2;
    if ((int)param_3 <= (int)uVar7) break;
    lVar5 = (uVar7 & 0x1fffffff) * 8 + param_1;
    uVar1 = fn_82365BD8(auStack_60,lVar5 + -8);
    uVar2 = fn_82365BD8(auStack_58,lVar5);
    cVar3 = fn_8248E2C0(uVar2,uVar1);
    if (cVar3 != '\0') {
      uVar7 = uVar7 - 1;
    }
    fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,(uVar7 & 0x1fffffff) * 8 + param_1);
    uVar6 = uVar7;
  }
  if ((int)uVar7 == (int)param_3) {
    fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,(param_3 & 0x1fffffff) * 8 + param_1 + -8);
    uVar6 = param_3 - 1;
  }
  while( true ) {
    uVar4 = (int)uVar6 - 1;
    uVar7 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
    if ((int)uVar6 <= (int)param_2) break;
    lVar5 = (uVar7 & 0x1fffffff) * 8 + param_1;
    uVar1 = fn_82365BD8(auStack_58,param_4);
    uVar2 = fn_82365BD8(auStack_60,lVar5);
    cVar3 = fn_8248E2C0(uVar2,uVar1);
    if (cVar3 == '\0') break;
    fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,lVar5);
    uVar6 = uVar7;
  }
  fn_823F2E20((uVar6 & 0x1fffffff) * 8 + param_1,param_4);
  return;
}

