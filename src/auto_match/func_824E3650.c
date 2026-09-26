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
extern int fn_82522ED8();


undefined8 fn_824E3650(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_2 != 0x45) {
    if (*param_2 != 0x6d) {
      return 0;
    }
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      piVar3 = *(int **)(iVar1 + 8);
      if (*piVar3 == 0x6d) goto LAB_824e36a4;
    }
    piVar3 = (int *)0x0;
LAB_824e36a4:
    if (piVar3 != (int *)0x0) {
      do {
        if (piVar3[3] == param_2[3]) {
          if (piVar3[-2] != 0) {
            *(int *)(piVar3[-2] + 4) = piVar3[-1];
          }
          if ((int *)piVar3[-1] != (int *)0x0) {
            *(int *)piVar3[-1] = piVar3[-2];
          }
          piVar3[-2] = 0;
          piVar3[-1] = 0;
          fn_82522ED8();
          return 1;
        }
        iVar1 = *piVar3;
        for (iVar2 = piVar3[-1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          piVar3 = *(int **)(iVar2 + 8);
          if (*piVar3 == iVar1) goto LAB_824e36e8;
        }
        piVar3 = (int *)0x0;
LAB_824e36e8:;} while (piVar3 != (int *)0x0);
    }
  }
  return 1;
}

