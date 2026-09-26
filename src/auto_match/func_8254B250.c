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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern int fn_822A8A50();
extern int fn_822A8D30();
extern int fn_8251F720();
extern int fn_825200A8();
extern int fn_82536CC8();
extern int fn_8254CEB8();
extern int fn_8254D770();
extern int fn_8254E670();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327FB70;
extern unsigned int lbl_8327FB74;
extern unsigned int lbl_8327FB9C;


void fn_8254B250(int *param_1)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [112];
  
  if (*(int *)(*param_1 + 0x3e4) != 0) {
    piVar1 = *(int **)(*(int *)(*param_1 + 0x3e4) + 0x8c0);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x1c))();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x3c);
    param_1[1] = iVar3;
    if (iVar3 != 0) {
      fn_8254CEB8(param_1);
      fn_8254D770(param_1);
      iVar3 = fn_825200A8(0xffffffff8327fb28,0xffffffff82196288);
      if (iVar3 == 0) {
        iVar3 = fn_8251F720(0xffffffff8327fb28,0);
        param_1[0x3d] = iVar3;
      }
      param_1[0x38] = 0;
      param_1[0x3b] = 0;
      param_1[0x62] = 0;
      dVar7 = (double)lbl_821CC160;
      dVar6 = (double)lbl_821CA460;
      fn_8254E670(dVar6,dVar7,dVar7,dVar7,param_1,0,0);
      dVar5 = (double)lbl_82192734;
      if (param_1[1] != 0) {
        param_1[0x74] = (int)lbl_82192734;
        param_1[0x75] = 0;
        param_1[0x78] = (int)(float)dVar6;
        param_1[0x73] = 0;
      }
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = -1;
      fn_828647F0(auStack_a0,*(undefined4 *)(*param_1 + 0x84c));
      uVar4 = (ulonglong)lbl_8327F874;
      if (uVar4 == 0) {
        uVar4 = fn_82536CC8();
        lbl_8327F874 = (uint)uVar4;
      }
      uVar2 = fn_82864988(auStack_70,0xffffffff8327fb50);
      uVar4 = fn_822A8D30(uVar4,auStack_a0);
      if ((uVar4 & 0xffffffff) != 0) {
        fn_822A8A50(uVar4,uVar2);
      }
      fn_82864898(auStack_70);
      iVar3 = lbl_8327FB70;
      param_1[0x6c] = 0;
      param_1[0x6b] = iVar3;
      if (lbl_8327FB74 != 0) {
        param_1[0x6c] = lbl_8327FB74;
      }
      iVar3 = lbl_8327FB9C;
      param_1[0x6d] = 0;
      param_1[0x6e] = iVar3;
      param_1[0x72] = 0;
      param_1[0x70] = (int)(float)dVar7;
      *(undefined1 *)(param_1 + 0x42) = 0;
      param_1[0x74] = (int)(float)dVar5;
      param_1[0x75] = 0;
      param_1[0x78] = (int)(float)dVar6;
      param_1[0x73] = 0;
      param_1[0x3c] = 0;
      fn_82864898(auStack_a0);
    }
  }
  return;
}

