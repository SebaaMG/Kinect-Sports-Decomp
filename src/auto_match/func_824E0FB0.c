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
extern int fn_8255A070();
extern int fn_8255A470();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824E0FB0(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar1 = lbl_821CA460;
  if (*(int *)(param_2 + 0x1c) == 1) {
    fVar1 = lbl_82192734;
  }
  dVar4 = (double)fVar1;
  dVar3 = (double)fn_8255A070();
  dVar5 = (double)(float)(dVar3 * dVar4);
  dVar3 = (double)fn_8255A070();
  dVar4 = (double)lbl_821CC160;
  dVar3 = (double)fn_8255A470((double)(float)(dVar5 - dVar3),dVar4,(double)lbl_82193E50);
  uVar2 = (uint)((double)**(float **)(param_2 + 4) < dVar3);
  *(uint *)(param_2 + 0x10) = uVar2;
  if ((uVar2 != 0) && ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) != 0)))) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) + param_1);
    *(float *)(param_2 + 0x14) = fVar1;
    if (fVar1 <= (*(float **)(param_2 + 4))[1]) {
      return;
    }
    *(float *)(param_2 + 0x18) = (float)dVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  *(float *)(param_2 + 0x14) = (float)dVar4;
  return;
}

