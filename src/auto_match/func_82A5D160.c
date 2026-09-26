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
extern int fn_82F68CC0();
extern unsigned int uRam831e79a4;
extern unsigned int uRam8329f804;
extern U64 storeWordConditionalIndexed();


void fn_82A5D160(int param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  if (uRam831e79a4 != 0x1800) {
    do {
      uVar1 = uRam831e79a4;
      uVar2 = (ulonglong)uRam831e79a4;
      if (in_RESERVE != '\0') {
        uRam831e79a4 = storeWordConditionalIndexed(uVar2 + 0x1800,0,0xffffffff831e79a4);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = uRam8329f804;
    }
    else {
      if ((uVar2 - *(uint *)(param_1 + 0x44) & 0xffffffff) == 0x1800) {
        uVar3 = *(int *)(param_1 + 0x48) + 1;
      }
      else {
        uVar3 = 1;
      }
      *(uint *)(param_1 + 0x48) = uVar3;
      *(uint *)(param_1 + 0x44) = uVar1;
      if (uVar3 < 0xf) {
        fn_82F68CC0(uVar2,param_2,0x1800,in_MSR);
        sync(1);
      }
    }
  }
  return;
}

