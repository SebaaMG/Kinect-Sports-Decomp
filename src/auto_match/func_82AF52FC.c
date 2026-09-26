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


longlong fn_82AF52FC(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_r8;
  int in_r9;
  undefined4 *in_r11;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    puVar1 = (undefined4 *)(*(uint *)*in_r11 >> 0xd & 0xffff);
    if (in_r8 < puVar1) {
      in_r8 = puVar1;
    }
    in_r11 = (undefined4 *)in_r11[1];
    in_cr6 = (in_r11 == (undefined4 *)0x0) << 1;
  }
  for (puVar1 = *(undefined4 **)(in_r9 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    puVar2 = (undefined4 *)(*(uint *)*puVar1 >> 0xd & 0xffff);
    if (in_r11 < puVar2) {
      in_r11 = puVar2;
    }
  }
  if (in_r8 == in_r11) {
    return 0;
  }
  return (-(ulonglong)(in_r11 < in_r8) & 0xfffffffe) + 1;
}

