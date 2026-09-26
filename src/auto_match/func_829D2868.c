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
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83215A54;
extern unsigned int lbl_83215A58;
extern unsigned int lbl_83215A5C;
extern unsigned int lbl_83215A60;


void fn_829D2868(int param_1)

{
  RtlEnterCriticalSection(0xffffffff8315c454);
  if (lbl_83215A40 == 1) {
    if (param_1 == 0) {
      if ((lbl_83215A58 & 1) != 0) goto LAB_829d28ec;
    }
    else {
      lbl_83215A60 = lbl_83215A5C;
      sync(0);
    }
    KeSetEvent(0xffffffff83215a44,1,0);
    if (lbl_83215A54 != 0) {
      KeSetEvent(lbl_83215A54,1,0);
    }
  }
LAB_829d28ec:
  RtlLeaveCriticalSection(0xffffffff8315c454);
  return;
}

