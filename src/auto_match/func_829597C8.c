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
extern int fn_8294D308();
extern int fn_82959138();


void fn_829597C8(int param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x160) = 0;
  iVar1 = fn_82959138(param_1,0x80000,0xe0000,*(undefined4 *)(*(int *)(param_1 + 0x104) + 8),
                        0x80000,0,param_2);
  if (-1 < iVar1) {
    fn_8294D308(param_1);
  }
  return;
}

