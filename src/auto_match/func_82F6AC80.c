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
extern int fn_82F71CD0();
extern unsigned int lbl_831BB660;
extern unsigned int lbl_831BB8C0;


void fn_82F6AC80(undefined *param_1)

{
  if ((param_1 < &lbl_831BB660) || (&lbl_831BB8C0 < param_1)) {
    RtlEnterCriticalSection(param_1 + 0x20);
  }
  else {
    fn_82F71CD0((longlong)((int)(param_1 + 0x7ce449a0) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
  }
  return;
}

