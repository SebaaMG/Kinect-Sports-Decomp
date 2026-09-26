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


longlong fn_82A381F0(int param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  RtlEnterCriticalSection(param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  uVar4 = 0;
  uVar3 = (param_2 & 0x7ffffff) / 0xc;
  trapWord(6,uVar5,0);
  uVar3 = uVar3 - (longlong)(int)(uVar3 / uVar5) * (longlong)(int)uVar1;
  if (uVar5 != 0) {
    do {
      if ((ulonglong)*(uint *)((int)uVar3 * 0x58 + *(int *)(param_1 + 4)) == (param_2 & 0xffffffff))
      break;
      uVar4 = uVar4 + 1;
      trapWord(6,uVar5,0);
      uVar3 = (uVar3 + 1) -
              (longlong)(int)((uVar3 + 1 & 0xffffffff) / (ulonglong)uVar1) * (longlong)(int)uVar1;
    } while (uVar4 < uVar1);
  }
  RtlLeaveCriticalSection(param_1 + 0x14);
  puVar6 = (uint *)((int)uVar3 * 0x58 + *(uint *)(param_1 + 4));
  if ((ulonglong)*puVar6 == (param_2 & 0xffffffff)) {
    if ((param_3 == 0) && (puVar6[1] == 0xffffffff)) {
      uVar3 = (ulonglong)puVar6[4];
    }
    lVar2 = uVar3 * 0x58 + (ulonglong)*(uint *)(param_1 + 4);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

