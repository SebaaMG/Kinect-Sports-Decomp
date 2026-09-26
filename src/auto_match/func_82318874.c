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
#define ZEXT48(x) ((U64)((U32)(x)))


longlong fn_82318874(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint in_r9;
  undefined4 *in_r10;
  undefined4 **ppuVar2;
  undefined4 *in_r11;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  while (in_r9 == 0) {
    if ((uint)in_r11[3] < param_2) {
      puVar1 = (undefined4 *)in_r11[2];
    }
    else {
      puVar1 = (undefined4 *)*in_r11;
      in_r10 = in_r11;
    }
    in_r11 = puVar1;
    in_r9 = (uint)*(byte *)((int)puVar1 + 0x25);
  }
  apuStack_c[0] = *(undefined4 **)(param_1 + 4);
  puStack_10 = in_r10;
  if ((in_r10 == apuStack_c[0]) || (param_2 < (uint)in_r10[3])) {
    ppuVar2 = apuStack_c;
  }
  else {
    ppuVar2 = &puStack_10;
  }
  if (ZEXT48(*ppuVar2) != ZEXT48(apuStack_c[0])) {
    return ZEXT48(*ppuVar2) + 0x10;
  }
  return 0;
}

