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
extern int fn_82A1E658();
extern int fn_82A1E6A0();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82E65FD0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  
  lVar5 = param_1 + 0x24;
  if (*(int *)((int)param_1 + 0x24) == 0) {
    uVar4 = fn_82A1E6A0(0,1,0,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = thunk_FUN_82a2b798();
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      return uVar4 & 0xffff | 0x80070000;
    }
    bVar3 = false;
    do {
      puVar6 = (uint *)lVar5;
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar5);
          *puVar6 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar4,0,lVar5);
        *puVar6 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    if (uVar1 != 0) {
      fn_82A1E658();
    }
  }
  return 0;
}

