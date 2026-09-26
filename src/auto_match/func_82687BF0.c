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
extern int fn_82686A80();
extern int fn_82686F38();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern U64 storeWordConditionalIndexed();


void fn_82687BF0(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  char in_RESERVE;
  byte bVar5;
  undefined4 uStack0000001c;
  
  uStack0000001c = (undefined4)param_2;
  RtlEnterCriticalSection(param_1 + 0xc);
  if ((ulonglong)*(uint *)(param_1 + 8) != 0) {
    lVar4 = (ulonglong)*(uint *)(param_1 + 8) + 0xc;
    iVar2 = fn_82686F38(lVar4,&stack0x0000001c);
    bVar5 = (iVar2 == 0) << 1;
    if (iVar2 == 0) {
      fn_82686A80(lVar4,lVar4,&stack0x0000001c,(param_2 & 0xffffffff) >> 6 ^ param_2);
      do {
        puVar3 = (uint *)(param_2 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar3 + 1,0,param_2 + 4);
          *puVar3 = uVar1;
          bVar5 = 2;
        }
      } while (!(bool)(bVar5 >> 1 & 1));
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

