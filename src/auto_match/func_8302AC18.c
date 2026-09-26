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
extern int fn_82FF5D28();
extern int fn_8302A8F0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83264368;


undefined8 fn_8302AC18(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  *(int *)(param_1 + 0x14) = param_2[1];
  *(byte *)(param_1 + 0x38) = *(char *)(param_2 + 6) << 7 | *(byte *)(param_1 + 0x38) & 0x7f;
  dVar5 = (double)(float)param_2[2];
  dVar4 = (double)(float)param_2[3];
  if (*(char *)(param_2 + 6) != '\0') {
    dVar5 = (double)fn_8302A8F0(dVar5,lbl_83264368);
    dVar4 = (double)fn_8302A8F0(dVar4,lbl_83264368);
  }
  *(float *)(param_1 + 8) = (float)dVar5;
  *(float *)(param_1 + 0x10) = (float)dVar5;
  *(float *)(param_1 + 0xc) = (float)dVar4;
  if (((dVar5 < dVar4) || (iVar1 = param_2[5], iVar1 == 3)) || (iVar3 = 8 - iVar1, iVar1 == 5)) {
    iVar3 = param_2[5];
  }
  *(int *)(param_1 + 4) = iVar3;
  *(float *)(param_1 + 0x18) = (float)param_3;
  iVar1 = param_2[4];
  *(undefined4 *)(param_1 + 0x20) = lbl_821AAD20;
  *(float *)(param_1 + 0x1c) = (float)((ulonglong)(iVar1 + 0x14) / 0x15);
  iVar1 = *param_2;
  for (piVar2 = *(int **)(param_1 + 0x28);
      (piVar2 != *(int **)(param_1 + 0x2c) && (*piVar2 != iVar1)); piVar2 = piVar2 + 1) {
  }
  if (((int)"stuninto_head" - (int)("stuninto_head" + (*(int **)(param_1 + 0x2c) != piVar2)) &
      (uint)piVar2) == 0) {
    piVar2 = (int *)fn_82FF5D28(param_1 + 0x28);
    if (piVar2 == (int *)0x0) {
      return 2;
    }
    *piVar2 = iVar1;
    *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
  }
  return 1;
}

