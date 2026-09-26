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
extern int fn_82ED7E90();
extern int fn_82ED80E0();


void fn_82F0E698(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if (*(int *)(param_1 + 0x630) == 0) {
      fn_82ED7E90(param_1,*(undefined4 *)(param_2 + 0x108),*(undefined4 *)(param_2 + 0x10c),
                      *(undefined4 *)(param_2 + 0x120),*(undefined4 *)(param_2 + 0x22c),
                      *(undefined4 *)(param_2 + 0x230),param_2 + 0x2a4,param_2 + 0x2a0);
    }
  }
  else {
    fn_82ED80E0(param_1,*(undefined4 *)(param_2 + 0x108),*(undefined4 *)(param_2 + 0x10c),
                    *(undefined4 *)(param_2 + 0x120),*(undefined4 *)(param_2 + 0x22c),
                    *(undefined4 *)(param_2 + 0x230),param_2 + 0x2a4,param_2 + 0x2a0);
  }
  return;
}

