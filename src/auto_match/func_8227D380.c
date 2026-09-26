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
extern int fn_8227C270();
extern int fn_82F68CC0();
extern unsigned int stack0x00000034;
extern unsigned int uStack00000034;


void fn_8227D380(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uStack00000034;
  undefined4 auStack_50 [20];
  
  lVar6 = param_2;
  uStack00000034 = param_5;
  while( true ) {
    uVar1 = lVar6 + 1U & 0x7fffffff;
    lVar5 = uVar1 * 2;
    if ((int)param_3 <= (int)lVar5) break;
    lVar4 = uVar1 * 0x1b8 + param_1;
    cVar2 = fn_8227C270(&stack0x00000034,lVar4,lVar4 + -0xdc);
    if (cVar2 != '\0') {
      lVar5 = lVar5 + -1;
    }
    fn_82F68CC0(lVar6 * 0xdc + param_1,lVar5 * 0xdc + param_1,0xdc);
    lVar6 = lVar5;
  }
  if ((int)lVar5 == (int)param_3) {
    fn_82F68CC0(lVar6 * 0xdc + param_1,param_3 * 0xdc + param_1 + -0xdc,0xdc);
    lVar6 = param_3 + -1;
  }
  iVar7 = (int)lVar6;
  auStack_50[0] = param_5;
  while( true ) {
    uVar3 = (int)lVar6 - 1;
    lVar5 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    if (iVar7 <= (int)param_2) break;
    lVar4 = lVar5 * 0xdc + param_1;
    cVar2 = fn_8227C270(auStack_50,lVar4,param_4);
    if (cVar2 == '\0') break;
    fn_82F68CC0(lVar6 * 0xdc + param_1,lVar4,0xdc);
    iVar7 = (int)lVar5;
    lVar6 = lVar5;
  }
  fn_82F68CC0(lVar6 * 0xdc + param_1,param_4,0xdc);
  return;
}

