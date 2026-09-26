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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825B9678();
extern unsigned int lbl_821CC160;


int fn_825B9598(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (((param_1 != (uint *)0x0) &&
      (uVar4 = (ulonglong)*param_1, uVar4 != (uVar4 - 1) + (ulonglong)(uVar4 == 0))) &&
     (puVar2 = (undefined4 *)fn_8251F720(param_1,0), puVar2 != (undefined4 *)0x0)) {
    if ((param_2 == 0) || ((float)puVar2[4] <= lbl_821CC160)) {
      dVar6 = (double)(float)puVar2[2];
      dVar5 = (double)(float)puVar2[1];
      iVar3 = fn_825B9678(*puVar2);
      *(float *)(iVar3 + 0x34) = (float)dVar5;
      *(float *)(iVar3 + 0x28) = (float)dVar6;
    }
    else {
      dVar6 = (double)(float)puVar2[2];
      dVar5 = (double)(float)puVar2[1];
      iVar3 = fn_825B9678(*puVar2);
      *(float *)(iVar3 + 0x34) = (float)dVar5;
      *(float *)(iVar3 + 0x28) = (float)dVar6;
      puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      *(undefined1 *)(iVar3 + 0x86) = 1;
      puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      uVar7 = puVar2[4];
      *(undefined4 *)(iVar3 + 8) = puVar2[3];
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
    }
    fn_8251FA58(puVar2);
    return iVar3;
  }
  return 0;
}

