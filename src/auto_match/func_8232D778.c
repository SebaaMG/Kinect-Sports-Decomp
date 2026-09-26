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
extern unsigned int lbl_821CC160;


void fn_8232D778(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x48) - param_1);
  *(float *)(param_2 + 0x48) = fVar1;
  if (lbl_821CC160 < fVar1) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  piVar6 = *(int **)(iVar4 + 100);
  if (piVar6 != (int *)0x0) {
    if (piVar6[1] == 0) {
      return;
    }
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = *(int **)(iVar4 + 0x54);
  while( true ) {
    if (piVar6 == *(int **)(iVar4 + 0x58)) {
      return;
    }
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 4) == 0) break;
    piVar6 = piVar6 + 2;
  }
  iVar3 = piVar6[1];
  iVar8 = 0;
  iVar7 = 0;
  if ((iVar3 != 0) && (cVar5 = fn_8223AAC0(iVar3), cVar5 != '\0')) {
    iVar8 = iVar3;
    iVar7 = iVar2;
  }
  iVar2 = *(int *)(iVar4 + 0x68);
  *(int *)(iVar4 + 0x68) = iVar8;
  *(int *)(iVar4 + 100) = iVar7;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  (**(code **)(**(int **)(iVar4 + 100) + 4))();
  return;
}

