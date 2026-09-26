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
extern unsigned int lbl_82134508;


void fn_82DEA760(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = (**(code **)(**(int **)(param_2 + 0xc) + 0x20))();
  if (iVar3 != 0xb) {
    piVar1 = *(int **)(param_2 + 0xc);
    iVar3 = *(int *)(*(int *)(param_2 + 0x14) + 0x98);
    dVar5 = (double)lbl_82134508;
    iVar2 = *(int *)(*(int *)(param_2 + 0x18) + 0x98);
    if ((iVar3 != 0) || (iVar2 != 0)) {
      dVar6 = dVar5;
      if (iVar3 != 0) {
        dVar6 = (double)*(float *)(iVar3 + 0x18);
      }
      if (iVar2 != 0) {
        dVar5 = (double)*(float *)(iVar2 + 0x18);
      }
      bVar4 = dVar5 <= dVar6;
      if ((float)(dVar6 - dVar5) < 0.0) {
        dVar5 = dVar6;
      }
      (**(code **)(*piVar1 + 0x14))(piVar1,bVar4);
    }
    (**(code **)(*piVar1 + 0xc))(dVar5,piVar1);
  }
  return;
}

