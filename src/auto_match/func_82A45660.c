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


undefined8 fn_82A45660(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  lVar2 = 0;
  iVar1 = (puVar3[1] >> 0x1d & 1) + 1;
  if (iVar1 != 0) {
    do {
      dataCacheBlockClearToZero(lVar2 + (ulonglong)puVar3[0x12]);
      lVar2 = lVar2 + 0x80;
    } while ((int)lVar2 < iVar1 * 0x100);
  }
  if (puVar3[5] != 0) {
    puVar3[5] = 0;
    puVar3[0xd] = 1;
  }
  if (puVar3[6] != 0) {
    puVar3[6] = 0;
    puVar3[0xd] = 1;
  }
  if ((*puVar3 & 0xfff) != 0) {
    puVar3[0xc] = 1;
    *puVar3 = *puVar3 & 0xfffff000;
  }
  if ((puVar3[1] & 0xfff) != 0) {
    puVar3[0xc] = 1;
    puVar3[1] = puVar3[1] & 0xfffff000;
  }
  if ((*puVar3 & 0x300000) != 0) {
    puVar3[0xc] = 1;
    *puVar3 = *puVar3 & 0xffcfffff;
  }
  if ((puVar3[2] & 0x3ffffff) != 0) {
    puVar3[0xc] = 1;
    puVar3[2] = puVar3[2] & 0xfc000000;
  }
  if ((puVar3[4] & 0x80000000) != 0) {
    puVar3[0xd] = 1;
    puVar3[4] = puVar3[4] & 0x7fffffff;
  }
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x13] = 0;
  if ((*puVar3 & 0xf8000000) != 0) {
    puVar3[0xc] = 1;
    *puVar3 = *puVar3 & 0x7ffffff;
  }
  if ((puVar3[9] & 0x1f) != 0) {
    puVar3[0xe] = 1;
    puVar3[9] = puVar3[9] & 0xffffffe0;
  }
  if ((puVar3[1] & 0x80000000) != 0x80000000) {
    puVar3[0xc] = 1;
    puVar3[1] = puVar3[1] | 0x80000000;
  }
  *(undefined2 *)((int)puVar3 + 0x52) = 0;
  if ((puVar3[2] & 0x7c000000) != 0) {
    puVar3[0xc] = 1;
    puVar3[2] = puVar3[2] & 0x83ffffff;
  }
  if ((puVar3[2] & 0x80000000) != 0) {
    puVar3[0xc] = 1;
    puVar3[2] = puVar3[2] & 0x7fffffff;
  }
  if ((puVar3[3] & 0x7c000000) != 0) {
    puVar3[0xc] = 1;
    puVar3[3] = puVar3[3] & 0x83ffffff;
  }
  if ((puVar3[3] & 0x80000000) != 0) {
    puVar3[0xc] = 1;
    puVar3[3] = puVar3[3] & 0x7fffffff;
  }
  return 0;
}

