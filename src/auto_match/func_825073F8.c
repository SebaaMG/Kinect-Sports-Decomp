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
extern int fn_82507590();
extern int fn_82507668();
extern int fn_82592430();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_825073F8(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  
  *(undefined4 *)(param_1 + 0x2b0) = lbl_821922D0;
  if (*(char *)(param_1 + 0xb6d) == '\0') {
    if (*(char *)(param_1 + 0xb6c) == '\0') {
      piVar1 = *(int **)(param_1 + 0x8c0);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar2 == 0) {
          (**(code **)(*piVar1 + 0xc))(piVar1);
        }
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x18c) == 0) {
            uVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x4c))();
            *(undefined4 *)(param_1 + 0x18c) = uVar3;
          }
          *(undefined1 *)(param_1 + 0xb6c) = 1;
          *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_1 + 0x18c);
          if (*(int *)(param_1 + 0xfec) != 0) {
            fn_82507668(param_1,param_1 + 0xfec);
          }
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0xf58) != 0x3e5) {
    fn_82507590(param_1,param_1 + 0xb6f);
    *(undefined1 *)(param_1 + 0xb6d) = 0;
  }
  if (*(char *)(param_1 + 0xb6c) != '\0') {
    dVar4 = (double)lbl_821CC160;
    if ((double)*(float *)(*(int *)(param_1 + 0x4c) + 0x838) <= dVar4) {
      dVar4 = (double)(*(float *)(*(int *)(param_1 + 0x4c) + 0x820) * lbl_8327F894);
    }
    fn_827EF828(dVar4,*(undefined4 *)(param_1 + 0xb68));
    fn_827EFFE8(*(undefined4 *)(param_1 + 0xb68));
    if (*(int *)(param_1 + 0x8c0) != 0) {
      fn_827F0180(*(undefined4 *)(param_1 + 0xb68),
                        **(undefined4 **)
                          ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                          *(int *)(param_1 + 0x8c0)),1,0,0);
    }
  }
  fn_82592430(param_1,param_2);
  return;
}

