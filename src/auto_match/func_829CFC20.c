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
extern unsigned int lbl_83217128;


void fn_829CFC20(int param_1)

{
  int iVar1;
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  iVar1 = (&lbl_83217128)[param_1];
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x14) & 0x10000) == 0)) {
    KeSetEvent(iVar1,1,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      KeSetEvent(*(int *)(iVar1 + 0x10),1,0);
    }
  }
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return;
}

