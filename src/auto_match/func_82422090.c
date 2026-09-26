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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_822C18B8();
extern int fn_82417FC0();
extern int fn_8252D970();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82536590();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82422090(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  int in_r0;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 auStack_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [80];
  
  puVar1 = (uint *)*param_1;
  if (*(int *)(*puVar1 + 0xc24) == 0) {
    param_1[3] = 1;
    param_1[6] = *(undefined4 *)(*puVar1 + 0x9a8);
    fVar6 = lbl_821CC160;
    param_1[2] = 2;
    param_1[7] = fVar6;
    fn_82536590((ulonglong)*puVar1 + 0x1490,0);
  }
  else {
    dVar7 = (double)lbl_821CC160;
    fn_8252D970(dVar7,param_1[1]);
    if (*(int *)(param_1[1] + 400) != 0) {
      *(undefined4 *)(**(int **)(*(int *)(param_1[1] + 400) + 400) + 0x118) = 0;
    }
    puVar4 = (undefined4 *)(param_1[1] + 0x50 & 0xfffffff0);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;
    if (param_2 != 0) {
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      piVar2 = (int *)*param_1;
      iVar3 = *piVar2;
      fn_82417FC0(piVar2,&uStack_60);
      auStack_70[0] = *(undefined4 *)(iVar3 + 0x1480);
      auStack_70[0] =
           fn_825354B8(auStack_70,auStack_50,0,**(undefined4 **)(*piVar2 + 0x2b58),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(auStack_70);
      fn_822C18B8(&uStack_60);
    }
    param_1[6] = (float)dVar7;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  param_1[5] = 1;
  return;
}

