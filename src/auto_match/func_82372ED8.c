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


undefined8 fn_82372ED8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0x260);
  iVar7 = *(int *)(iVar3 + 0x150) + -1;
  piVar4 = *(int **)**(int **)(param_1 + 8);
  piVar5 = (int *)((int *)**(int **)(param_1 + 8))[1];
  iVar1 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  iVar2 = (int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
  if ((((iVar1 != iVar7) && (iVar2 != iVar7)) &&
      ((iVar7 = *(int *)(iVar3 + 0x148) + -1, iVar7 <= iVar1 || (iVar7 <= iVar2)))) &&
     (uVar6 = iVar1 - iVar2 >> 0x1f,
     (int)((iVar1 - iVar2 ^ uVar6) - uVar6) < *(int *)(iVar3 + 0x14c) + -1)) {
    return 1;
  }
  return 0;
}

