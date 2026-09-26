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
extern int fn_8300EE60();
extern unsigned int lbl_832642F0;


void fn_82FF9128(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_8300EE60((ulonglong)lbl_832642F0 + 0x4a4,*(int *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0xc),1,*(undefined4 *)(param_1 + 0x18),
                      *(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

