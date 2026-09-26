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
extern int fn_82448E88();
extern int fn_8244D118();


void fn_824484B8(int param_1)

{
  bool bVar1;
  
  fn_8244D118();
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x14c) + 1U < *(uint *)(*(int *)(param_1 + 0x40) + 0x158))
  {
    bVar1 = true;
  }
  else {
    bVar1 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x148) + 1 <
            (ulonglong)*(uint *)(*(int *)(param_1 + 0x40) + 0x154);
  }
  if (((!bVar1) && (*(int *)(*(int *)(param_1 + 0x40) + 0x198) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x48) + 0x40) == 0)) {
    fn_82448E88(param_1);
  }
  return;
}

