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
extern int fn_8227B5E0();
extern int fn_82351DC8();


void fn_823524B0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  
  bVar3 = false;
  dVar5 = (double)fn_82351DC8();
  iVar2 = *(int *)(param_2 + 0x288);
  if (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0xa48) < 2) {
      iVar4 = 1;
    }
    else {
      if (*(uint *)(iVar2 + 0xa48) == 6) goto LAB_82352568;
      iVar4 = *(int *)(iVar2 + 0xa5c);
    }
    if ((iVar4 != 0) && (*(int *)(iVar2 + 0xa58) == 0)) {
      if (((*(int *)(iVar2 + 0xa48) == 4) && ((double)*(float *)(param_2 + 0x390) < dVar5)) &&
         (fVar1 = (float)((double)*(float *)(param_2 + 0x390) + param_1),
         *(float *)(param_2 + 0x390) = fVar1, dVar5 <= (double)fVar1)) {
        *(float *)(param_2 + 0x390) = (float)dVar5;
        fn_8227B5E0(*(undefined4 *)(param_2 + 0x288));
      }
      (**(code **)(**(int **)(param_2 + 0x288) + 4))(param_1);
      goto LAB_8235256c;
    }
  }
LAB_82352568:
  bVar3 = true;
LAB_8235256c:
  if (*(int **)(param_2 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x18) + 0x1c))(param_1);
  }
  if ((bVar3) && (*(int *)(param_2 + 8) != 6)) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 8) = 6;
    *(undefined4 *)(param_2 + 0x354) = 0;
  }
  return;
}

