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


void fn_82FE65F0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = param_1 + -1;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[3] = 0;
  param_1[1] = 4;
  param_1[2] = 0x2000;
  uVar1 = lbl_82002AE0;
  *param_1 = 1;
  param_1[7] = uVar1;
  param_1[4] = 4;
  param_1[5] = 0x2000;
  param_1[6] = 0x1000000;
  return;
}

