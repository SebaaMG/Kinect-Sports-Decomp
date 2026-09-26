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
extern int fn_822ABA88();
extern int fn_8239FF60();


void fn_823A52F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x100) = 1;
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = 0;
    piVar4 = *(int **)**(undefined4 **)(iVar3 + 8);
    iVar1 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),0);
    if (*(int *)(iVar1 + 0x74) != 0) {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x74) + 0x100) + 0x90c);
    }
    if (iVar2 < (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20)) {
      fn_8239FF60(*(undefined4 *)(iVar3 + 0x2dc),0x12);
      piVar4 = *(int **)**(undefined4 **)(*(int *)(param_1 + 8) + 8);
      *(undefined4 *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x1c) = 1;
    }
    else {
      fn_8239FF60(*(undefined4 *)(iVar3 + 0x2dc),0x11);
    }
  }
  return;
}

