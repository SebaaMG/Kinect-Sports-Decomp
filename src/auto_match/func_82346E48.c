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
extern int fn_823412E8();
extern int fn_825300A8();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


void fn_82346E48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
  uVar5 = fn_827F57E8((double)lbl_821CC160,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10))
  ;
  uVar4 = lbl_821CA460;
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  uVar6 = 0;
  iVar1 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(iVar1 + 0x10c);
  *puVar2 = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x48) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x2c) != 0) {
    if (lbl_8327F844 != 0) {
      uVar3 = *(uint *)(**(int **)(param_1 + 0xc) + 0x2c);
      uVar6 = 0;
      fn_825300A8((double)*(float *)(*(int *)(param_1 + 0x10) + 0x34),uVar5,
                   (ulonglong)uVar3 +
                   ((longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0) &
                   0x7fffffff) * -2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c) = uVar6;
  }
  fn_823412E8(param_1);
  return;
}

