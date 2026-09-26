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
extern int fn_8252AFE0();
extern unsigned int lbl_82191118;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82360050(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)*(float *)(param_2 + 0x2c98);
  dVar7 = (double)*(float *)(param_2 + 0x2c94);
  if (dVar7 <= dVar5) {
    dVar7 = (double)(float)((double)*(float *)(param_2 + 0x68c) * param_1 + dVar7);
    fVar1 = (float)(dVar5 - dVar7);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar7 = dVar5;
    }
  }
  else {
    dVar6 = -(double)(float)((double)*(float *)(param_2 + 0x688) * param_1 - dVar7);
    fVar1 = (float)(dVar5 - dVar6);
    dVar7 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar7 = dVar6;
    }
  }
  dVar5 = (double)lbl_821CC160;
  *(float *)(param_2 + 0x2c94) = (float)dVar7;
  iVar2 = *(int *)((*(int *)(param_2 + 0x2c8c) + 0xb0a) * 4 + param_2);
  if (iVar2 != 0) {
    fn_8252AFE0(dVar7,iVar2);
    iVar2 = *(int *)((*(int *)(param_2 + 0x2c8c) + 0xb0a) * 4 + param_2);
    uVar3 = *(uint *)(iVar2 + 0x1e0);
    if (lbl_82191118 <= *(float *)(param_2 + 0x2c94)) {
      uVar3 = uVar3 & 0xffffffdf;
    }
    else {
      uVar3 = uVar3 | 0x20;
    }
    *(uint *)(iVar2 + 0x1e0) = uVar3;
    bVar4 = (double)*(float *)(param_2 + 0x2c94) == dVar5;
    *(uint *)(*(int *)((*(int *)(param_2 + 0x2c8c) + 0xb0a) * 4 + param_2) + 0x1d0) =
         (uint)bVar4 + (-(uint)!bVar4 - (bVar4 - 1));
  }
  return;
}

