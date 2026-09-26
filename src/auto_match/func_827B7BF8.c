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
extern int fn_827B7AE0();


void fn_827B7BF8(int param_1,int *param_2,int *param_3,undefined2 param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = param_2;
  do {
    piVar2 = (int *)piVar4[4];
    fn_827B7AE0(param_1,piVar4);
    if (piVar4 != param_2) {
      puVar3 = (undefined4 *)piVar4[2];
      *puVar3 = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 **)(param_1 + 0x70) = puVar3;
      *(int *)(*piVar4 + 4) = piVar4[1];
      *(int *)piVar4[1] = *piVar4;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      if ((*(ushort *)(piVar4 + 8) & 0x4000) == 0) {
        *(int *)(piVar4[5] + 0x18) = piVar4[6];
        *(int *)(piVar4[6] + 0x14) = piVar4[5];
      }
      *(int *)(piVar4[3] + 0x10) = piVar4[4];
      *(int *)(piVar4[4] + 0xc) = piVar4[3];
      *piVar4 = *(int *)(param_1 + 0x28);
      *(int **)(param_1 + 0x28) = piVar4;
    }
    bVar1 = piVar4 != param_3;
    piVar4 = piVar2;
  } while (bVar1);
  *(undefined2 *)(param_2 + 9) = param_4;
  *(undefined2 *)(param_2[2] + 0x1c) = param_4;
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  param_2[1] = *(int *)(param_1 + 0x34);
  *param_2 = param_1 + 0x30;
  **(undefined4 **)(param_1 + 0x34) = param_2;
  *(int **)(param_1 + 0x34) = param_2;
  return;
}

