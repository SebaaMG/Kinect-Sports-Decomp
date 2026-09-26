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
extern int fn_824424A0();
extern int fn_825327A8();
extern int fn_8255FA88();
extern unsigned int lbl_821CC160;


void fn_824421A8(double param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_2 + 8);
  if (iVar2 == 1) {
    iVar2 = *(int *)(**(int **)(param_2 + 4) + 400);
    if ((iVar2 == 0) || (*(int *)(**(int **)(iVar2 + 400) + 0x114) == 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = fn_8255FA88();
    }
    if ((iVar2 == 0) || (**(int **)(param_2 + 8) == 2)) goto LAB_82442310;
    fn_825327A8(**(undefined4 **)(param_2 + 4),0xffffffff821b999c);
    uVar1 = lbl_821CC160;
    **(undefined4 **)(param_2 + 8) = 2;
  }
  else {
    if (iVar2 == 2) {
      iVar2 = *(int *)(**(int **)(param_2 + 4) + 400);
      if ((iVar2 == 0) || (*(int *)(**(int **)(iVar2 + 400) + 0x114) == 0)) {
        iVar2 = 1;
      }
      else {
        iVar2 = fn_8255FA88();
      }
      if (iVar2 != 0) {
        fn_824424A0(param_2,3);
      }
      goto LAB_82442310;
    }
    if (iVar2 != 3) goto LAB_82442310;
    iVar2 = *(int *)(**(int **)(param_2 + 4) + 400);
    if ((iVar2 == 0) || (*(int *)(**(int **)(iVar2 + 400) + 0x114) == 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = fn_8255FA88();
    }
    uVar1 = lbl_821CC160;
    if ((iVar2 == 0) || (**(int **)(param_2 + 8) == 0)) goto LAB_82442310;
    **(undefined4 **)(param_2 + 8) = 0;
  }
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = uVar1;
LAB_82442310:
  *(float *)(*(int *)(param_2 + 8) + 4) =
       (float)((double)*(float *)(*(int *)(param_2 + 8) + 4) + param_1);
  return;
}

