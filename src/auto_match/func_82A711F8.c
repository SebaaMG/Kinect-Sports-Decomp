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
extern unsigned int lbl_8321A7C0;


undefined8 fn_82A711F8(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  
  if (lbl_8321A7C0 == 0) {
    uVar3 = 0;
    piVar2 = (int *)0x8321a3bc;
    lVar5 = 0x100;
    do {
      uVar1 = uVar3 & 0x1f;
      cVar4 = (char)uVar3;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
      *piVar2 = uVar1 + 0x20 << (((int)cVar4 >> 5) + 0xfU & 0x3f);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lbl_8321A7C0 = 1;
  }
  return 0;
}

