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


byte * fn_82F82750(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uStack_21;
  byte abStack_20 [32];
  
  puVar3 = &uStack_21;
  lVar4 = 0x20;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    bVar2 = *param_2;
    abStack_20[bVar1 >> 3] = (byte)(1 << (bVar1 & 7)) | abStack_20[bVar1 >> 3];
    bVar1 = bVar2;
  }
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    if ((1 << (bVar1 & 7) & (uint)abStack_20[bVar1 >> 3]) != 0) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return param_1;
}

