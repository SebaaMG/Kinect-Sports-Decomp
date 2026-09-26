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
extern int fn_8248F890();
extern int fn_82494B00();
extern int fn_824978B8();
extern unsigned int lbl_821CC160;


void fn_82494040(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  double dVar5;
  int *apiStack_50 [20];
  
  piVar4 = *(int **)(*(int *)(*(int *)(param_2 + 0x14) + 0x80) + 0xdc);
  if (piVar4 != (int *)0x0) {
    dVar5 = (double)lbl_821CC160;
    do {
      iVar1 = *piVar4;
      if (((*(char *)(iVar1 + 0x10b) == '\0') && ((*(int **)(iVar1 + 4))[100] != 0)) &&
         ((*(int *)(*(int *)(iVar1 + 0xc) + 0x15c) != 0 ||
          ((dVar5 < (double)(float)piVar4[3] || ((int)param_4 != 0)))))) {
        for (piVar3 = *(int **)(param_2 + 4);
            (piVar3 != *(int **)(param_2 + 8) && (**(int **)(iVar1 + 4) != *(int *)(*piVar3 + 0x50))
            ); piVar3 = piVar3 + 1) {
        }
        if (piVar3 == *(int **)(param_2 + 8)) {
          uVar2 = fn_8248F890(0x240);
          if ((uVar2 & 0xffffffff) == 0) {
            apiStack_50[0] = (int *)0x0;
          }
          else {
            apiStack_50[0] =
                 (int *)fn_824978B8(uVar2,piVar4,*(undefined4 *)(param_2 + 0x14),param_4);
          }
          (**(code **)(*apiStack_50[0] + 0xc))(param_1);
          fn_82494B00(param_2 + 4,apiStack_50);
        }
        else {
          (**(code **)(*(int *)*piVar3 + 0xc))(param_1);
        }
      }
      piVar4 = (int *)piVar4[5];
    } while (piVar4 != (int *)0x0);
  }
  return;
}

