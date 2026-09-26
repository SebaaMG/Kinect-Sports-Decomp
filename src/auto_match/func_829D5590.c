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


undefined4 * fn_829D5590(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  longlong lVar3;
  
  puVar1 = param_1 + 1;
  param_1[1] = 2;
  pcVar2 = "t";
  lVar3 = 2;
  do {
    puVar1[1] = *(undefined4 *)(pcVar2 + 4);
    pcVar2 = pcVar2 + 8;
    puVar1 = puVar1 + 2;
    *puVar1 = *(undefined4 *)pcVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_1 = 0x34;
  return param_1 + (param_1[1] + 1) * 2;
}

