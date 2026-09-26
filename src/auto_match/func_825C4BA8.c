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


undefined8 fn_825C4BA8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
    piVar3 = (int *)0x0;
    do {
      piVar4 = piVar1;
      if (**(int **)(*piVar4 + 4) == *param_2) {
        if (piVar3 == (int *)0x0) {
          *(int *)(param_1 + 8) = piVar4[5];
        }
        else {
          piVar3[5] = piVar4[5];
        }
        piVar1 = (int *)*piVar4;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))(piVar1,1);
        }
        iVar2 = piVar4[4];
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
          piVar4[4] = 0;
        }
        fn_82522ED8(piVar4);
        return 1;
      }
      piVar1 = (int *)piVar4[5];
      piVar3 = piVar4;
    } while ((int *)piVar4[5] != (int *)0x0);
  }
  return 0;
}

