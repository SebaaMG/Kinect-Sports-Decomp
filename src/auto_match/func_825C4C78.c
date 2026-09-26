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
extern int fn_82575DF0();
extern int fn_826170B8();
extern unsigned int lbl_821CC160;


void fn_825C4C78(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  
  piVar2 = (int *)param_2[2];
  if (piVar2 != (int *)0x0) {
    dVar3 = (double)lbl_821CC160;
    do {
      iVar1 = *(int *)(*piVar2 + 4);
      if (((*(char *)(iVar1 + 0x1a4) != '\0') || (*(char *)(iVar1 + 0x1a5) != '\0')) ||
         ((*(char *)(iVar1 + 0x1a6) == '\0' &&
          (((double)(float)piVar2[2] <= dVar3 ||
           (param_1 <= (double)(float)((double)(float)piVar2[1] + (double)(float)piVar2[2]))))))) {
        fn_826170B8(param_1);
        piVar2 = (int *)piVar2[5];
      }
      else {
        piVar2 = (int *)piVar2[5];
        fn_82575DF0(param_2[1]);
      }
    } while (piVar2 != (int *)0x0);
  }
  if (0x80000 < (uint)param_2[4]) {
    (**(code **)(*param_2 + 0x24))(param_1,param_2);
  }
  return;
}

