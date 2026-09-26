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
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E81818(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xb08) == 0) {
    if ((*(int *)(param_1 + 0x1ff0) == 0) || (*(int *)(*(int *)(param_1 + 0x1ff4) + 0xac) == 0)) {
      uVar2 = *(uint *)(param_1 + 0x7974);
    }
    else {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x1ff4) + 0x40);
    }
    if ((int)uVar2 < 0) {
      *(undefined4 *)(param_1 + 0x1f2c) = 0;
      *(undefined1 *)(param_1 + 0x7b30) = 0xff;
      *(uint *)(param_1 + 0x7b2c) = *(uint *)(param_1 + 0x7b2c) & 0xfffffff4;
    }
    else {
      if (((((uVar2 & 0xf0) != 0) && (lbl_83248E44 == 0)) && (lbl_83248E48 == 0)) &&
         (*(int *)(param_1 + 4) == 8)) {
        *(undefined4 *)(param_1 + 0x7910) = 1;
        *(undefined4 *)(param_1 + 0x7914) = 2;
        *(byte *)(param_1 + 0x7b30) = (byte)(uVar2 >> 4) & 0xf;
        *(byte *)(param_1 + 0x7b31) = (byte)(uVar2 >> 8) & 0xf;
      }
      uVar1 = uVar2 & 0xf;
      if ((uVar2 & 0xf) == 0) {
        *(undefined4 *)(param_1 + 0x1f2c) = 0;
        *(uint *)(param_1 + 0x7b2c) = *(uint *)(param_1 + 0x7b2c) & 0xfffffff4;
      }
      else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        *(undefined4 *)(param_1 + 0x1f2c) = 1;
        *(undefined4 *)(param_1 + 0x7910) = 1;
        *(undefined4 *)(param_1 + 0x7914) = 2;
        *(uint *)(param_1 + 0x7b2c) = *(uint *)(param_1 + 0x7b2c) | 0x20;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x7b2c) = *(uint *)(param_1 + 0x7b2c) | 10;
  }
  if (lbl_83248E44 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7b2c) = 0;
  return;
}

