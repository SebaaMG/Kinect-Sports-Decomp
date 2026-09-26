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
extern int fn_82554260();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int lbl_821CC160;


void fn_822A8108(int param_1)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x5cc) == 0) {
    piVar1 = *(int **)(param_1 + 0x550);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1,(undefined4 *)(param_1 + 0x5d4));
      *(int *)(param_1 + 0x5cc) = iVar3;
      if (iVar3 != 0) {
        uVar2 = fn_827F04B0(0x1a0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = fn_82554260(uVar2,*(undefined4 *)(param_1 + 0x5cc),1);
        }
        *(undefined4 *)(param_1 + 0x5d0) = uVar4;
        fn_827F2DD0((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x5cc));
        (**(code **)(**(int **)(param_1 + 0x550) + 0x9c))
                  (*(int **)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x5d4));
      }
    }
  }
  return;
}

