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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_827F7210();
extern int fn_827F7218();
extern int fn_827F7230();
extern int fn_827F7360();
extern int fn_827F8580();
extern int fn_827F98C8();
extern int fn_827F99E8();
extern int fn_827F9B68();
extern int fn_82800A48();
extern int fn_82800A60();
extern int fn_8280B240();
extern int fn_8280CB70();
extern int fn_8280D3A8();


void fn_827F9090(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 *puStack_c0;
  float *pfStack_bc;
  uint auStack_b8 [2];
  undefined1 auStack_b0 [176];
  
  puVar11 = *(undefined4 **)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  puVar8 = *(ushort **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x84);
  uVar2 = fn_827F7210();
  uVar13 = 0;
  uVar9 = 0;
  if ((uVar2 & 0xffff) != 0) {
    pfVar12 = (float *)(iVar5 + 0x14);
    do {
      iVar5 = fn_827F99E8(param_1,uVar13);
      if (iVar5 == 0) {
        lVar10 = uVar13 * 0x40 + (ulonglong)*(uint *)(param_1 + 0xc);
        iVar5 = fn_82800A60(param_1);
        if (iVar5 == 0) {
          puStack_c0 = auStack_b0;
        }
        else {
          fn_82800A48(param_1,uVar13,&puStack_c0);
        }
        iVar5 = fn_827F9B68(param_1,uVar13);
        if (((puVar11 == (undefined4 *)0x0) || (puVar8 == (ushort *)0x0)) ||
           ((ulonglong)*puVar8 == 0xffff)) {
LAB_827f9154:
          iVar14 = 0;
        }
        else {
          iVar14 = 1;
          if (*puVar8 != uVar13) goto LAB_827f9154;
        }
        fn_827F98C8(param_1,uVar13,&pfStack_bc);
        if (iVar5 == 0) {
          fn_8280B240((double)*pfStack_bc,(double)pfStack_bc[1],(double)pfStack_bc[2],puStack_c0);
        }
        else {
          fn_8280D3A8((double)pfVar12[3],(double)pfVar12[4],(double)pfVar12[5],
                            (double)pfVar12[-5],(double)pfVar12[-4],(double)pfVar12[-3],
                            (double)pfVar12[-2],(double)(*pfStack_bc + pfVar12[-1]),
                            (double)(pfStack_bc[1] + *pfVar12),(double)(pfStack_bc[2] + pfVar12[1]))
          ;
        }
        uVar3 = fn_827F7218(param_1,uVar13);
        if ((uVar3 & 0xffffffff) == 0xffff) {
          fn_827F7230(param_1,auStack_b8);
          uVar4 = (ulonglong)auStack_b8[0];
        }
        else {
          iVar6 = fn_827F9B68(param_1,uVar3 & 0xffff);
          if (iVar6 != 0) {
            iVar6 = (int)uVar3 * 0x30 + *(int *)(param_1 + 0x84);
            fn_827F7360((double)*(float *)(iVar6 + 0x20),(double)*(float *)(iVar6 + 0x24),
                          (double)*(float *)(iVar6 + 0x28),(double)pfVar12[6]);
          }
          uVar4 = (uVar3 & 0x3ffffff) * 0x40 + (ulonglong)*(uint *)(param_1 + 0xc);
          auStack_b8[0] = (uint)uVar4;
        }
        if ((param_2 & 2) == 0) {
          if ((iVar5 == 0) || (iVar14 == 0)) {
            fn_8280CB70(uVar4,puStack_c0,lVar10);
          }
          else {
            if ((uVar3 & 0xffffffff) == 0xffff) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(pfStack_bc + 10) * 0x34 +
                      (ulonglong)*(uint *)(param_1 + 8);
            }
            (*(code *)*puVar11)(uVar4,puStack_c0,lVar10,uVar1,pfStack_bc,lVar7,uVar9 & 0xffff);
          }
          puVar11 = puVar11 + iVar14;
          puVar8 = puVar8 + iVar14;
          uVar9 = iVar14 + uVar9;
        }
      }
      pfVar12 = pfVar12 + 0xc;
      uVar13 = uVar13 + 1 & 0xffff;
    } while (uVar13 < (uVar2 & 0xffff));
  }
  if ((param_2 & 3) == 0) {
    fn_827F8580(param_1);
  }
  return;
}

