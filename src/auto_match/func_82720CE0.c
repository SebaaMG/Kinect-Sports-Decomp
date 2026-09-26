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
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


bool fn_82720CE0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar1 = *(int **)(param_1 + 0x10c);
  if (piVar1 != (int *)0x0) {
    uStack_1c = 0;
    uStack_20 = 0xc;
    uStack_18 = param_3;
    uStack_14 = param_2;
    (**(code **)(*piVar1 + 4))(piVar1,param_1,&uStack_20);
  }
  return piVar1 != (int *)0x0;
}

