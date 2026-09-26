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
extern int fn_82469FF0();
extern int fn_8246B2A8();
extern int fn_8246B5D8();
extern int fn_825200A8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6D70;


void fn_8246B778(int param_1,int param_2,uint *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((param_3 != (uint *)0x0) &&
     (uVar4 = (ulonglong)*param_3, uVar4 != (uVar4 - 1) + (ulonglong)(uVar4 == 0))) {
    iVar5 = param_2 * 0x40 + param_1;
    if (((ulonglong)*(uint *)(iVar5 + 0x34) == 0) ||
       (iVar3 = fn_825200A8(param_3,(ulonglong)*(uint *)(iVar5 + 0x34) + 0xc), iVar3 == 0)) {
      if (*(int *)(iVar5 + 0x38) != 0) {
        fn_8246B5D8();
      }
      fVar2 = lbl_821CC160;
      iVar3 = *(int *)(iVar5 + 0x34);
      dVar6 = (double)lbl_821CC160;
      *(int *)(iVar5 + 0x38) = iVar3;
      if (iVar3 != 0) {
        puVar1 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        *(undefined4 *)(iVar3 + 0x30) = 0;
        *(float *)(iVar3 + 0x20) = fVar2;
        puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
      }
      uVar4 = fn_8265C9E0(0xd0);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82469FF0((double)*(float *)(iVar5 + 0x30),uVar4,
                                  *(undefined4 *)(param_1 + 0x80),param_1 + 0x88,param_2,param_3,
                                  param_4,0x20,(longlong)*(float *)(param_1 + 0xd8) & 0xffffffff);
      }
      *(int *)(iVar5 + 0x34) = iVar3;
      iVar5 = param_1 + 0x94;
      if (param_2 != 0) {
        iVar5 = param_1 + 0x90;
      }
      *(float *)(iVar3 + 0x90) = (float)dVar6;
      *(undefined4 *)(iVar3 + 0x8c) = lbl_831C6D70;
      fn_8246B2A8(iVar3,iVar5);
    }
  }
  return;
}

