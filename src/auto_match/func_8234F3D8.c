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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();


void fn_8234F3D8(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [60];
  
  fn_82520158(param_1,auStack_40,0);
  fn_82520158(param_2,auStack_3c,0);
  piVar1 = (int *)fn_8251F720(auStack_40,0);
  piVar2 = (int *)fn_8251F720(auStack_3c,0);
  iVar3 = 0;
  for (piVar5 = piVar1; (piVar5 != (int *)0x0 && (*piVar5 != 0));
      piVar5 = (int *)(-(uint)(piVar5[1] != 0) & (uint)(piVar5 + 1))) {
    iVar3 = iVar3 + 1;
  }
  iVar4 = 0;
  for (piVar5 = piVar2; (piVar5 != (int *)0x0 && (*piVar5 != 0));
      piVar5 = (int *)(-(uint)(piVar5[1] != 0) & (uint)(piVar5 + 1))) {
    iVar4 = iVar4 + 1;
  }
  if (iVar3 <= param_3) {
    param_3 = iVar3 + -1;
  }
  if (iVar4 <= param_3) {
    param_3 = iVar4 + -1;
  }
  *param_4 = piVar1[param_3];
  *param_5 = piVar2[param_3];
  fn_8251FA58(piVar1);
  fn_8251FA58(piVar2);
  return;
}

