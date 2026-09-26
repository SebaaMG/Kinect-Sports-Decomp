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
extern int fn_822315A0();
extern int fn_8226D6A0();
extern int fn_824E3740();


void fn_824E4058(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_824E3740();
  if (*(int *)(iVar2 + 0x10) != 0) {
    fn_8226D6A0();
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    iVar1 = *(int *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    if (iVar1 != 0) {
      fn_822315A0();
    }
  }
  return;
}

