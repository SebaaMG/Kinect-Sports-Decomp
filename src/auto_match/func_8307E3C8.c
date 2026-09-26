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


undefined8 fn_8307E3C8(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  puVar3 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  lVar1 = ((ulonglong)(puVar3[1] >> 0x1d) & 1) + 1;
  if (lVar1 != 0) {
    do {
      dataCacheBlockClearToZero(uVar2 + puVar3[0x12]);
      uVar2 = uVar2 + 0x80;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(lVar1 * 0x100));
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[4] = puVar3[4] & 0x7fffffff;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x13] = 0;
  *puVar3 = *puVar3 & 0x7cff000;
  puVar3[9] = puVar3[9] & 0xffffffe0;
  puVar3[1] = puVar3[1] & 0x7ffff000 | 0x80000000;
  *(undefined2 *)((int)puVar3 + 0x52) = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar3[3] & 0x3ffffff;
  return 0;
}

