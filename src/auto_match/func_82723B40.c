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
extern int fn_82697610();
extern int fn_827A1508();
extern unsigned int lbl_8200E890;


void fn_82723B40(int param_1)

{
  undefined4 uVar1;
  int iVar4;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar5;
  double dVar6;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar4 == 4)) {
    iVar4 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      lVar3 = fn_82697610(uVar2,uVar1);
      dVar6 = lbl_8200E890;
      if ((-1 < lVar3) &&
         (uVar5 = fn_827A1508(*(undefined4 *)(iVar4 + 0xa0)), dVar6 = lbl_8200E890,
         uVar5 != 0xffffffff)) {
        dVar6 = (double)uVar5;
      }
      fn_82681898(dVar6,*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

