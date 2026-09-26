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
extern int fn_8245A358();
extern int fn_82522FF0();


void fn_82459D88(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0xb0);
  puVar1 = puVar2;
  if (0xf < *(uint *)(param_1 + 0xc4)) {
    puVar1 = (undefined4 *)*puVar2;
  }
  fn_8245A358(param_1,puVar1,param_1 + 0x90,param_1 + 0x94);
  if (*(int *)(param_1 + 0x90) < 1) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (0xf < *(uint *)(param_1 + 0xc4)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
    *(undefined4 *)(param_1 + 0x84) = 4;
  }
  else {
    dVar3 = (double)fn_82522FF0();
    if (*(double *)(param_1 + 0x18) < dVar3 - *(double *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x84) = 0xe;
    }
  }
  return;
}

