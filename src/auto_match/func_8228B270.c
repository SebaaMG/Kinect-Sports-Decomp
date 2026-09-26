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


void fn_8228B270(int param_1,int param_2)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  undefined4 uVar4;
  
  param_1 = param_2 * 0x18 + param_1;
  if (*(int *)(param_1 + 0x620) == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x61c) + 0xb4);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1,(undefined4 *)(param_1 + 0x628));
      *(int *)(param_1 + 0x620) = iVar3;
      if (iVar3 != 0) {
        uVar2 = fn_827F04B0(0x1a0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = fn_82554260(uVar2,*(undefined4 *)(param_1 + 0x620),1);
        }
        *(undefined4 *)(param_1 + 0x624) = uVar4;
        fn_827F2DD0((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x620));
        (**(code **)(*piVar1 + 0x9c))(piVar1,*(undefined4 *)(param_1 + 0x628));
      }
    }
  }
  return;
}

