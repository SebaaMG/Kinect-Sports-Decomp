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
extern int fn_82B7BEB0();
extern int fn_82BC6DC0();


void fn_82BD12E8(int param_1)

{
  int iVar1;
  
  while (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x1c);
    if (iVar1 != 0) {
      fn_82B7BEB0(*(undefined4 *)(iVar1 + -4),iVar1 + -4);
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82BC6DC0(*(int *)(param_1 + 0x10),1);
  }
  return;
}

