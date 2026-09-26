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
extern int fn_82FE3AE0();


void fn_82FE02A0(int param_1)

{
  if (((*(char *)(param_1 + 0x170) != '\0') && (*(int *)(param_1 + 0x168) != 0)) &&
     ((*(int *)(param_1 + 0x168) != 1 || (*(char *)(param_1 + 0xd0) != '\0')))) {
    fn_82FE3AE0((double)*(float *)(param_1 + 0x110),(double)*(float *)(param_1 + 0x10c),
                      (double)*(float *)(param_1 + 0x114),
                      (ulonglong)*(byte *)(param_1 + 0xcf) * 0x28 +
                      (ulonglong)*(uint *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x16c),
                      *(undefined4 *)(param_1 + 200));
    *(undefined4 *)((uint)*(byte *)(param_1 + 0xcf) * 0x28 + *(int *)(param_1 + 0xd8) + 0x24) =
         *(undefined4 *)(param_1 + 0x168);
    if ((*(int *)(param_1 + 0x168) == 1) && (*(char *)(param_1 + 0xd0) == '\x02')) {
      fn_82FE3AE0((double)*(float *)(param_1 + 0x110),(double)*(float *)(param_1 + 0x10c),
                        (double)*(float *)(param_1 + 0x114),
                        ((ulonglong)*(byte *)(param_1 + 0xcf) + 1) * 0x28 +
                        (ulonglong)*(uint *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x16c),
                        *(undefined4 *)(param_1 + 200));
      *(undefined4 *)((uint)*(byte *)(param_1 + 0xcf) * 0x28 + *(int *)(param_1 + 0xd8) + 0x4c) =
           *(undefined4 *)(param_1 + 0x168);
    }
  }
  return;
}

