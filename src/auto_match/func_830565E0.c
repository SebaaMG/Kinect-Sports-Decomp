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
extern int fn_82A1EFC0();
extern int fn_83056488();


void fn_830565E0(int param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  fn_83056488();
  uVar1 = param_2[2];
  if (uVar1 == 0x11) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar2 = (ulonglong)*(ushort *)(param_2 + 3) - (ulonglong)*(ushort *)((int)param_2 + 0xe);
    if ((ulonglong)uVar3 < (uVar2 & 0xffffffff)) {
      uVar2 = (ulonglong)uVar3;
    }
    iVar4 = 0;
    *(uint *)(param_1 + 0x10) = uVar3 - (int)uVar2;
    uVar2 = (-(*(ushort *)((int)param_2 + 0xe) + uVar2) & 3) + uVar2;
    for (uVar3 = param_2[1]; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0((ulonglong)*(ushort *)((int)param_2 + 0xe) * 4 + (ulonglong)*param_2,0,
                        (uVar2 & 0x3fffffff) << 2);
    }
    *(short *)((int)param_2 + 0xe) = *(short *)((int)param_2 + 0xe) + (short)uVar2;
    if (*(int *)(param_1 + 0x10) != 0) {
      param_2[2] = 0x2d;
    }
  }
  *(bool *)(param_1 + 0x14) = uVar1 == 0x11;
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8),param_2);
  return;
}

