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
extern int fn_825580C0();
extern int fn_828EB518();
extern unsigned int lbl_83265988;


ulonglong fn_8260E070(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = fn_825580C0(uVar2);
    if ((int)uVar1 != 0) {
      if ((uVar2 & 0xffffffff) == 0xff) {
        return (ulonglong)lbl_83265988;
      }
      uVar2 = fn_828EB518(uVar2);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return uVar1;
}

