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
extern int fn_822A0EB8();
extern int fn_82359928();
extern int fn_823980B0();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CC160;


void fn_823A3880(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)lbl_821CC160;
  *(float *)(param_1 + 0xc) = lbl_821CC160;
  if (*(int *)(param_1 + 0x14) == 1) {
    fn_823980B0(*(undefined4 *)(param_1 + 8),0,0);
    fn_823980B0(*(undefined4 *)(param_1 + 8),1,0);
    fn_822A0EB8(*(undefined4 *)(*(int *)(param_1 + 8) + 0xd4));
    *(undefined4 *)(param_1 + 0x10) = lbl_821917B0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(*(int *)(param_1 + 8) + 0x260) = *(uint *)(*(int *)(param_1 + 8) + 0x260) | 4;
  *(float *)(param_1 + 0x10) = (float)dVar3;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(iVar1 + 0x178) == 2) {
    *(float *)(param_1 + 0x10) = (float)dVar3;
  }
  if (*(int *)(iVar1 + 0xac) != 1) {
    iVar2 = fn_8249ABC0();
    if (*(int *)(iVar1 + 0xb4) != -1) {
      fn_8249D980(*(undefined4 *)(iVar2 + 0x110));
      *(undefined4 *)(iVar1 + 0xb4) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0xac) = 1;
  }
  fn_82359928(*(undefined4 *)(param_1 + 8),1);
  return;
}

