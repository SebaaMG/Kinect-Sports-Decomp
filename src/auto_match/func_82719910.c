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
extern int fn_8267C498();
extern int fn_826A6A38();
extern int fn_826DF4E8();
extern int fn_826E7408();
extern int fn_826E7B08();
extern int fn_82715378();
extern int fn_827155B8();
extern int fn_82715898();
extern int fn_82715918();
extern int fn_82716570();
extern int fn_827166A0();
extern int fn_827197F8();
extern unsigned int uStack_40;
extern unsigned int uStack_90;


void fn_82719910(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar10;
  longlong lVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int aiStack_d0 [16];
  ushort uStack_90;
  int aiStack_80 [16];
  ushort uStack_40;
  
  if (param_3 == 7) {
    fn_827155B8(aiStack_d0);
    cVar10 = fn_82715918(aiStack_d0,param_2,7);
    if (cVar10 != '\0') {
      do {
        uVar11 = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar9 = 0;
          do {
            if (uStack_90 < *(ushort *)(iVar9 + *(int *)(param_1 + 0x18) + 0x40)) break;
            uVar11 = uVar11 + 1;
            iVar9 = iVar9 + 0x4c;
          } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c));
        }
        fn_827166A0((int *)(param_1 + 0x18),uVar11,aiStack_d0);
        if (aiStack_d0[0] != 0) {
          fn_8267C498();
        }
        fn_827155B8(aiStack_d0);
        cVar10 = fn_82715918(aiStack_d0,param_2,7);
      } while (cVar10 != '\0');
    }
    if (aiStack_d0[0] != 0) {
      fn_8267C498();
    }
    fn_827197F8((uint *)(param_1 + 0x24),(ulonglong)*(uint *)(param_1 + 0x28) + 1);
    iVar9 = *(int *)(param_2 + 0x314);
    if (iVar9 == 0) {
      iVar9 = param_2 + 0x28;
    }
    lVar6 = fn_826E7408(iVar9);
    iVar9 = param_2 + 0x28;
    if (*(int *)(param_2 + 0x314) != 0) {
      iVar9 = *(int *)(param_2 + 0x314);
    }
    fn_82716570(((ulonglong)*(uint *)(param_1 + 0x28) & 0xfffffff) * 0x10 +
                  (ulonglong)*(uint *)(param_1 + 0x24) + -0x10,iVar9,7,
                  (((ulonglong)*(uint *)(iVar9 + 0x30) - (ulonglong)*(uint *)(iVar9 + 0x34)) -
                  (ulonglong)*(uint *)(iVar9 + 0x2c)) + lVar6);
  }
  else if (param_3 == 0x11) {
    piVar7 = *(int **)(*(int *)(param_2 + 0x10) + 0x34);
    if (piVar7 == (int *)0x0) {
      fn_82715378(param_2);
      fn_82715898(param_2 + 0x14,0xffffffff8200f9c8);
    }
    else {
      piVar7 = (int *)(**(code **)(*piVar7 + 8))();
      uVar8 = (**(code **)(*piVar7 + 4))(piVar7,param_2);
      *(undefined4 *)(param_1 + 0x10) = uVar8;
    }
  }
  else if (param_3 == 0x22) {
    cVar10 = fn_826DF4E8(param_2);
    *(char *)(param_1 + 0x14) = '\x01' - (cVar10 == '\0');
    uVar11 = fn_826A6A38(param_2);
    iVar9 = *(int *)(param_2 + 0x314);
    if (iVar9 == 0) {
      iVar9 = param_2 + 0x28;
    }
    uVar1 = *(uint *)(iVar9 + 0x34);
    uVar2 = *(uint *)(iVar9 + 0x30);
    uVar3 = *(uint *)(iVar9 + 0x2c);
    fn_827155B8(aiStack_80);
    cVar10 = fn_82715918(aiStack_80,param_2,0x22);
    if (cVar10 != '\0') {
      do {
        uVar12 = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          iVar9 = 0;
          do {
            if (uStack_40 < *(ushort *)(iVar9 + *(int *)(param_1 + 0x18) + 0x40)) break;
            uVar12 = uVar12 + 1;
            iVar9 = iVar9 + 0x4c;
          } while ((uVar12 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c));
        }
        fn_827166A0((int *)(param_1 + 0x18),uVar12,aiStack_80);
        if (aiStack_80[0] != 0) {
          fn_8267C498();
        }
        fn_827155B8(aiStack_80);
        cVar10 = fn_82715918(aiStack_80,param_2,0x22);
      } while (cVar10 != '\0');
    }
    if (aiStack_80[0] != 0) {
      fn_8267C498();
    }
    if ((int)(uVar11 & 0xffff) != 0) {
      iVar9 = *(int *)(param_2 + 0x314);
      if (iVar9 == 0) {
        iVar9 = param_2 + 0x28;
      }
      fn_826E7B08(iVar9,((ulonglong)uVar1 - (ulonglong)uVar2) + (ulonglong)uVar3 +
                              (uVar11 & 0xffff) + -2);
      while( true ) {
        uVar11 = fn_826A6A38(param_2);
        iVar9 = *(int *)(param_2 + 0x314);
        uVar11 = uVar11 & 0xffff;
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        uVar1 = *(uint *)(iVar9 + 0x34);
        uVar2 = *(uint *)(iVar9 + 0x30);
        uVar3 = *(uint *)(iVar9 + 0x2c);
        fn_827197F8((uint *)(param_1 + 0x24),(ulonglong)*(uint *)(param_1 + 0x28) + 1);
        if (uVar11 == 0) {
          iVar9 = *(int *)(param_2 + 0x314);
          if (iVar9 == 0) {
            iVar9 = param_2 + 0x28;
          }
          lVar6 = fn_826E7408(iVar9);
          iVar9 = *(int *)(param_2 + 0x314);
          if (iVar9 == 0) {
            iVar9 = param_2 + 0x28;
          }
          lVar6 = (((ulonglong)*(uint *)(iVar9 + 0x30) - (ulonglong)*(uint *)(iVar9 + 0x34)) -
                  (ulonglong)*(uint *)(iVar9 + 0x2c)) + lVar6;
        }
        else {
          lVar6 = uVar11 - 2;
        }
        iVar9 = *(int *)(param_2 + 0x314);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        fn_82716570(((ulonglong)*(uint *)(param_1 + 0x28) & 0xfffffff) * 0x10 +
                      (ulonglong)*(uint *)(param_1 + 0x24) + -0x10,iVar9,0x22,lVar6);
        if (uVar11 == 0) break;
        iVar9 = *(int *)(param_2 + 0x314);
        iVar13 = param_2 + 0x28;
        if (iVar9 != 0) {
          iVar13 = iVar9;
        }
        iVar4 = *(int *)(iVar13 + 0x34);
        iVar5 = *(int *)(iVar13 + 0x30);
        iVar13 = *(int *)(iVar13 + 0x2c);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        iVar9 = fn_826E7408(iVar9);
        if (iVar9 <= (iVar4 - iVar5) + iVar13) {
          return;
        }
        iVar9 = *(int *)(param_2 + 0x314);
        if (iVar9 == 0) {
          iVar9 = param_2 + 0x28;
        }
        fn_826E7B08(iVar9,((ulonglong)uVar1 - (ulonglong)uVar2) + (ulonglong)uVar3 + uVar11 +
                                -2);
      }
    }
  }
  return;
}

