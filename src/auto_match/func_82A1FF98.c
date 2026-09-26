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


void fn_82A1FF98(int param_1,longlong param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar3 = (undefined4 *)((int)param_2 + -0xc);
    if (*(int *)((int)param_2 + -4) == 1) {
      if (*(int *)(param_1 + 0x34) != 0) {
        RtlEnterCriticalSection(param_1 + 0x18);
      }
      *puVar3 = *(undefined4 *)(param_1 + 8);
      *(undefined4 **)(param_1 + 8) = puVar3;
      if (*(int *)(param_1 + 0x34) != 0) {
        RtlLeaveCriticalSection(param_1 + 0x18);
      }
    }
    else {
      do {
        puVar2 = (uint *)(param_2 + -4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar2 - 1,0,param_2 + -4);
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
  }
  return;
}

