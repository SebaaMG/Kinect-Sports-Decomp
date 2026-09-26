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
extern int fn_8239FF60();
extern int fn_824C97F0();
extern unsigned int lbl_821CC160;


void fn_823A1938(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  double dVar6;
  
  dVar6 = (double)lbl_821CC160;
  *(float *)(param_1 + 0xc) = lbl_821CC160;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(iVar1 + 0x178) == 0) {
    uVar4 = 3;
  }
  else {
    if ((*(int *)(iVar1 + 0x178) != 2) || (*(int *)(iVar1 + 0x178) == 0)) goto LAB_823a19a0;
    uVar4 = 0xc;
  }
  fn_8239FF60(*(undefined4 *)(iVar1 + 0x2dc),uVar4);
LAB_823a19a0:
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(float *)(iVar1 + 0x868) = (float)dVar6;
  puVar2 = *(undefined4 **)(iVar1 + 0xa8);
  piVar3 = (int *)puVar2[1];
  for (piVar5 = (int *)*puVar2; piVar5 != piVar3; piVar5 = piVar5 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar5 + 0x28),0xffffffff821b45a8);
  }
  return;
}

