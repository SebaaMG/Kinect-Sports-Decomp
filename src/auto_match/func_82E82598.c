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
extern unsigned int lbl_820E86B0;
extern unsigned int lbl_8215F5E0;
extern unsigned int lbl_8215F5E8;


void fn_82E82598(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  
  if ((((*(int *)(param_1 + 0x1ff0) != 0) && (*(int *)(*(int *)(param_1 + 0x1ff4) + 0xa8) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x1ff4) + 0x38), -1 < iVar1)) && (iVar1 < 3)) {
LAB_82e82674:
    *(int *)(param_1 + 0x5254) = iVar1;
    return;
  }
  if (*(int *)(param_1 + 4) == 8) {
    return;
  }
  if (*(int *)(param_1 + 0x1dac) == 2) {
    if (0x13 < *(int *)(param_1 + 0x1ee0)) {
      if (0x31 < *(int *)(param_1 + 0x1ee0)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x5254) = 1;
      return;
    }
  }
  else {
    dVar2 = (double)(longlong)param_2 * lbl_8215F5E8;
    if (lbl_8215F5E0 <= (double)(longlong)param_2 * lbl_8215F5E8) {
      dVar2 = lbl_8215F5E0;
    }
    if (dVar2 <= *(double *)(param_1 + 0x1ed0)) {
      if (dVar2 * lbl_820E86B0 <= *(double *)(param_1 + 0x1ed0)) {
        return;
      }
      iVar1 = 2;
      if (param_2 < 0x119401) {
        iVar1 = 1;
      }
      goto LAB_82e82674;
    }
  }
  *(undefined4 *)(param_1 + 0x5254) = 2;
  return;
}

