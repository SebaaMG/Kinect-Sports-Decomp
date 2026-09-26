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


void fn_82C5D898(int param_1)

{
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x728);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x730);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x734);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x74c);
  if (*(int *)(param_1 + 0x700) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x708) = 1;
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x724);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x738);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x73c);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x750);
  return;
}

