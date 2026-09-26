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
extern int fn_8265C9E0();
extern unsigned int lbl_821BBC84;
extern unsigned int *lbl_83276594;


void fn_8245D538(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lbl_83276594 = (undefined4 *)fn_8265C9E0(0x100);
  if (lbl_83276594 == (undefined4 *)0x0) {
    lbl_83276594 = (undefined4 *)0x0;
  }
  else {
    lbl_83276594[1] = 0;
    puVar1 = lbl_83276594 + 0x1a;
    *lbl_83276594 = &lbl_821BBC84;
    lVar3 = 3;
    puVar2 = lbl_83276594 + 0xb;
    lbl_83276594[2] = 0;
    lbl_83276594[3] = 0;
    lbl_83276594[4] = 0;
    lbl_83276594[0x15] = 0;
    lbl_83276594[0x16] = 0;
    lbl_83276594[0x14] = 0;
    lbl_83276594[5] = 0;
    lbl_83276594[6] = 0;
    lbl_83276594[7] = 0;
    lbl_83276594[8] = 0;
    lbl_83276594[0x12] = 0;
    lbl_83276594[0x13] = 0;
    lbl_83276594[0x37] = 0;
    lbl_83276594[0x38] = 0;
    lbl_83276594[0x35] = 0;
    lbl_83276594[0x36] = 0;
    lbl_83276594[0xb] = 0;
    lbl_83276594[10] = 0;
    do {
      puVar2[4] = 0;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      puVar1[9] = 0;
      puVar1 = puVar1 + 7;
      *puVar1 = 0xffffffff;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lbl_83276594[0x1a] = 0xffffffff;
    lbl_83276594[0x1c] = 0;
    lbl_83276594[9] = 0;
  }
  RtlInitializeCriticalSection(lbl_83276594 + 0x39);
  return;
}

