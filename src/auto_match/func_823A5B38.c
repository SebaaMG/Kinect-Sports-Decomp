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
extern int fn_82359928();
extern int fn_82398668();
extern int fn_823987C8();
extern int fn_8239FF60();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern unsigned int lbl_8218E8FC;


void fn_823A5B38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  
  fn_823987C8(*(undefined4 *)(param_1 + 8));
  fn_82398668(*(undefined4 *)(param_1 + 8));
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x50))();
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x220) = 0;
  *(undefined4 *)(iVar1 + 0x224) = 0;
  *(undefined4 *)(iVar1 + 0x228) = 0;
  *(undefined4 *)(iVar1 + 0x22c) = 0;
  *(undefined4 *)(iVar1 + 0x230) = 0;
  *(undefined4 *)(iVar1 + 0x238) = 0;
  *(undefined4 *)(iVar1 + 0x23c) = 0;
  *(undefined4 *)(iVar1 + 0x234) = 0;
  dVar4 = (double)(**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0xa0))();
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 200) = (float)dVar4;
  *(float *)(iVar1 + 0xc4) = (float)dVar4;
  *(undefined4 *)(iVar1 + 0xbc) = 1;
  *(undefined4 *)(iVar1 + 0xc0) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0xac) != 1) {
    iVar3 = fn_8249ABC0();
    if (*(int *)(iVar1 + 0xb4) != -1) {
      fn_8249D980(*(undefined4 *)(iVar3 + 0x110));
      *(undefined4 *)(iVar1 + 0xb4) = 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0xac) = 1;
  }
  fn_82359928(*(undefined4 *)(param_1 + 8),1);
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) != 0) {
    fn_8239FF60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2dc),0xc);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = lbl_8218E8FC;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

