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
extern int fn_82864E90();
extern int fn_82F63CA0();
extern unsigned int *lbl_8327F86C;


ulonglong fn_825339A0(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  char cVar6;
  int iVar5;
  int *piVar7;
  int *piVar8;
  undefined4 auStack_40 [16];
  
  piVar3 = lbl_8327F86C;
  bVar2 = 0;
  piVar8 = (int *)*lbl_8327F86C;
  if (piVar8 != (int *)lbl_8327F86C[1]) {
    piVar7 = piVar8 + 1;
    do {
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 8) == param_1) {
        piVar4 = (int *)fn_82864E90();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x1c))();
        cVar6 = (**(code **)(*piVar4 + 0x38))(piVar4,*(undefined4 *)(iVar1 + 4));
        if (cVar6 != '\0') {
          iVar5 = (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
          if (iVar5 < 0) {
            bVar2 = 1;
          }
          auStack_40[0] = 0;
          (**(code **)(**(int **)(iVar1 + 4) + 0x50))(*(int **)(iVar1 + 4),auStack_40);
        }
        fn_82F63CA0(piVar8,piVar7,(piVar3[1] - (int)piVar7 >> 2) << 2);
        piVar3[1] = piVar3[1] + -4;
        piVar4 = (int *)fn_82864E90();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x1c))();
        (**(code **)(*piVar4 + 0x3c))(piVar4,iVar1);
        fn_8265CA20(iVar1);
      }
      else {
        piVar8 = piVar8 + 1;
        piVar7 = piVar7 + 1;
      }
    } while (piVar8 != (int *)piVar3[1]);
  }
  return -(ulonglong)bVar2 & 0xffffffff80004005;
}

