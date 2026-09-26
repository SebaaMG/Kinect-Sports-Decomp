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


void fn_82DF1D70(int param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  uVar1 = 1;
  puVar2 = (uint *)(param_1 + 0x34);
  lVar3 = 0x20;
  do {
    if ((uVar1 & param_2) != 0) {
      *puVar2 = *puVar2 | param_3;
    }
    if ((uVar1 & param_3) != 0) {
      *puVar2 = *puVar2 | param_2;
    }
    puVar2 = puVar2 + 1;
    uVar1 = (uVar1 & 0x7fffffff) << 1 | uVar1 >> 0x1f;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

