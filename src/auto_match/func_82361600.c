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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82361BA0();
extern unsigned int iStack_2c;
extern unsigned int stack0x00000000;


void fn_82361600(int param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int aiStack_28 [10];
  
  if (param_3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    if (*param_3 == 0) {
      piVar2 = (int *)fn_82361BA0(&stack0x00000000 + -0x30);
      iVar3 = 0;
      iVar4 = 0;
      if ((int *)(&stack0x00000000 + -0x28) != piVar2) {
        iVar4 = piVar2[1];
        piVar2[1] = 0;
        iVar3 = *piVar2;
        *piVar2 = 0;
      }
      iVar1 = param_3[1];
      param_3[1] = iVar4;
      *param_3 = iVar3;
      if (iVar1 != 0) {
        fn_822315A0();
      }
      if (iStack_2c != 0) {
        fn_822315A0();
      }
    }
    iVar4 = *param_3;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,iVar4);
  return;
}

