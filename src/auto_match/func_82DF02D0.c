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


void fn_82DF02D0(undefined1 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x38)) {
      piVar1 = *(int **)(param_2 + 0x34);
      do {
        if (*piVar1 == param_3) {
          iVar2 = *(int *)(param_2 + 0x38) + -1;
          *(int *)(param_2 + 0x38) = iVar2;
          if (iVar2 != iVar3) {
            *(undefined4 *)(iVar3 * 4 + *(int *)(param_2 + 0x34)) =
                 *(undefined4 *)(iVar2 * 4 + *(int *)(param_2 + 0x34));
          }
          *param_1 = 1;
          return;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar3 < *(int *)(param_2 + 0x38));
    }
  }
  *param_1 = 0;
  return;
}

