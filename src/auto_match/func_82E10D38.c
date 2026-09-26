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
extern unsigned int *auStack_c0;
extern int fn_82CE5410();
extern int fn_82CE7EE0();
extern int fn_82CEAC20();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB070();
extern int fn_82CEB498();
extern int fn_82D04AB8();
extern int fn_82D04C78();
extern int fn_82D04CD0();
extern int fn_82D056B8();
extern int fn_82E0E5A8();
extern int fn_82E0E830();
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_82E10D38(undefined8 param_1,int *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 auStack_c0 [48];
  
  fn_82D04AB8(param_3,0xffffffff8214aa98);
  iVar9 = 0;
  fn_82CE7EE0(&uStack_f0);
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)fn_82CEAF20(param_1,*(undefined4 *)(iVar8 + *param_2));
      fn_82CE7EE0(&uStack_120);
      fn_82E0E5A8(*(undefined1 *)(puVar5 + 3),*(undefined1 *)((int)puVar5 + 0xd),&uStack_120);
      fn_82D056B8(&uStack_f0,0xffffffff8214ac10,uStack_120,*puVar5);
      iVar6 = fn_82CE5410();
      uStack_11c = 0;
      if ((uStack_118 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0xc) + 0x10))
                  (*(int **)(iVar6 + 0xc),uStack_120,uStack_118 & 0x3fffffff,1);
      }
      iVar7 = iVar7 + 1;
      uStack_120 = 0;
      iVar8 = iVar8 + 4;
      uStack_118 = 0x80000000;
    } while (iVar7 < param_2[1]);
  }
  uVar1 = uStack_f0;
  uVar3 = fn_82CEAF18(param_1);
  uVar4 = fn_82CEAC20(param_1);
  fn_82D056B8(param_3,0xffffffff8214aab0,uVar4,uVar3,uVar1);
  fn_82CE7EE0(&uStack_1b0);
  fn_82CE7EE0(&uStack_150);
  lVar10 = 0;
  iVar7 = fn_82CEAF18(param_1);
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      if ((iVar9 < param_2[1]) && (*(int *)(iVar7 + *param_2) == (int)lVar10)) {
        puVar5 = (undefined4 *)fn_82CEAF20(param_1,lVar10);
        uVar1 = *puVar5;
        uVar3 = fn_82CEAC20(param_1);
        fn_82D056B8(&uStack_1b0,0xffffffff8214ac64,uVar3,uVar1);
        fn_82D04C78(&uStack_1b0,0xffffffff82196fac);
        auStack_c0[0] = 0;
        uVar3 = fn_82CEB070(param_1,*puVar5);
        fn_82CEB498(param_1,uVar3,auStack_c0);
        fn_82CE7EE0(&uStack_180);
        fn_82E0E830(auStack_c0,*(undefined1 *)(puVar5 + 3),*(undefined1 *)((int)puVar5 + 0xd),
                      &uStack_180);
        fn_82D04CD0(&uStack_150,uStack_180,0xffffffff82196fac,0,0,0,0);
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 4;
        iVar8 = fn_82CE5410();
        uStack_17c = 0;
        if ((uStack_178 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0xc) + 0x10))
                    (*(int **)(iVar8 + 0xc),uStack_180,uStack_178 & 0x3fffffff,1);
        }
        uStack_180 = 0;
        uStack_178 = 0x80000000;
      }
      else {
        fn_82D04C78(&uStack_1b0,0xffffffff8214b04c);
      }
      lVar10 = lVar10 + 1;
      iVar8 = fn_82CEAF18(param_1);
    } while ((int)lVar10 < iVar8);
  }
  uVar2 = uStack_150;
  uVar1 = uStack_1b0;
  uVar3 = fn_82CEAC20(param_1);
  uVar4 = fn_82CEAC20(param_1);
  fn_82D056B8(param_3,0xffffffff8214ac20,uVar4,uVar3,uVar1,uVar2);
  fn_82D04C78(param_3,0xffffffff8214ac88);
  iVar9 = fn_82CE5410();
  uStack_14c = 0;
  if ((uStack_148 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
              (*(int **)(iVar9 + 0xc),uStack_150,uStack_148 & 0x3fffffff,1);
  }
  uStack_150 = 0;
  uStack_148 = 0x80000000;
  iVar9 = fn_82CE5410();
  uStack_1ac = 0;
  if ((uStack_1a8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
              (*(int **)(iVar9 + 0xc),uStack_1b0,uStack_1a8 & 0x3fffffff,1);
  }
  uStack_1b0 = 0;
  uStack_1a8 = 0x80000000;
  iVar9 = fn_82CE5410();
  uStack_ec = 0;
  if ((uStack_e8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar9 + 0xc) + 0x10))
              (*(int **)(iVar9 + 0xc),uStack_f0,uStack_e8 & 0x3fffffff,1);
  }
  return;
}

