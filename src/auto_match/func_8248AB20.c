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
extern int fn_8248C128();


void fn_8248AB20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if ((*(int *)(iVar1 + 0x18) == 0) || (*(int *)(iVar1 + 8) == 0)) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x58) = 1;
    }
  }
  fn_8248C128(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x58) = 0;
  return;
}

