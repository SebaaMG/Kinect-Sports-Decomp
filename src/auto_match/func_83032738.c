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
extern unsigned int lbl_832642E0;
extern unsigned int *lbl_83264EC4;


int * fn_83032738(void)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)lbl_832642E0;
  RtlEnterCriticalSection(uVar2 + 4);
  if (lbl_83264EC4 != (int *)0x0) {
    (**(code **)(*lbl_83264EC4 + 4))(lbl_83264EC4);
  }
  piVar1 = lbl_83264EC4;
  RtlLeaveCriticalSection(uVar2 + 4);
  return piVar1;
}

