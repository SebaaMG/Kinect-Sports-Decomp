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
extern int fn_83026CE0();
extern int fn_8303A208();


void fn_83026FD8(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  fn_8303A208((double)*(float *)(*(int *)(param_1 + 0xb0) + 8),param_1 + 0x10);
  if (*(ushort *)(param_1 + 0x96) < *(ushort *)(param_2 + 0xc)) {
    if (*(short *)(param_1 + 0x6e) != 0) {
      fn_83026CE0(param_1,param_2);
      return;
    }
    if (*(char *)(param_1 + 0xb8) == '\0') {
      return;
    }
    uVar2 = 0x11;
  }
  else {
    uVar2 = 0x2d;
  }
  *(undefined4 *)(param_2 + 0x340) = uVar2;
  return;
}

