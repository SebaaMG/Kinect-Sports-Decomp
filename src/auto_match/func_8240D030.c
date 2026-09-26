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
extern unsigned int *auStack_20;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_24;


void fn_8240D030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack_24;
  undefined4 auStack_20 [8];
  
  *(undefined4 *)(param_1 + 4) = param_2;
  auStack_20[2] = lbl_821CC160;
  auStack_20[0] = 0;
  lVar3 = 5;
  puVar1 = (undefined4 *)(param_1 + 4);
  auStack_20[1] = 0;
  auStack_20[3] = 0;
  auStack_20[4] = 4;
  puVar2 = &uStack_24;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auStack_20[0] = 0;
  auStack_20[1] = 0;
  auStack_20[3] = 0;
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  auStack_20[4] = 4;
  puVar2 = &uStack_24;
  lVar3 = 5;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

