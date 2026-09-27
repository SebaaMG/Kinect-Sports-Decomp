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
extern int fn_8253F898();
extern int fn_825A8768();
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_825D2D60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  
  fn_8253F898();
  dVar4 = (double)lbl_821CC160;
  dVar3 = (double)*(float *)(param_2 + 0x828);
  if ((double)*(float *)(param_2 + 0x838) <= dVar4) {
    dVar4 = (double)(*(float *)(param_2 + 0x820) * lbl_8327F894);
  }
  iVar1 = *(int *)(param_2 + 0x93c);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x84);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(dVar3,dVar4,piVar2,param_2);
    }
    piVar2 = *(int **)(iVar1 + 0x9c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(dVar3,dVar4,piVar2,param_2);
    }
  }
  if (*(int *)(param_1 + 0xb74) != 0) {
    fn_825A8768(param_1);
    *(undefined4 *)(param_1 + 0xb74) = 0;
  }
  return;
}

