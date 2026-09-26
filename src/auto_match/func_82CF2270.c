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
extern int fn_82CF1188();
extern int fn_82CF16D0();


void fn_82CF2270(undefined8 param_1,int param_2)

{
  float *pfVar1;
  float *pfVar3;
  int iVar4;
  ulonglong uVar2;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0x34)) {
    iVar5 = 0;
    do {
      pfVar1 = *(float **)(iVar5 + *(int *)(param_2 + 0x30));
      pfVar3 = (float *)fn_82CF1188(param_1,pfVar1[0x13],0);
      if (pfVar3 == (float *)0x0) {
        iVar4 = fn_82CE5410();
        uVar2 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x58);
        if ((uVar2 & 0xffffffff) == 0) {
          pfVar3 = (float *)0x0;
        }
        else {
          pfVar3 = (float *)fn_82CF16D0(uVar2,param_1,pfVar1[0x13],pfVar1[0x15]);
        }
      }
      *pfVar3 = *pfVar3 + *pfVar1;
      *(short *)(pfVar3 + 8) = *(short *)(pfVar1 + 8) + *(short *)(pfVar3 + 8);
      pfVar3[1] = pfVar1[1] + pfVar3[1];
      *(short *)((int)pfVar3 + 0x22) =
           *(short *)((int)pfVar1 + 0x22) + *(short *)((int)pfVar3 + 0x22);
      pfVar3[2] = pfVar1[2] + pfVar3[2];
      *(short *)(pfVar3 + 9) = *(short *)(pfVar1 + 9) + *(short *)(pfVar3 + 9);
      pfVar3[3] = pfVar1[3] + pfVar3[3];
      *(short *)((int)pfVar3 + 0x26) =
           *(short *)((int)pfVar1 + 0x26) + *(short *)((int)pfVar3 + 0x26);
      pfVar3[4] = pfVar1[4] + pfVar3[4];
      *(short *)(pfVar3 + 10) = *(short *)(pfVar1 + 10) + *(short *)(pfVar3 + 10);
      pfVar3[5] = pfVar1[5] + pfVar3[5];
      *(short *)((int)pfVar3 + 0x2a) =
           *(short *)((int)pfVar1 + 0x2a) + *(short *)((int)pfVar3 + 0x2a);
      pfVar3[6] = pfVar1[6] + pfVar3[6];
      *(short *)(pfVar3 + 0xb) = *(short *)(pfVar1 + 0xb) + *(short *)(pfVar3 + 0xb);
      pfVar3[7] = pfVar1[7] + pfVar3[7];
      *(short *)((int)pfVar3 + 0x2e) =
           *(short *)((int)pfVar1 + 0x2e) + *(short *)((int)pfVar3 + 0x2e);
      fn_82CF2270(pfVar3,pfVar1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_2 + 0x34));
  }
  return;
}

