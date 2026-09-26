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
extern int fn_825D36C8();
extern int fn_8265C9E0();
extern int fn_82F6A53C();
extern int fn_82F6A588();


void fn_826128C0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar6 = fn_82F6A53C();
  if (*(int *)(iVar6 + 0x48) != 0) {
    uVar3 = fn_8251F720(iVar6 + 0x48,0);
    if (*(int *)(iVar6 + 0x4c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_8251F720(iVar6 + 0x4c,0);
    }
    dVar13 = (double)*(float *)(iVar6 + 0x5c);
    iVar1 = *(int *)(iVar6 + 0x50);
    dVar12 = (double)*(float *)(iVar6 + 0x54);
    dVar11 = (double)*(float *)(iVar6 + 0x68);
    dVar10 = (double)*(float *)(iVar6 + 0x60);
    dVar9 = (double)*(float *)(iVar6 + 0x6c);
    uVar2 = *(undefined4 *)((int)param_2 + 0x4c);
    dVar8 = (double)*(float *)(iVar6 + 100);
    dVar7 = (double)(*(float *)(iVar6 + 0x58) / (float)(dVar12 * dVar13));
    uVar5 = fn_8265C9E0(0x110);
    if ((uVar5 & 0xffffffff) != 0) {
      fn_825D36C8(dVar10,dVar12,dVar7,dVar13,dVar8,dVar11,dVar9,uVar5,uVar2,-(iVar1 != 0) & 4,
                      param_2 + 0x50,uVar3,uVar4);
    }
  }
  fn_82F6A588();
  return;
}

