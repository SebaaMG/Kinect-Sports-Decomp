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
extern U64 storeWordConditionalIndexed();


void fn_82C00D68(undefined8 param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  uint *puVar2;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    puVar2 = (uint *)(param_2 + 0x280);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar2 - 1,0,param_2 + 0x280);
      *puVar2 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  UNRECOVERED_JUMPTABLE = *(code **)((int)param_2 + 0x30);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82c00d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)((int)param_2 + 0x34));
  return;
}

