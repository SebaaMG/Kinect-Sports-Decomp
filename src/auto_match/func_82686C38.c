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
extern int fn_8267E2B0();
extern U64 storeWordConditionalIndexed();


undefined4 fn_82686C38(int param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  char in_RESERVE;
  byte in_cr0;
  
  fn_8267E2B0(param_1 + 0x20,0xffffffffffffffff);
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x10) + 4;
    do {
      puVar3 = (uint *)lVar2;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 + 1,0,lVar2);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return *(undefined4 *)(param_1 + 0x10);
}

