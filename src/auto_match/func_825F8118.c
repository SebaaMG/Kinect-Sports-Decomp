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
extern int fn_82536008();
extern int fn_82536288();
extern int fn_825F84F0();
extern unsigned int lbl_821CA460;


void fn_825F8118(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 8);
  lVar2 = 0xc;
  do {
    fn_82536008(*puVar3);
    fn_82536288(puVar3);
    fn_825F84F0(puVar3 + -1);
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 0xb;
  } while (lVar2 != 0);
  puVar3 = (undefined4 *)(param_1 + 0x210);
  lVar2 = 6;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x22c);
  lVar2 = 6;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  uVar1 = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x280) = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  return;
}

