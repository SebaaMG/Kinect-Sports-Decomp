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
extern int fn_82653918();
extern int fn_8265C990();


longlong fn_82647460(int param_1)

{
  longlong lVar1;
  
  if ((ulonglong)*(uint *)(param_1 + 0x3c) == 1) {
    fn_82653918();
    fn_8265C990(*(undefined4 *)(param_1 + -4),0x24800000);
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x3c) - 1;
    *(int *)(param_1 + 0x3c) = (int)lVar1;
  }
  return lVar1;
}

