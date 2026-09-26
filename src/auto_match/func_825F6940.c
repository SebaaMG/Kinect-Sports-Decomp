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
extern int fn_825A2410();
extern int fn_82A1DD38();
extern unsigned int lbl_831BF280;


void fn_825F6940(ushort *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 2);
  piVar4 = *(int **)(param_1 + 4);
  if (piVar5 < piVar4) {
    do {
      lVar2 = (*(code *)(&lbl_831BF280)[*piVar5 * 2])(param_2,piVar5);
      if (lVar2 != 0) {
        iVar1 = piVar5[1];
        if (iVar1 != 0) {
          piVar3 = (int *)fn_825A2410(*(int *)(param_2 + 0x88c) * 0xc + param_2 + 0x85c);
          *piVar3 = iVar1;
          piVar3[1] = 0;
        }
        if ((int)lVar2 == 1) {
          if (piVar5 < (int *)(*(int *)(param_1 + 4) - (uint)*param_1)) {
            fn_82A1DD38(piVar5);
          }
          piVar5 = piVar5 + -7;
          piVar4 = piVar4 + -7;
          *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - (uint)*param_1;
        }
      }
      piVar5 = piVar5 + 7;
    } while (piVar5 < piVar4);
  }
  return;
}

