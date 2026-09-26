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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_832643B0;
extern unsigned int lbl_832643B4;
extern unsigned int lbl_832643D0;
extern unsigned int uRam832643b8;
extern unsigned int uRam832643bc;
extern unsigned int uRam832643c0;
extern unsigned int uRam832643c4;
extern unsigned int uRam832643c8;
extern unsigned int uRam832643cc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FEBED0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    puVar2 = &lbl_832643B0;
    lVar3 = 8;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lbl_832643B4 = 1;
    uRam832643b8 = 4;
    uRam832643bc = 0x2000;
    lbl_832643D0 = lbl_82002AE0;
    uRam832643c0 = 0;
    uRam832643c4 = 4;
    uRam832643c8 = 0x2000;
    uRam832643cc = 0x1000000;
    return;
  }
  puVar2 = (undefined4 *)(param_1 + -4);
  puVar1 = &lbl_832643B0;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = (undefined4 *)(param_1 + -4);
  puVar2 = &lbl_832643B0;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

