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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8265CA20();


int * fn_823A72A8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = *(int *)(**(int **)(param_2 + 4) + 0xc);
    iVar2 = *(int *)(**(int **)(param_2 + 4) + 8);
    iVar5 = 0;
    iVar6 = 0;
    if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
      iVar5 = iVar2;
      iVar6 = iVar1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar6;
    *param_1 = iVar5;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if ((*(int *)*param_1 == param_3) && (((int *)*param_1)[1] == param_4)) {
      piVar3 = (int *)**(int **)(param_2 + 4);
      if (piVar3 != *(int **)(param_2 + 4)) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        if (piVar3[3] != 0) {
          fn_822315A0();
        }
        fn_8265CA20(piVar3);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      }
    }
    else {
      iVar1 = param_1[1];
      param_1[1] = 0;
      *param_1 = 0;
      if (iVar1 != 0) {
        fn_822315A0();
      }
    }
  }
  return param_1;
}

