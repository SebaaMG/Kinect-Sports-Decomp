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
extern int fn_8267C498();
extern int fn_8267C4F0();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_82014C60;


void fn_82766B58(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &lbl_82014C60;
  if (*(char *)(param_1 + 8) == '\0') {
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,param_1);
    }
  }
  else {
    uVar2 = 0;
    if (*(int *)(param_1[9] + 4) != 0) {
      iVar3 = 0;
      do {
        (**(code **)(**(int **)(*(int *)param_1[9] + iVar3) + 4))
                  (*(int **)(*(int *)param_1[9] + iVar3),param_1);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(uint *)(param_1[9] + 4));
    }
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1[7]);
  }
  if (param_1[4] != 0) {
    fn_8267C498();
  }
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  *param_1 = &lbl_8200BD80;
  return;
}

