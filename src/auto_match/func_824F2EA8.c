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


undefined8 fn_824F2EA8(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    piVar2 = (int *)0x0;
    piVar3 = *(int **)(param_1 + 0xc);
    do {
      if (**(int **)(*piVar3 + 4) == *param_2) {
        if (piVar2 != (int *)0x0) goto LAB_824f2f48;
        *(int *)(param_1 + 0xc) = piVar3[1];
        goto LAB_824f2f5c;
      }
      piVar1 = piVar3 + 1;
      piVar2 = piVar3;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    piVar2 = (int *)0x0;
    piVar3 = *(int **)(param_1 + 0x10);
    do {
      if (**(int **)(*piVar3 + 4) == *param_2) {
        if (piVar2 == (int *)0x0) {
          *(int *)(param_1 + 0x10) = piVar3[1];
        }
        else {
LAB_824f2f48:
          piVar2[1] = piVar3[1];
        }
LAB_824f2f5c:
        piVar2 = (int *)*piVar3;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))(piVar2,1);
        }
        fn_82522ED8(piVar3);
        return 1;
      }
      piVar1 = piVar3 + 1;
      piVar2 = piVar3;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  return 0;
}

