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
extern unsigned int *lbl_832635C0;


ulonglong fn_82F71D98(void)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  cVar1 = *lbl_832635C0;
  lVar4 = (longlong)cVar1;
  if (lVar4 != 0) {
    if (('/' < cVar1) && (cVar1 < ':')) {
      lbl_832635C0 = lbl_832635C0 + 1;
      return lVar4 - 0x2f;
    }
    uVar2 = 0;
    while( true ) {
      iVar5 = (int)lVar4;
      if (iVar5 == 0x40) {
        lbl_832635C0 = lbl_832635C0 + 1;
        return uVar2;
      }
      if (iVar5 == 0) break;
      if ((iVar5 < 0x41) || (0x50 < iVar5)) {
        return 0xffffffffffffffff;
      }
      lbl_832635C0 = lbl_832635C0 + 1;
      lVar3 = (uVar2 & 0xfffffff) * 0x10 + lVar4;
      lVar4 = (longlong)*lbl_832635C0;
      uVar2 = lVar3 - 0x41;
    }
  }
  return 0;
}

