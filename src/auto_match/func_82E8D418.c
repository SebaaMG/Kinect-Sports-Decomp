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


void fn_82E8D418(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x7848) == *(int *)(param_1 + 0x7840)) &&
     (*(int *)(param_1 + 0x784c) == *(int *)(param_1 + 0x7844))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x7818) = 1;
  }
  *(undefined4 *)(param_1 + 0x7814) = uVar1;
  *(int *)(param_1 + 0x7848) = *(int *)(param_1 + 0x7840);
  *(undefined4 *)(param_1 + 0x7828) = *(undefined4 *)(param_1 + 0x7820);
  *(undefined4 *)(param_1 + 0x782c) = *(undefined4 *)(param_1 + 0x7824);
  *(undefined4 *)(param_1 + 0x784c) = *(undefined4 *)(param_1 + 0x7844);
  return;
}

