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


undefined8 fn_82A59B60(longlong param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 uVar4;
  char in_RESERVE;
  byte in_cr0;
  
  lVar2 = param_1 + 0xc;
  do {
    puVar3 = (uint *)lVar2;
    if (*puVar3 != 0) {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3,0,lVar2);
        *puVar3 = uVar1;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(0,0,lVar2);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  RtlEnterCriticalSection(0xffffffff83219da4);
  if (param_2 == -1) {
    uVar4 = *(undefined4 *)((int)param_1 + 0x10);
  }
  else {
    uVar4 = *(undefined4 *)((param_2 + 5) * 4 + (int)param_1);
  }
  *param_3 = uVar4;
  RtlLeaveCriticalSection(0xffffffff83219da4);
  return 0;
}

