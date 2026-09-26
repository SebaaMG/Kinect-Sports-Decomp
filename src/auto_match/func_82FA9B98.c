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
extern int fn_82FA8A88();
extern unsigned int lbl_8216CC20;


void fn_82FA9B98(int param_1)

{
  int iVar1;
  int iVar2;
  int aiStack_20 [2];
  longlong lStack_18;
  
  iVar2 = *(int *)(param_1 + 0xc);
  aiStack_20[1] = 4;
  iVar1 = -(*(int *)(param_1 + 0x20) + iVar2);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  aiStack_20[0] = (int)((double)(longlong)iVar2 * lbl_8216CC20);
  lStack_18 = (longlong)aiStack_20[0];
  fn_82FA8A88(*(undefined4 *)(param_1 + 0x40),aiStack_20,0xffffffffffffffff);
  *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) | 0x8000;
  return;
}

