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
extern int fn_82529320();
extern int fn_8255B400();


void fn_8240A638(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_82529320(*(int *)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_82529320(*(int *)(param_1 + 0x44),0);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_82529320(*(int *)(param_1 + 0x48),0);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_82529320(*(int *)(param_1 + 0x4c),0);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    fn_8255B400(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x844));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}

