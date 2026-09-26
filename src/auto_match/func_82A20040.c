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


longlong fn_82A20040(int *param_1,uint *param_2)

{
  bool bVar1;
  longlong lVar2;
  uint uVar4;
  ulonglong uVar3;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  if (param_1[0xd] != 0) {
    RtlEnterCriticalSection(param_1 + 6);
  }
  puVar5 = (uint *)param_2[1];
  if ((puVar5 == (uint *)0x0) || (uVar4 = *puVar5, uVar4 == 0)) {
    bVar1 = puVar5 == (uint *)0x0;
    while( true ) {
      if ((!bVar1) && (uVar4 = *param_2, *param_2 = uVar4 + 1, (uint)param_1[1] <= uVar4 + 1)) {
        uVar4 = 0;
        goto code_r0x82a200e0;
      }
      uVar4 = *(uint *)(*param_2 * 4 + *param_1);
      param_2[1] = uVar4;
      if (uVar4 != 0) break;
      bVar1 = false;
    }
  }
  else {
code_r0x82a200e0:
    param_2[1] = uVar4;
  }
  if (param_1[0xd] != 0) {
    RtlLeaveCriticalSection(param_1 + 6);
  }
  uVar3 = (ulonglong)param_2[1];
  if (uVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = uVar3 + 0xc;
    if (param_1[0xe] == 0) {
      lVar2 = uVar3 + 8;
    }
    else {
      do {
        puVar5 = (uint *)(uVar3 + 8);
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,uVar3 + 8);
          *puVar5 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
  }
  return lVar2;
}

