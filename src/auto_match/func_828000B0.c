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
extern unsigned int lbl_83156B10;


void fn_828000B0(undefined8 param_1,int param_2)

{
  if ((code *)(&lbl_83156B10)[(uint)*(ushort *)(param_2 + 0x16) * 9] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x828000d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&lbl_83156B10)[(uint)*(ushort *)(param_2 + 0x16) * 9])();
  return;
}

