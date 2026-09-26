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
extern int fn_82BD4A10();
extern int fn_82BD6C80();
extern unsigned int lbl_83223F40;


void fn_82BD36E8(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  lVar2 = 0;
  uVar3 = 0x50;
  iVar4 = -0x7cd60ff0;
  do {
    RtlEnterCriticalSection(lbl_83223F40 + 0xf0);
    iVar1 = *(int *)(uVar3 + lbl_83223F40);
    if (iVar1 == 0) {
      iVar1 = lbl_83223F40 + 0xf0;
      *(undefined4 *)(iVar4 + -0x10) = 0;
      RtlLeaveCriticalSection(iVar1);
    }
    else {
      *(undefined4 *)(iVar4 + -0x10) = 1;
      fn_82BD6C80(iVar1,iVar4 + -8,iVar4,iVar4 + -0xc);
      RtlLeaveCriticalSection(lbl_83223F40 + 0xf0);
      fn_82BD4A10(lbl_83223F40,lVar2);
    }
    uVar3 = uVar3 + 4;
    lVar2 = lVar2 + 1;
    iVar4 = iVar4 + 0x18;
  } while (uVar3 < 0x60);
  return;
}

