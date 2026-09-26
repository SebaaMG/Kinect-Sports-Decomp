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
extern unsigned int *auStack_20;
extern int fn_822AF200();
extern unsigned int lbl_821CC160;


void fn_8238B230(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 auStack_20 [2];
  
  iVar3 = *(int *)(param_2 + 8);
  if (*(int *)(*(int *)(*(int *)(iVar3 + 0xd4) + 0x18) + 0xc) != 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  *(float *)(param_2 + 0xc) = fVar1;
  if (lbl_821CC160 < fVar1) {
    return;
  }
  uVar4 = *(uint *)(iVar3 + 0x204);
  if (uVar4 == 0) {
    uVar6 = 2;
  }
  else if (uVar4 == 1) {
    uVar6 = 0x10;
  }
  else {
    if (2 < uVar4) {
      return;
    }
    uVar6 = 0x11;
  }
  auStack_20[0] = 0;
  fn_822AF200(iVar3 + 0x80,auStack_20);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x7c) + 8);
  if (piVar2 == (int *)0x0) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = (**(code **)(*piVar2 + 8))(piVar2,uVar6);
  }
  if (cVar5 != '\0') {
    *(undefined4 *)(iVar3 + 0x58) = uVar6;
  }
  return;
}

