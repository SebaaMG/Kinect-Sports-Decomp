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


longlong fn_829D6C98(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  RtlEnterCriticalSection();
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 < 0x100) {
    lVar2 = *(longlong *)((uVar1 + 5) * 8 + param_1);
    if (lVar2 != 0) {
      *(uint *)(param_1 + 0x20) = uVar1 + 1;
      goto LAB_829d6cc4;
    }
    *(undefined4 *)(param_1 + 0x20) = 0x100;
  }
  lVar2 = 0;
LAB_829d6cc4:
  RtlLeaveCriticalSection(param_1);
  return lVar2;
}

