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
extern int fn_82E3C5F8();
extern int fn_82E74AE8();


void fn_82E42C10(int param_1)

{
  ulonglong uVar1;
  ushort *apuStack_30 [12];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2ac) != 0) {
    do {
      fn_82E3C5F8(param_1 + 0x26c,uVar1,apuStack_30);
      (**(code **)(**(int **)((*apuStack_30[0] + 0x1b) * 4 + param_1) + 0x2c))();
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2ac));
  }
  fn_82E74AE8(*(undefined4 *)(param_1 + 0x4b0));
  return;
}

