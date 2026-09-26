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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82A2B760();
extern unsigned int uStack_10;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


ulonglong fn_82A1F4F8(undefined8 param_1)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 auStack_40 [48];
  uint uStack_10;
  
  RtlInitAnsiString(auStack_60,param_1);
  puStack_54 = auStack_60;
  uStack_58 = 0xfffffffd;
  uStack_50 = 0x40;
  iVar2 = NtQueryFullAttributesFile(&uStack_58,auStack_40);
  if (iVar2 < 0) {
    fn_82A2B760();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (ulonglong)uStack_10;
  }
  return uVar1;
}

