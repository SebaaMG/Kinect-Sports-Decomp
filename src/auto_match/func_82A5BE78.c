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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5C760();


longlong fn_82A5BE78(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  puVar1 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
  if (puVar1 == (undefined4 *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xc;
    puVar1[3] = param_1 + 4;
    puVar1[4] = param_2;
    lVar2 = fn_82A5C760(*(undefined4 *)(param_1 + 0x14),puVar1);
    if (lVar2 < 0) {
      fn_82A4F4E0(puVar1);
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  return lVar2;
}

