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
extern unsigned int lbl_821AAD20;


void fn_82BDDC20(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar1 = lbl_821AAD20;
  uVar3 = (param_2 & 0xffffffff) >> 3;
  if (uVar3 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(param_1 + -4);
  do {
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    puVar2[3] = uVar1;
    puVar2[4] = uVar1;
    puVar2[5] = uVar1;
    puVar2[6] = uVar1;
    puVar2[7] = uVar1;
    puVar2 = puVar2 + 8;
    *puVar2 = uVar1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}

