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
extern int fn_82FF8358();
extern unsigned int lbl_832642E8;


char fn_82FA96A8(int param_1)

{
  int iVar1;
  int aiStack_20 [8];
  
  aiStack_20[0] = param_1 + 4;
  if (param_1 == 0) {
    aiStack_20[0] = 0;
  }
  aiStack_20[2] = *(undefined4 *)(param_1 + 0x28);
  aiStack_20[1] = 0;
  iVar1 = fn_82FF8358((ulonglong)lbl_832642E8 + 0x30,aiStack_20);
  return (iVar1 == 0) + '\x01';
}

