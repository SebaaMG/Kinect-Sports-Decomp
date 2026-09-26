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
extern int fn_822B7068();
extern int fn_8234C320();
extern int fn_825275B0();
extern int fn_82529320();
extern int fn_8265CA20();


void fn_822E6008(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if (param_2 != (int *)0x0) {
    if ((*(int *)(param_1 + 0x24) != 0) &&
       (*(int *)((uint)(*(int **)(param_1 + 0x20c) != param_2) * 0x2c + *(int *)(param_1 + 0x118) +
                0x280) != 0)) {
      fn_8234C320(0);
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      fn_825275B0(*param_2);
    }
    else {
      fn_822B7068(param_1,*param_2);
      iVar1 = *param_2;
      lVar5 = 2;
      piVar4 = (int *)(*(int *)(param_1 + 0x11c) + 0x10);
      do {
        if (*piVar4 == iVar1) {
          *piVar4 = 0;
          *(undefined1 *)(piVar4 + 0xc) = 0;
          *(undefined1 *)((int)piVar4 + 0x31) = 0;
          piVar4[1] = -1;
          *(undefined2 *)(piVar4 + 2) = 0x5b;
          puVar2 = (undefined4 *)((uint)(piVar4 + 8) & 0xfffffff0);
          *puVar2 = in_register_000104d0;
          puVar2[1] = in_register_000104d4;
          puVar2[2] = in_register_000104d8;
          puVar2[3] = in_vr77;
          *(undefined1 *)((int)piVar4 + 0x32) = 0;
          piVar4[0xd] = 0;
          piVar4[0xe] = 0;
        }
        piVar4 = piVar4 + 0x10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*param_2 != 0) {
      fn_82529320(*param_2,0);
    }
    uVar3 = 0;
    if (param_2[0x1b] != 0) {
      do {
        iVar1 = param_2[0x19];
        uVar3 = uVar3 + 1;
        param_2[0x19] = iVar1 + 0x10;
        if (iVar1 + 0x10 == param_2[0x18]) {
          param_2[0x19] = param_2[0x17];
        }
      } while (uVar3 < (uint)param_2[0x1b]);
    }
    if (param_2[0x17] != 0) {
      fn_8265CA20();
    }
    fn_8265CA20(param_2);
  }
  return;
}

