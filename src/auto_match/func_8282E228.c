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
extern int fn_828252D8();
extern int fn_8282DDD8();


void fn_8282E228(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x2e4);
  puVar3 = (uint *)(param_1 + 0x2dc);
  puVar4 = (undefined4 *)(param_1 + 0x5c);
  lVar2 = 2;
  do {
    uVar5 = (ulonglong)*puVar3;
    if ((*(int *)(param_1 + 0x3dc) == 0) || (uVar5 == 0)) {
      (*(code *)param_2[2])(*param_2,uVar5,uVar1);
      fn_8282DDD8(param_2,(uVar5 + 3 & 0xfffffffc) - uVar5);
      uVar1 = uVar5 + uVar1;
    }
    else {
      (*(code *)param_2[2])(*param_2,uVar5,*puVar4);
      fn_828252D8(*puVar4);
      *puVar4 = 0;
    }
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 5;
  } while (lVar2 != 0);
  return;
}

