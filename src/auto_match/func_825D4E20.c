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
extern int fn_82640058();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825D4E20(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x2f04) = 7;
  *(uint *)(param_1 + 0x28dc) =
       *(uint *)(param_1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(param_1 + 0x3148) != 0) & 7;
  uVar2 = lbl_821CC160;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x2000000000;
  uVar1 = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x17d0) = uVar2;
  *(undefined4 *)(param_1 + 0x17d4) = uVar1;
  *(undefined4 *)(param_1 + 0x17d8) = uVar2;
  *(undefined4 *)(param_1 + 0x17dc) = uVar2;
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) | 0x4000000000000000;
  fn_82640058(param_1,0xd,4,param_2,0x1c);
  *(undefined4 *)(param_1 + 0x2f04) = 0xf;
  *(uint *)(param_1 + 0x28dc) =
       *(uint *)(param_1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(param_1 + 0x3148) != 0) & 0xf;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x2000000000;
  return;
}

