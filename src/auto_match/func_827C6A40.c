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
extern unsigned int *auStack_850;
extern unsigned int *auStack_884;
extern int fn_82F691F0();


void fn_827C6A40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 auStack_884 [13];
  undefined1 auStack_850 [2128];
  
  lVar3 = 8;
  puVar1 = auStack_884;
  do {
    puVar2 = puVar1;
    puVar1 = puVar2 + 1;
    *puVar1 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined1 *)(puVar2 + 2) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_850,0,0x404);
}

