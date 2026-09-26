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
extern int fn_82A41B80();
extern unsigned int lbl_82089670;


undefined4 * fn_82A41D10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *param_1 = 0;
  puVar2 = param_1 + 10;
  param_1[1] = &lbl_82089670;
  lVar3 = 0x3f;
  param_1[9] = 0;
  do {
    fn_82A41B80(puVar2);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x3c;
  } while (-1 < lVar3);
  param_1[0xf0a] = 0;
  param_1[0xf10] = 0;
  param_1[0xf11] = 0;
  param_1[0xf13] = 1;
  param_1[0xf0b] = param_1 + 0xf0c;
  param_1[0xf12] = 0;
  param_1[0xf0c] = 0;
  iVar1 = param_1[0xf0b];
  *(undefined4 *)(iVar1 + 8) = param_1[0xf0a];
  param_1[0xf0a] = iVar1 + 4;
  return param_1;
}

