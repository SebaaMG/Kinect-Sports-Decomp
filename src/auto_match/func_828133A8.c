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
extern int fn_82812380();
extern int fn_82A1E7D8();
extern U64 storeWordConditionalIndexed();


void fn_828133A8(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint *puVar4;
  char in_RESERVE;
  byte bVar5;
  
  uVar3 = fn_82812380(param_1,0x10000);
  bVar2 = (uVar3 & 0xffff0000) == 0;
  bVar5 = bVar2 << 1;
  puVar4 = (uint *)param_1;
  if (bVar2) {
    sync(1);
  }
  else {
    RtlEnterCriticalSection(param_1 + 4);
    do {
      uVar3 = (ulonglong)*puVar4 + 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar3,0,param_1);
        *puVar4 = uVar1;
        bVar5 = 2;
      }
    } while (!(bool)(bVar5 >> 1 & 1));
    RtlLeaveCriticalSection(param_1 + 4);
  }
  if (((uint)uVar3 & 0xffff) == 1) {
    fn_82A1E7D8(puVar4[8]);
  }
  return;
}

