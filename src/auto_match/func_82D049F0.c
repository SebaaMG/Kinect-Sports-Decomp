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
extern int fn_82CE5410();


undefined4 * fn_82D049F0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  int aiStack_30 [12];
  
  iVar3 = fn_82CE5410();
  uVar2 = param_1[2] & 0x3fffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
  if ((int)uVar2 < param_2[1]) {
    if ((param_1[2] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*param_1,uVar2,1);
    }
    aiStack_30[0] = param_2[1];
    uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_30,1);
    *param_1 = uVar4;
    param_1[2] = aiStack_30[0];
  }
  uVar2 = param_2[1];
  uVar5 = (ulonglong)uVar2;
  puVar6 = (undefined1 *)*param_1;
  param_1[1] = uVar2;
  if (0 < (int)uVar2) {
    iVar3 = *param_2 - (int)puVar6;
    do {
      *puVar6 = puVar6[iVar3];
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_1;
}

