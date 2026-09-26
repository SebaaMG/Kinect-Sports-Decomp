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
extern int fn_8265C9E0();
extern unsigned int *lbl_83263020;


void fn_82F5B5E8(void)

{
  if (lbl_83263020 == (undefined4 *)0x0) {
    lbl_83263020 = (undefined4 *)fn_8265C9E0(0x4c);
    if (lbl_83263020 == (undefined4 *)0x0) {
      lbl_83263020 = (undefined4 *)0x0;
    }
    else {
      *lbl_83263020 = 0;
      lbl_83263020[1] = 0;
      lbl_83263020[2] = 0;
      lbl_83263020[3] = 0;
      lbl_83263020[4] = 0;
      lbl_83263020[5] = 0;
      lbl_83263020[6] = 0;
      lbl_83263020[7] = 0;
      lbl_83263020[8] = 0;
      lbl_83263020[9] = 0;
      lbl_83263020[10] = 0;
      lbl_83263020[0xb] = 0;
      lbl_83263020[0xc] = 0;
      lbl_83263020[0xd] = 0;
    }
  }
  return;
}

