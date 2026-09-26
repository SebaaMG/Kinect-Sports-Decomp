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
extern int fn_82CE63B0();
extern int fn_82D80A50();
extern int fn_83081170();
extern unsigned int lbl_82002AE0;


void fn_82DB5D78(double param_1,undefined8 param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double extraout_f1;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar6 = 0;
  if (0 < *(int *)(param_3 + 0x4c)) {
    iVar5 = 0;
    dVar7 = (double)lbl_82002AE0;
    do {
      iVar1 = *(int *)(iVar5 + *(int *)(param_3 + 0x48));
      fn_83081170(param_1,param_2,iVar1 + 0xf0);
      if (*(char *)(*param_4 + iVar6) != '\x10') {
        iVar4 = fn_82CE5410();
        if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_5,4);
        }
        *(int *)(param_5[1] * 4 + *param_5) = iVar1;
        param_5[1] = param_5[1] + 1;
        *(undefined1 *)(*param_4 + iVar6) = 0x10;
      }
      puVar2 = (undefined4 *)(iVar1 + 0x140U & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (undefined4 *)(iVar1 + 0x160U & 0xfffffff0);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      puVar3 = (undefined4 *)(iVar1 + 0x130U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar2 = (undefined4 *)(iVar1 + 0x150U & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      *(float *)(iVar1 + 0x13c) = (float)param_1;
      param_2 = fn_82D80A50(*(undefined4 *)(param_3 + 0x18));
      iVar6 = iVar6 + 1;
      *(float *)(iVar1 + 0x14c) = (float)(dVar7 / (double)(float)(extraout_f1 - param_1));
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_3 + 0x4c));
  }
  return;
}

