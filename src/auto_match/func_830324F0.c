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
extern int fn_83006E68();
extern int fn_83009C40();
extern int fn_830177C8();
extern int fn_8302AF48();
extern int fn_8302AFF8();
extern float lbl_82186E6C;
extern unsigned int lbl_832642FC;


undefined8 fn_830324F0(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  
  bVar2 = true;
  bVar1 = true;
  dVar6 = (double)fn_83009C40();
  *(float *)(param_2 + 4) = (float)(dVar6 + (double)*(float *)(param_2 + 4));
  if (((*(byte *)((int)param_1 + 0x3d) & 4) != 0) && (param_1[8] != 0)) {
    uVar3 = fn_83006E68(param_1);
    if ((uVar3 & 0xffffffff) == 0) {
      *(float *)(param_2 + 4) = *(float *)(param_1[8] + 4) + *(float *)(param_2 + 4);
      *(float *)(param_2 + 0x10) = *(float *)(param_1[8] + 0xc) + *(float *)(param_2 + 0x10);
    }
    else {
      iVar4 = fn_8302AF48();
      bVar1 = iVar4 != 1;
      *(float *)(param_2 + 4) = *(float *)(param_1[8] + 4) + *(float *)(param_2 + 4);
      iVar4 = fn_8302AFF8(uVar3);
      bVar2 = iVar4 != 1;
      *(float *)(param_2 + 0x10) = *(float *)(param_1[8] + 0xc) + *(float *)(param_2 + 0x10);
    }
  }
  if ((bVar1) &&
     (*(float *)(param_2 + 4) =
           (float)(longlong)*(short *)(param_1 + 0xb) * lbl_82186E6C + *(float *)(param_2 + 4),
     (param_1[0x10] & 1U) != 0)) {
    dVar6 = (double)fn_830177C8(lbl_832642FC,param_1,0,0);
    *(float *)(param_2 + 4) = (float)(dVar6 + (double)*(float *)(param_2 + 4));
  }
  if ((bVar2) &&
     (*(float *)(param_2 + 0x10) =
           (float)(longlong)*(short *)(param_1 + 0xc) + *(float *)(param_2 + 0x10),
     ((uint)param_1[0x10] >> 2 & 1) != 0)) {
    dVar6 = (double)fn_830177C8(lbl_832642FC,param_1,2,0);
    *(float *)(param_2 + 0x10) = (float)(dVar6 + (double)*(float *)(param_2 + 0x10));
  }
  if (param_1[9] != 0) {
    *(float *)(param_2 + 4) = *(float *)(param_1[9] + 0x28) + *(float *)(param_2 + 4);
    *(float *)(param_2 + 0x10) = *(float *)(param_1[9] + 0x34) + *(float *)(param_2 + 0x10);
  }
  piVar5 = (int *)(**(code **)(*param_1 + 0x10c))(param_1);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0x100))(piVar5,param_2,param_3,param_4,0);
  }
  return 1;
}

