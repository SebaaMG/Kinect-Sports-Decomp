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
extern int fn_8229A000();
extern int fn_822A97A0();
extern int fn_82356A48();
extern int fn_82356C90();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832765BC;


void fn_82352208(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (*(int *)(param_2 + 0x378) == 0) {
    *(float *)(param_2 + 0x370) =
         (float)((double)*(float *)(param_2 + 0x35c) * param_1 + (double)*(float *)(param_2 + 0x370)
                );
  }
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    fn_822A97A0();
  }
  if ((*(int *)(param_2 + 0x3e0) != 0) && (lbl_832765BC != 0)) {
    fn_82356C90(param_2);
  }
  dVar5 = (double)lbl_821CC160;
  if (((*(int *)(param_2 + 0x388) != 0) && (dVar5 < (double)*(float *)(param_2 + 0x380))) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x380) - param_1),
     *(float *)(param_2 + 0x380) = fVar1, (double)fVar1 <= dVar5)) {
    fn_8229A000();
  }
  if (((double)*(float *)(param_2 + 0x374) == dVar5) ||
     ((double)*(float *)(param_2 + 0x370) < (double)*(float *)(param_2 + 0x374))) {
    if (*(int **)(param_2 + 0x18) == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(**(int **)(param_2 + 0x18) + 0x14))(param_1);
    if (iVar2 == 1) {
      if (*(int *)(param_2 + 8) != 9) {
        return;
      }
      uVar4 = 0;
      uVar3 = 1;
      goto LAB_82352330;
    }
    if (iVar2 == 2) goto LAB_82352328;
    if (iVar2 != 3) {
      return;
    }
    uVar4 = 1;
  }
  else {
LAB_82352328:
    uVar4 = 0;
  }
  uVar3 = 0;
LAB_82352330:
  fn_82356A48(param_2,uVar3,uVar4);
  return;
}

