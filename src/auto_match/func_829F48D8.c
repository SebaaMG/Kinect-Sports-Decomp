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
extern int fn_829F3428();
extern int fn_829F3E78();
extern int fn_829F4290();


void fn_829F48D8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  fn_829F3E78();
  if (*(int *)(param_4 + 0x90) == 0) {
    iVar1 = *(int *)(param_4 + 0x4c) - *(int *)(param_4 + 0x58);
    iVar2 = *(int *)(param_4 + 0x50) - *(int *)(param_4 + 0x5c);
    if ((iVar1 * iVar1 + iVar2 * iVar2 < 0xf) ||
       (fn_829F4290(param_1,param_2,param_3,param_4), *(int *)(param_4 + 0x90) == 0)) {
      fn_829F3428(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

