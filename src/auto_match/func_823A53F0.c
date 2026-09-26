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
extern int fn_82396BE0();
extern int fn_82396CA0();
extern int fn_8239FF60();
extern unsigned int lbl_821922D0;


void fn_823A53F0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = *(int **)**(undefined4 **)(*(int *)(param_1 + 8) + 8);
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),0);
  iVar4 = *(int *)(iVar4 + 0x74);
  if (iVar4 != 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 0x100) + 0x90c);
    uVar1 = (uint)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
    if (0x3c < uVar1) {
      fn_822B17A8(iVar4,0x25,0);
    }
    fVar3 = (float)uVar2;
    if (lbl_821922D0 < fVar3) {
      if (uVar2 < uVar1) {
        if (*(int *)(param_1 + 0x60) == 0) {
          return;
        }
        fn_82396CA0(*(undefined4 *)(param_1 + 8));
        fn_8239FF60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2dc),0x10);
        uVar6 = 0;
      }
      else {
        if ((float)uVar1 < fVar3 - lbl_821922D0) {
          return;
        }
        if (*(int *)(param_1 + 0x60) != 0) {
          return;
        }
        fn_82396BE0(*(undefined4 *)(param_1 + 8));
        uVar6 = 1;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar6;
    }
  }
  return;
}

