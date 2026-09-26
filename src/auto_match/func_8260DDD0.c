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
extern int fn_8260BA88();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_10;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_c;


void fn_8260DDD0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = lbl_821CC160;
  puVar2 = &uStack_28;
  uStack_24 = 0;
  uStack_30 = 0;
  lVar3 = 2;
  uStack_2c = 0;
  uStack_28 = 0;
  do {
    puVar2[3] = uVar1;
    puVar2 = puVar2 + 2;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uStack_10 = 0;
  uStack_c = 0;
  fn_8260BA88(param_1 + 0x10,&uStack_30);
  return;
}

