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
extern int fn_82A3FB78();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A3FE48(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  uVar4 = 0;
  lVar5 = param_1 + 0xc;
  do {
    puVar6 = (uint *)lVar5;
    uVar2 = *puVar6;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)uVar2 + 1,0,lVar5);
      *puVar6 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (((ulonglong)uVar2 + 1 & 0xffffffff) == 1) {
    RtlInitializeCriticalSection(param_1 + 0x54);
    uVar4 = fn_82A3FB78(param_1,0);
    bVar1 = (int)uVar4 == 0;
    if ((int)uVar4 < 0) {
      do {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,lVar5);
          *puVar6 = uVar2;
          bVar1 = true;
        }
      } while (!bVar1);
    }
  }
  return uVar4;
}

