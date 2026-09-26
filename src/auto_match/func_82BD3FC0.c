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
extern int fn_82BD75E8();


void fn_82BD3FC0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_82BD75E8();
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0x24) == 0) {
      for (piVar1 = *(int **)(param_1 + 0x34); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        *(undefined4 *)*piVar1 = 0;
        *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(*piVar1 + 0xc);
      }
    }
    if (*(int *)(param_1 + 0x24) == 1) {
      piVar1 = *(int **)(param_1 + 0x3c);
      if (((piVar1 != (int *)0x0) &&
          (*(undefined4 *)(param_1 + 0x44) = 1, *(int *)(param_1 + 0x40) != 0)) &&
         (iVar2 = (**(code **)(*piVar1 + 0x50))(piVar1,0,0), -1 < iVar2)) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return;
}

