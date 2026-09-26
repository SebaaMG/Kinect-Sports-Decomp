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
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82577168(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  fVar5 = lbl_821CC160;
  fVar4 = lbl_821917B4;
  fVar3 = lbl_8218E8FC;
  dVar6 = (double)lbl_821CC160;
  if (param_1 <= dVar6) {
    return;
  }
  iVar2 = *(int *)(*param_2 + 0x1a8);
  fVar1 = (float)((double)lbl_821CA460 / param_1);
  param_2[0xd] = *(int *)(iVar2 + 0x1e8);
  param_2[0xe] = *(int *)(iVar2 + 0x1f0);
  param_2[0x12] = *(int *)(iVar2 + 0x1e0);
  param_2[0x13] = *(int *)(iVar2 + 0x1e4);
  param_2[0x15] = (int)fVar1;
  param_2[0x11] = (int)(float)param_1;
  param_2[0xf] = (int)((fVar4 - (float)param_2[0x12]) * fVar1);
  param_2[0x10] = (int)((fVar3 - (float)param_2[0x13]) * fVar1);
  if ((double)(float)param_2[0x14] < dVar6) {
    param_2[0x14] = (int)fVar5;
  }
  *(undefined1 *)(param_2 + 0xc) = 1;
  return;
}

