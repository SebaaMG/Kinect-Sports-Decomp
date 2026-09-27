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
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_8257C978(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x34);
  while (iVar1 != 0) {
    piVar4 = (int *)(iVar1 + -0x38);
    iVar1 = *(int *)(iVar1 + 4);
    (**(code **)(*piVar4 + 0x18))(piVar4,iVar2);
  }
  dVar6 = (double)lbl_821CC160;
  if ((double)*(float *)(iVar2 + 0x838) <= dVar6) {
    dVar6 = (double)(*(float *)(iVar2 + 0x820) * lbl_8327F894);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  for (puVar3 = (undefined4 *)*puVar5; puVar3 != puVar5; puVar3 = (undefined4 *)*puVar3) {
    if (((int *)puVar3[2])[2] == 2) {
      (**(code **)(*(int *)puVar3[2] + 0x18))(dVar6);
    }
    puVar5 = *(undefined4 **)(param_1 + 0x28);
  }
  return;
}

