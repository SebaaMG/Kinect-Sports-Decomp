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


void fn_82BE8D50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  
  puVar3 = (undefined4 *)param_1;
  param_1 = param_1 + 4;
  do {
    puVar4 = (uint *)param_1;
    uVar1 = *puVar4;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(1,0,param_1);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar1 != 1) {
    do {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar4 - 1,0,param_1);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    return;
  }
  if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82be8da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

