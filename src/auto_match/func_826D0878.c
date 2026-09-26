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
extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826C52C8();
extern int fn_826D06C8();
extern unsigned int lbl_831E7E64;


void fn_826D0878(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((param_2 & 0xffffffff) != 0) || (*(int *)(param_1 + 0x1b4) != 0)) {
    if (*(int *)(param_1 + 0x1b4) == 0) {
      puVar3 = (undefined4 *)fn_8267B890(lbl_831E7E64,0x24,0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        *puVar3 = 100;
        puVar3[1] = 0;
      }
      *(undefined4 **)(param_1 + 0x1b4) = puVar3;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x1b4) + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    iVar2 = *(int *)(param_1 + 0x1b4);
    if ((param_2 & 0xffffffff) != 0) {
      fn_8267C4C8(param_2);
    }
    if (*(int *)(iVar2 + 0x20) != 0) {
      fn_8267C4F0();
    }
    *(int *)(iVar2 + 0x20) = (int)param_2;
    piVar1 = *(int **)(*(int *)(param_1 + 0x1b4) + 0x20);
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      fn_826C52C8(param_1);
      (**(code **)(iVar2 + 0x28))(piVar1);
      fn_826D06C8(param_1,param_2,0,0);
    }
  }
  return;
}

