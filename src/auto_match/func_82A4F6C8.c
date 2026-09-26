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


/* WARNING: Removing unreachable block (ram,0x82a68c34) */

ulonglong fn_82A4F6C8(int param_1,ulonglong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x28),0);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x34) / (ulonglong)*(ushort *)(param_1 + 0x28);
  if (uVar2 < (param_2 & 0xffffffff)) {
    uVar1 = *(ushort *)(param_1 + 0x24);
    if ((int)(uint)*(ushort *)(param_1 + 0x26) < (int)((uint)uVar1 * 8 - (uint)uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (longlong)(int)(((uint)*(ushort *)(param_1 + 0x26) << 1) / (uint)uVar1) + 0xfff4U &
              0xffff;
    }
    return ((uVar3 + (param_2 - uVar2)) - 1 & 0xffffffff) / uVar3;
  }
  return 0;
}

