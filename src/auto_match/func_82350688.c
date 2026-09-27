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
extern int fn_82250A18();
extern int fn_8226FE40();
extern int fn_82354750();
extern int fn_82354750();
extern int fn_82356690();
extern int fn_8249ABC0();
extern int fn_82512C30();
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;
extern unsigned int lbl_832975B0;


void fn_82350688(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;

  piVar1 = (int *)fn_82512C30();
  if (*piVar1 == 0) {
    iVar2 = fn_8249ABC0();
    if ((*(int *)(iVar2 + 8) == 2) || (*(int *)(iVar2 + 8) == 1)) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (*(char *)(iVar2 + 4) == '\0') {
        return;
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 10) {
      dVar3 = (double)lbl_821CC160;
      if ((double)*(float *)(*(int *)(param_1 + 0x14) + 0x838) <= dVar3) {
        dVar3 = (double)(*(float *)(*(int *)(param_1 + 0x14) + 0x820) * lbl_8327F894);
      }
      if (iVar2 == 2) {
        fn_82354750(param_1);
      }
      else if (iVar2 == 9) {
        if (*(int **)(param_1 + 0x18) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(dVar3);
        }
      }
      else if (iVar2 == 0xf) {
        if (((*(int *)(param_1 + 0x3ec) != 0) && (*(int *)(param_1 + 0x3d4) != 0)) &&
           (iVar2 = fn_8226FE40(), iVar2 != 0)) {
          fn_82356690(param_1);
        }
      }
      else if (iVar2 == 0x10) {
        fn_82354750(param_1);
      }
      if (*(int **)(param_1 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(dVar3);
        (**(code **)(**(int **)(param_1 + 0x18) + 0x38))
                  (dVar3,*(int **)(param_1 + 0x18),param_2,*(int *)(param_1 + 8) == 9);
      }
    }
  }
  return;
}
