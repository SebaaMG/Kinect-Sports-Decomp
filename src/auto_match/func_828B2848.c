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
extern unsigned int *auStack_40;
extern int fn_8265CA20();
extern int fn_828B25C8();
extern int fn_828B2D18();
extern int fn_828B2E68();
extern int fn_828B4690();
extern int fn_828B4BA8();


void fn_828B2848(int param_1,int *param_2)

{
  int *piVar1;
  char cVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar5;
  int *piVar6;
  undefined8 auStack_40 [8];
  
  auStack_40[0] = (**(code **)(*param_2 + 0x48))(param_2);
  piVar5 = (int *)(param_1 + 0xc);
  piVar6 = (int *)**(int **)(param_1 + 0xc);
  if (piVar6 != *(int **)(param_1 + 0xc)) {
    do {
      piVar1 = (int *)piVar6[2];
      cVar4 = fn_828B2D18(piVar1,auStack_40);
      if (cVar4 != '\0') {
        fn_828B4690(piVar1,param_2);
        cVar4 = fn_828B2E68(piVar1);
        if (cVar4 == '\0') {
          return;
        }
        if (piVar6 != (int *)*piVar5) {
          *(int *)piVar6[1] = *piVar6;
          *(int *)(*piVar6 + 4) = piVar6[1];
          fn_8265CA20(piVar6);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        if (((uVar2 & 0xffffffff) != 0) && (piVar6 = *(int **)*piVar5, piVar6 != (int *)*piVar5)) {
          do {
            uVar3 = (**(code **)(*(int *)piVar6[2] + 4))();
            if ((uVar3 & 0xffffffff) != 0) {
              fn_828B4BA8(uVar3,uVar2);
            }
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)*piVar5);
        }
        (**(code **)*piVar1)(piVar1,1);
        fn_828B25C8(param_1);
        return;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*piVar5);
  }
  return;
}

