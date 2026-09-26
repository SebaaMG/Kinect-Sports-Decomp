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
extern unsigned int *auStack_30;


undefined8 fn_82C01140(int *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined2 auStack_30 [12];
  
  puVar2 = auStack_30;
  auStack_30[0] = 0;
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  param_1[0xa5] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = 0xffffffff80070057;
  }
  (**(code **)(*param_1 + 0x2c))(param_1);
  return uVar1;
}

