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
extern unsigned int lbl_821AAD20;


void fn_83009AD0(double param_1,int param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = *(int *)(param_2 + 0x48);
  if (iVar2 != *(int *)(param_2 + 0x4c)) {
    dVar3 = (double)lbl_821AAD20;
    do {
      piVar1 = *(int **)(iVar2 + 4);
      if (*(short *)(piVar1 + 6) != 0) {
        if (((*(byte *)(param_2 + 0xa0) & 8) != 0) && (*param_4 == param_2)) {
          param_1 = dVar3;
        }
        (**(code **)(*piVar1 + 0x44))(param_1,piVar1,param_3,param_4,1);
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_2 + 0x4c));
  }
  return;
}

