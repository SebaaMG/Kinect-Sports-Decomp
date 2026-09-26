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
extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_827A1460();
extern unsigned int lbl_82005728;
extern unsigned int lbl_8200E890;


void fn_827236A8(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar3 == 4)) {
    iVar3 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar5 = (double)fn_826972E0(uVar2,uVar1);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,1);
      dVar6 = (double)fn_826972E0(uVar2,uVar1);
      uVar4 = fn_827A1460((double)(float)(dVar5 * lbl_82005728),
                                (double)(float)(dVar6 * lbl_82005728),*(undefined4 *)(iVar3 + 0xa0))
      ;
      dVar5 = lbl_8200E890;
      if (uVar4 != 0xffffffff) {
        dVar5 = (double)uVar4;
      }
      fn_82681898(dVar5,*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

