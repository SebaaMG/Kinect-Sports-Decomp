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
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_82389B20(void)

{
  uint uVar1;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
  if (uVar1 == 0) {
    return 0xffffffff831d27c0;
  }
  if (uVar1 == 1) {
    return 0xffffffff831d2820;
  }
  if (uVar1 < 3) {
    return 0xffffffff831d2880;
  }
  if (uVar1 != 3) {
    return 0;
  }
  return 0xffffffff831d28e0;
}

