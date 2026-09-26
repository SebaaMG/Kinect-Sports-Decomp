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
extern int fn_8252D970();
extern int fn_827F6210();
extern int fn_827F6308();
extern int fn_827F6310();
extern int fn_827F6370();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_825DA3E8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if ((*(int *)(param_1 + 400) != 0) &&
     (iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x110), iVar2 != 0)) {
    fn_827F6308(iVar2,1);
  }
  fn_8252D970((double)*(float *)(param_2 + 0x5bc),param_1);
  dVar4 = (double)lbl_821CC160;
  if ((*(int *)(param_1 + 400) != 0) &&
     (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x110) != 0)) {
    if (dVar4 < ABS((double)*(float *)(param_2 + 0x5c0))) {
      fn_827F6370();
    }
    else {
      fn_827F6210((double)lbl_821CA460);
    }
  }
  fVar1 = *(float *)(param_2 + 0x5c0);
  iVar2 = *(int *)(param_1 + 400);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(iVar2 + 400) + 0x114) == 0) {
      dVar3 = (double)lbl_821CA460;
    }
    else {
      dVar3 = (double)fn_827F6310();
    }
    dVar3 = ABS(dVar3);
    if ((double)fVar1 < dVar4) {
      dVar3 = (double)(float)(dVar3 * (double)lbl_82192734);
    }
    if (*(int *)(**(int **)(iVar2 + 400) + 0x110) != 0) {
      fn_827F6210(dVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0x5c4);
  return 1;
}

