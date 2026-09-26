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
extern int fn_825089A0();
extern int fn_82517978();
extern int fn_82F622A8();


void fn_828C1658(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)fn_825089A0();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x24))(piVar2,0x10,2);
  piVar3 = piVar2 + 2;
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar2[3] = 0;
    fn_82517978(piVar3,*param_3,param_3[1],0);
  }
  if (*(int *)(param_1 + 4) == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *(int **)(param_2 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  return;
}

