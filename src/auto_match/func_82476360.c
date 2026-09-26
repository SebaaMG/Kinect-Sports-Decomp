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
extern unsigned int *auStack_50;
extern int fn_8227FFA8();
extern int fn_82292AE8();
extern int fn_82359C18();
extern int fn_82529320();
extern int fn_8254F110();
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_825708F0();
extern int fn_8265CA20();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821CC160;


void fn_82476360(int param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  double dVar4;
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_1 + 0x160) != 0) {
    fn_82529320(*(int *)(param_1 + 0x160),0);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  dVar4 = (double)lbl_821CC160;
  if (dVar4 < (double)*(float *)(param_1 + 0x11c)) {
    iVar3 = fn_82292AE8();
    if (*(int **)(iVar3 + 0x24) != (int *)0x0) {
      iVar1 = **(int **)(iVar3 + 0x24);
      uVar2 = fn_82864988(auStack_50,0xffffffff821bcf1c);
      (**(code **)(iVar1 + 0x10))(dVar4,*(undefined4 *)(iVar3 + 0x24),uVar2);
      fn_82864898(auStack_50);
    }
    fn_8254F110((double)*(float *)(param_1 + 0x80),(double)*(float *)(param_1 + 0x80),
                      *(undefined4 *)(param_1 + 0x18),0);
  }
  iVar3 = fn_825529B0(param_1 + 0x164);
  if (iVar3 != 0) {
    fn_82552B50(param_1 + 0x164,1);
  }
  if ((*(int *)(param_1 + 0x174) != -1) && (*(int *)(*(int *)(param_1 + 0x15c) + 0x848) != 0)) {
    fn_825708F0();
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    fn_8227FFA8(iVar3);
    fn_8265CA20(iVar3);
  }
  fn_82359C18(param_1 + 0x28);
  return;
}

