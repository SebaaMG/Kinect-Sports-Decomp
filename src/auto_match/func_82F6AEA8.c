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
extern unsigned int uStack_21;


int fn_82F6AEA8(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uStack_21;
  byte abStack_20 [32];
  
  puVar3 = &uStack_21;
  lVar6 = 0x20;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    bVar2 = *param_2;
    abStack_20[bVar1 >> 3] = (byte)(1 << (bVar1 & 7)) | abStack_20[bVar1 >> 3];
    bVar1 = bVar2;
  }
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return 0;
  }
  iVar5 = 0;
  uVar4 = 1 << (bVar1 & 7) & (uint)abStack_20[bVar1 >> 3];
  while (uVar4 != 0) {
    iVar5 = iVar5 + 1;
    uVar4 = 1 << (param_1[iVar5] & 7) & (uint)abStack_20[param_1[iVar5] >> 3];
  }
  return iVar5;
}

