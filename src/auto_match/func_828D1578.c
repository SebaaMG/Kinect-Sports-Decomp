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
extern int fn_828A4ED0();
extern int fn_828B1BE0();


undefined8 fn_828D1578(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = fn_828A4ED0(*(undefined4 *)(param_1 + 0xa4));
  if ((uVar1 & 0xffffffff) != 0) {
    fn_828B1BE0(uVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x88),
                      *(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),
                      *(undefined4 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98),
                      *(undefined1 *)(param_1 + 0xc4));
  }
  return 1;
}

