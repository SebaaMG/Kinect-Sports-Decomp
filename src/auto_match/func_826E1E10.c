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
extern unsigned int lbl_8200C93C;
extern unsigned int lbl_821AAD20;


void fn_826E1E10(int param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = lbl_821AAD20;
  if ((int)param_2 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(param_1 + 0x14);
  do {
    if (puVar2 != (undefined4 *)0x14) {
      puVar2[-5] = &lbl_8200C93C;
      puVar2[-4] = 1;
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      puVar2[-1] = uVar1;
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
    }
    puVar2 = puVar2 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

