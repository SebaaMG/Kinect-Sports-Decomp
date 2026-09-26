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
extern int fn_83142E0C();


undefined8 fn_82A2C0F8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  KeEnterCriticalRegion();
  RtlEnterCriticalSection(iVar1);
  if (*(char *)(iVar1 + 0xcb) == '\0') {
    *(undefined1 *)(iVar1 + 0xcb) = 1;
    *(undefined4 *)(iVar1 + 0x88) = 0xc000026e;
    NtClose(*(undefined4 *)(iVar1 + 0x2c));
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  else {
    uVar2 = 0xffffffffc000026e;
  }
  RtlLeaveCriticalSection(iVar1);
  if (-1 < (int)uVar2) {
    fn_83142E0C(param_1);
  }
  KeLeaveCriticalRegion();
  return uVar2;
}

