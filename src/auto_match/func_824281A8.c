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
extern int fn_82293BF0();
extern int fn_8229CE78();
extern int fn_8229F4F8();


void fn_824281A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xd4);
  if (*(int *)(iVar1 + 0x183c) != 1) {
    *(undefined4 *)(iVar1 + 0x183c) = 1;
    fn_82293BF0(iVar1);
    fn_8229CE78(*(undefined4 *)(iVar1 + 0x1854),2);
    fn_8229F4F8(*(undefined4 *)(iVar1 + 0xc),3);
  }
  return;
}

