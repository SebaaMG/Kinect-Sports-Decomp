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
extern int fn_822C72E0();
extern int fn_82310288();
extern int fn_82310538();
extern float lbl_82191F78;
extern unsigned int lbl_82192B7C;
extern unsigned int lbl_82192B80;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8230F388(double param_1,int param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x484) != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x154) == 0) {
    if (*(int *)(param_2 + 0x150) != 0) {
      if ((*(char *)(param_2 + 0x4c8) != '\0') ||
         (*(float *)(param_2 + 0x480) <= *(float *)(param_2 + 0x20) - lbl_82192B80))
      goto LAB_8230f4b0;
      iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x9a0);
      fVar1 = lbl_82192B80;
      if (iVar2 != 0) {
        fn_822C72E0(*(undefined4 *)(*(int *)(iVar2 + 0x114) + 0x20),0xffffffff821ae9d4);
        fVar1 = lbl_82192B80;
      }
      goto LAB_8230f414;
    }
    if (((*(int *)(param_2 + 0x158) == 0) || (*(char *)(param_2 + 0x4c8) != '\0')) ||
       (*(int *)(*(int *)(param_2 + 0x10) + 0xf98) == 0)) goto LAB_8230f4b0;
    fVar1 = *(float *)(param_2 + 0x20);
  }
  else {
    if ((*(char *)(param_2 + 0x4c8) != '\0') ||
       (*(float *)(param_2 + 0x480) <= *(float *)(param_2 + 0x20) - lbl_82192B7C))
    goto LAB_8230f4b0;
    iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x9a0);
    fVar1 = lbl_82192B7C;
    if (iVar2 != 0) {
      fn_822C72E0(*(undefined4 *)(*(int *)(iVar2 + 0x114) + 0x20),0xffffffff821ae934);
      fVar1 = lbl_82192B7C;
    }
LAB_8230f414:
    fVar1 = *(float *)(param_2 + 0x20) - fVar1;
  }
  *(float *)(param_2 + 0x480) = fVar1;
  *(undefined1 *)(param_2 + 0x4c8) = 1;
LAB_8230f4b0:
  fVar1 = (float)((double)*(float *)(param_2 + 0x480) + param_1);
  *(float *)(param_2 + 0x480) = fVar1;
  if (((param_4 == 0) && (*(float *)(param_2 + 0x20) < fVar1)) &&
     ((iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x58),
      iVar2 == *(int *)(*(int *)(param_2 + 0x10) + 0x54) || (iVar2 == 0)))) {
    if (*(int *)(param_2 + 0x148) == 1) {
      iVar2 = fn_82310288();
    }
    else {
      iVar2 = fn_82310538(param_2);
    }
    if (iVar2 == 0) {
      *(float *)(param_2 + 0x480) = *(float *)(param_2 + 0x480) * lbl_82191F78;
    }
    else {
      *(undefined4 *)(param_2 + 0x484) = 1;
    }
  }
  return;
}

