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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82299AC8();
extern int fn_82299D40();
extern int fn_82299E90();
extern int fn_8229A000();
extern int fn_8229AE10();
extern int fn_8229F618();
extern int fn_823588D0();
extern int fn_8235D648();
extern int fn_8235F738();
extern int fn_82360850();
extern int fn_824186B0();
extern int fn_82418800();
extern int fn_82536590();
extern int fn_8254EEB8();
extern int fn_82672C20();
extern unsigned int iStack_54;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_8235C4E0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_58 [4];
  int iStack_54;
  
  fn_823588D0();
  iVar8 = 0;
  if ((ulonglong)*(uint *)(param_2 + 0x19c) != 0) {
    lVar5 = (ulonglong)*(uint *)(param_2 + 0x19c) - 1;
    *(int *)(param_2 + 0x19c) = (int)lVar5;
    if (lVar5 == 0) {
      iVar6 = *(int *)(param_2 + 0x94);
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x3c) = 1;
        *(undefined4 *)(iVar6 + 0x48) = 0;
      }
      *(undefined4 *)(param_2 + 0x198) = 1;
    }
  }
  if ((*(int *)(param_2 + 0x2ba4) == 0) &&
     ((*(int *)(param_2 + 0xa0) == 0 || (*(int *)(*(int *)(param_2 + 0xa0) + 0x40) != 1)))) {
    if (*(int *)(param_2 + 0xc08) == 1) {
      fn_82536590(param_2 + 0x14cc,0);
    }
    *(undefined4 *)(param_2 + 0x2ba4) = 1;
  }
  iVar6 = *(int *)(param_2 + 0xd4);
  dVar13 = (double)lbl_821CC160;
  if ((double)*(float *)(iVar6 + 0x182c) <= dVar13) {
    if ((dVar13 < (double)*(float *)(iVar6 + 0x1830)) &&
       (fVar1 = (float)((double)*(float *)(iVar6 + 0x1830) - param_1),
       *(float *)(iVar6 + 0x1830) = fVar1, (double)fVar1 < dVar13)) {
      fn_8229A000(*(undefined4 *)(iVar6 + 0x1848));
      fn_8229A000(*(undefined4 *)(iVar6 + 0x184c));
      *(float *)(iVar6 + 0x1830) = (float)dVar13;
    }
  }
  else {
    fVar1 = (float)((double)*(float *)(iVar6 + 0x182c) - param_1);
    *(float *)(iVar6 + 0x182c) = fVar1;
    if ((double)fVar1 < dVar13) {
      if (*(int *)(iVar6 + 0x1834) == 0) {
        fn_82299AC8(*(undefined4 *)(iVar6 + 0x1848),iVar6 + 0x2c);
      }
      else if (*(int *)(iVar6 + 0x1838) == 0) {
        fn_82299D40(*(undefined4 *)(iVar6 + 0x184c),iVar6 + 0x2c,iVar6 + 0x82c);
      }
      else {
        fn_82299E90(*(undefined4 *)(iVar6 + 0x184c),iVar6 + 0x102c,iVar6 + 0x2c,iVar6 + 0x82c)
        ;
      }
      *(float *)(iVar6 + 0x182c) = (float)dVar13;
    }
  }
  if (*(int **)(param_2 + 0x184) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x184) + 4))(param_1);
  }
  fn_8235D648(param_2);
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0xc04)) {
    piVar9 = (int *)(param_2 + 0x1ec4);
    do {
      piVar7 = piVar9 + -1;
      fn_82418800(param_1,piVar7);
      if (piVar9 + -1 == *(int **)(param_2 + 0x2b20)) {
        if ((int *)*piVar9 != (int *)0x0) {
          (**(code **)(*(int *)*piVar9 + 0x20))(param_1);
          iVar2 = (**(code **)(*(int *)*piVar9 + 0x3c))();
          if (iVar2 == 0) {
            if (((*(int *)(piVar9[5] * 0x1ac + piVar9[1] + 0x1c) == 0) || (piVar9[0xa6] != 0)) ||
               (uVar4 = 1, piVar9[0xab] != 0)) {
              uVar4 = 0;
            }
            fn_82360850(*piVar7,piVar7,uVar4,1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 0x108;
    } while (iVar6 < *(int *)(param_2 + 0xc04));
  }
  piVar9 = *(int **)(param_2 + 0x2b50);
  if (dVar13 < (double)(float)piVar9[0x45]) {
    dVar10 = (double)(float)((double)(float)piVar9[0x45] - param_1);
    dVar12 = -dVar10;
    dVar11 = dVar13;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar12 < dVar13) << 2) | (uint)(NAN(dVar12) || NAN(dVar13)) << 2))
        < 0.0) {
      dVar11 = dVar10;
    }
    piVar9[0x45] = (int)(float)dVar11;
    if (dVar11 == dVar13) {
      piVar9[0x43] = piVar9[0x44];
      if (*(int *)(*piVar9 + 4) != 0) {
        fn_8254EEB8((double)(float)piVar9[0x46],(double)(float)piVar9[0x47],dVar13,*piVar9,
                          (int)(float)piVar9[0x44]);
      }
    }
  }
  fn_8235F738(param_1,param_2);
  if ((*(int *)(param_2 + 0x2b20) == 0) || (*(int *)(*(int *)(param_2 + 0x2b20) + 0x2b0) != 7)) {
    uVar4 = 0;
  }
  else {
    fn_82536590(param_2 + 0x14d0,0);
    *(undefined4 *)(param_2 + 0x2ba4) = 0;
    if (*(int *)(param_2 + 0x2c9c) == 3) {
      fn_82536590(param_2 + 0x1488,0);
    }
    *(undefined4 *)(param_2 + 0x2c9c) = 1;
    if (*(int *)(*(int *)(param_2 + 0xd4) + 0x183c) == 0) {
      puVar3 = (undefined4 *)fn_8229AE10(auStack_58);
      fn_82672C20(*puVar3,0xffffffff821aa744,0,0);
      if (iStack_54 != 0) {
        fn_822315A0();
      }
    }
    else {
      fn_8229F618(*(undefined4 *)(*(int *)(param_2 + 0xd4) + 0xc));
    }
    if (0 < *(int *)(param_2 + 0xc04)) {
      iVar6 = param_2 + 0x1ec0;
      do {
        fn_824186B0(iVar6);
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x420;
      } while (iVar8 < *(int *)(param_2 + 0xc04));
    }
    uVar4 = 2;
  }
  return uVar4;
}

