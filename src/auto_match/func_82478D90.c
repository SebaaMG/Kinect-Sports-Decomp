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
extern int fn_822848B8();
extern int fn_82476E30();
extern int fn_82529320();
extern int fn_8255B0D8();
extern unsigned int lbl_821CC160;


void fn_82478D90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_1 + 0x20))();
  if (*(int *)(*(int *)(param_1[0x5b] + 0x844) + 0x358) != 0) {
    fn_8255B0D8();
  }
  *(undefined1 *)((int)param_1 + 0x106) = 1;
  iVar1 = *(int *)(param_1[9] + 0x84);
  iVar2 = *(int *)(param_1[9] + 0x7c);
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x148) = 0;
    }
    *(undefined1 *)(iVar1 + 0xb0) = 0;
    fn_82476E30(param_1 + 4,0,0);
  }
  if (param_1[0x5c] != 0) {
    fn_82529320(param_1[0x5c],0);
    param_1[0x5c] = 0;
  }
  if ((uint)LZCOUNT(iVar3 + -5) >> 5 != 0) {
    *(undefined1 *)(param_1 + 0x4f) = 1;
    param_1[0x51] = 0;
    param_1[0x65] = 0xe;
    iVar3 = lbl_821CC160;
    param_1[100] = -0x7ce396d8;
    param_1[0x50] = iVar3;
  }
  if (param_1[0x6f] != 0) {
    fn_822848B8();
    param_1[0x6f] = 0;
  }
  return;
}

