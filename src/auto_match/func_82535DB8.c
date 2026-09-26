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
extern unsigned int *auStack_50;
extern int fn_8265CA20();
extern int fn_82864E90();
extern int fn_82F63CA0();
extern unsigned int *lbl_8327F86C;


void fn_82535DB8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 auStack_50 [20];
  
  piVar2 = lbl_8327F86C;
  piVar6 = (int *)*lbl_8327F86C;
  if (piVar6 != (int *)lbl_8327F86C[1]) {
    piVar5 = piVar6 + 1;
    do {
      iVar1 = *piVar6;
      if (((*(int *)(iVar1 + 8) == param_1) && (*(int *)(iVar1 + 0xc) == param_2)) &&
         (*(int *)(iVar1 + 4) == param_3)) {
        piVar3 = (int *)fn_82864E90();
        piVar3 = (int *)(**(code **)(*piVar3 + 0x1c))();
        cVar4 = (**(code **)(*piVar3 + 0x38))(piVar3,*(undefined4 *)(iVar1 + 4));
        if (cVar4 != '\0') {
          auStack_50[0] = 0;
          (**(code **)(**(int **)(iVar1 + 4) + 0x50))(*(int **)(iVar1 + 4),auStack_50);
        }
        fn_82F63CA0(piVar6,piVar5,(piVar2[1] - (int)piVar5 >> 2) << 2);
        piVar2[1] = piVar2[1] + -4;
        fn_8265CA20(iVar1);
      }
      else {
        piVar6 = piVar6 + 1;
        piVar5 = piVar5 + 1;
      }
    } while (piVar6 != (int *)piVar2[1]);
  }
  return;
}

