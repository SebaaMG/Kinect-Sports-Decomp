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
extern int fn_82512A48();
extern int (*lbl_83276794)();


void fn_8249B450(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 1;
    if (*(int *)(param_1 + 0x7c) != 0) {
      if (lbl_83276794 == (code *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*lbl_83276794)();
      }
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      fn_82512A48();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}

