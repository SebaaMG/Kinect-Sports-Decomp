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
extern int fn_8288B760();


ulonglong fn_824D2AE0(int param_1)

{
  char cVar2;
  ulonglong uVar1;
  
  if (*(int *)(param_1 + -0xdc) == 0) {
    uVar1 = ((~(ulonglong)*(uint *)(param_1 + -200) & 0xffffffff) >> 0x1f) +
            (ulonglong)(5 < (ulonglong)*(uint *)(param_1 + -200)) & 1;
  }
  else {
    cVar2 = fn_8288B760();
    uVar1 = (ulonglong)(cVar2 != '\0');
  }
  return uVar1;
}

