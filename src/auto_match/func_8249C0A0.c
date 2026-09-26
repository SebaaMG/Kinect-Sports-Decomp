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
extern int fn_8249D600();
extern int fn_8249D878();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F894;


undefined4 fn_8249C0A0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    dVar5 = (double)lbl_821CC160;
    if ((*(uint *)(param_2 + 0x24) & 2) == 0) {
      *(float *)(param_2 + 0x28) = lbl_821CC160;
    }
    else {
      fVar2 = *(float *)(param_2 + 0x28) + lbl_8327F894;
      if (fVar2 < lbl_8218E8E8) {
        *(float *)(param_2 + 0x28) = fVar2;
        *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
      }
    }
    iVar3 = fn_8249D600(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 4));
    if (iVar3 == 0) {
      *(float *)(param_2 + 0x28) = (float)dVar5;
    }
    if ((*(uint *)(param_2 + 0x24) & 8) == 0) {
      *(float *)(param_2 + 0x2c) = (float)dVar5;
    }
    else {
      fVar2 = *(float *)(param_2 + 0x2c) + lbl_8327F894;
      if (fVar2 < lbl_8218E8E8) {
        *(float *)(param_2 + 0x2c) = fVar2;
        *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
      }
    }
    iVar3 = *(int *)(param_1 + 0x110);
    iVar4 = fn_8249D878(0);
    iVar1 = *(int *)(iVar3 + 0x14);
    if (*(int *)(iVar3 + 0x10) != iVar1) {
      iVar4 = *(int *)(iVar1 + -8);
    }
    if (iVar4 == 0) {
      *(float *)(param_2 + 0x2c) = (float)dVar5;
    }
  }
  return *(undefined4 *)(param_2 + 0x24);
}

