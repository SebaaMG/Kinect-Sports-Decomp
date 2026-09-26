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
extern int fn_822ABA88();
extern int fn_822B17A8();
extern int fn_82359698();
extern int fn_82396BE0();
extern int fn_82396CA0();
extern int fn_82399BA0();
extern int fn_8239FF60();
extern int fn_823A5F00();
extern int fn_823A6040();
extern int fn_823A62E8();
extern int fn_823A69A8();


void fn_823A5C60(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  fn_823A5F00();
  fn_823A6040(param_1,param_2);
  fn_823A62E8(param_1,param_2);
  piVar6 = *(int **)**(undefined4 **)(*(int *)(param_2 + 8) + 8);
  iVar3 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),0);
  iVar3 = *(int *)(iVar3 + 0x74);
  if (iVar3 != 0) {
    uVar2 = *(uint *)(*(int *)(iVar3 + 0x100) + 0x91c);
    uVar1 = (uint)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20);
    if (0x96 < uVar1) {
      fn_822B17A8(iVar3,0x26,0);
    }
    if (10 < uVar2) {
      if (uVar2 < uVar1) {
        if (*(int *)(param_2 + 0x48) != 0) {
          fn_82396CA0(*(undefined4 *)(param_2 + 8));
          fn_8239FF60(*(undefined4 *)(*(int *)(param_2 + 8) + 0x2dc),0x10);
          *(undefined4 *)(param_2 + 0x48) = 0;
        }
      }
      else if ((uVar2 - 10 <= uVar1) && (*(int *)(param_2 + 0x48) == 0)) {
        fn_82396BE0(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_2 + 0x48) = 1;
      }
    }
  }
  iVar3 = fn_82399BA0(*(undefined4 *)(param_2 + 8));
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    if ((*(int *)(iVar3 + 0x1b4) == *(int *)(iVar3 + 0x1b8)) &&
       (*(int *)(iVar3 + 0x1c4) == *(int *)(iVar3 + 0x1c8))) {
      if (*(int *)(param_2 + 0x48) != 0) {
        fn_82396CA0();
        *(undefined4 *)(param_2 + 0x48) = 0;
      }
      iVar3 = *(int *)(param_2 + 8);
      if ((*(int *)(iVar3 + 0xa0) == 0) || (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) != 1)) {
        iVar5 = 0;
        piVar6 = *(int **)**(undefined4 **)(iVar3 + 8);
        iVar4 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),0);
        if (*(int *)(iVar4 + 0x74) != 0) {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x74) + 0x100) + 0x91c);
        }
        if (iVar5 < (int)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20)) {
          fn_8239FF60(*(undefined4 *)(iVar3 + 0x2dc),0x12);
          piVar6 = *(int **)**(undefined4 **)(*(int *)(param_2 + 8) + 8);
          *(undefined4 *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x1c) = 1;
        }
        else {
          fn_8239FF60(*(undefined4 *)(iVar3 + 0x2dc),0x11);
        }
      }
      fn_823A69A8(param_2);
      fn_82359698(*(undefined4 *)(param_2 + 8),8);
    }
  }
  return;
}

