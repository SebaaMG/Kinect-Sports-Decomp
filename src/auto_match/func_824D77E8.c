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
extern int fn_824CCFC8();
extern unsigned int lbl_821CC160;


double fn_824D77E8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(param_1 + 0x10c);
    piVar2 = *(int **)(param_1 + 0x114);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x108);
    piVar2 = *(int **)(param_1 + 0x110);
  }
  fVar3 = lbl_821CC160;
  if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
     (iVar4 = fn_824CCFC8(), fVar3 = lbl_821CC160, iVar4 != 0)) {
    dVar5 = (double)(**(code **)(*piVar1 + 0x14))(piVar1);
    dVar6 = (double)(**(code **)(*piVar2 + 0x14))(piVar2);
    fVar3 = (float)(dVar5 - dVar6);
  }
  return (double)fVar3;
}

