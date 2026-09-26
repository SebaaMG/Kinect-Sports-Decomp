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
extern int fn_822B70F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_822B7178(double param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  
  if (*(int *)(param_2 + 300) == 0) {
    fn_822B70F0(param_1,param_2,param_3,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_2 + 0x14) + 0x8c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x7c))(piVar1,param_3,0);
    }
    iVar2 = *(int *)(param_2 + 0x14);
    if ((double)lbl_821CA460 <= param_1) {
      *(uint *)(iVar2 + 0x1e0) = *(uint *)(iVar2 + 0x1e0) & 0xffffffdf;
      *(uint *)(*(int *)(param_2 + 0x14) + 0x1e0) =
           *(uint *)(*(int *)(param_2 + 0x14) + 0x1e0) & 0xfffffff7;
      *(undefined4 *)(param_2 + 0x138) = 0;
    }
    else {
      *(uint *)(iVar2 + 0x1e0) = *(uint *)(iVar2 + 0x1e0) | 0x20;
      dVar3 = (double)lbl_821CC160;
      *(uint *)(*(int *)(param_2 + 0x14) + 0x1e0) = *(uint *)(*(int *)(param_2 + 0x14) + 0x1e0) | 8;
      *(undefined4 *)(param_2 + 0x138) = 1;
      *(undefined4 *)(param_2 + 0x124) = 0;
      (**(code **)(*piVar1 + 0x78))(dVar3,piVar1,0);
    }
  }
  return;
}

