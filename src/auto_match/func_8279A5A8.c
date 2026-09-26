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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int uStack_a;


void fn_8279A5A8(double param_1,int param_2)

{
  undefined2 uStack_a;
  
  if (param_1 == (double)lbl_82002AE0) {
    *(undefined2 *)(param_2 + 0x13a) = 0x14;
    *(byte *)(param_2 + 0x13f) = *(byte *)(param_2 + 0x13f) & 0xfb;
    return;
  }
  *(byte *)(param_2 + 0x13f) = *(byte *)(param_2 + 0x13f) | 4;
  uStack_a = (undefined2)(longlong)(param_1 * (double)lbl_8200571C);
  *(undefined2 *)(param_2 + 0x13a) = uStack_a;
  return;
}

