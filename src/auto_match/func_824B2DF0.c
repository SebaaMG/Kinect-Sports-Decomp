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
extern int fn_824B2FA0();
extern int fn_824B3A40();
extern int fn_824B3C70();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_824B2DF0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fn_824B2FA0();
  dVar5 = (double)fn_824B3A40(param_1);
  fVar4 = lbl_821CC160;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar2 + 0x78) == 0) {
    *(float *)(iVar2 + 0x1c) = (float)dVar5;
  }
  else {
    fVar1 = (float)(dVar5 - (double)*(float *)(iVar2 + 0x1c));
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar5 = (double)*(float *)(iVar2 + 0x1c);
    }
    *(float *)(iVar2 + 0x1c) = (float)dVar5;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  fVar1 = *(float *)(iVar2 + 0x6c) - *(float *)(iVar2 + 0x1c);
  fVar3 = *(float *)(iVar2 + 0x6c);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar4) << 2) | (uint)(NAN(fVar1) || NAN(fVar4)) << 2)) < 0.0)
  {
    fVar3 = *(float *)(iVar2 + 0x1c);
  }
  *(float *)(iVar2 + 0x6c) = fVar3;
  *(int *)(*(int *)(param_1 + 0x3c) + 0x74) = *(int *)(*(int *)(param_1 + 0x3c) + 0x74) + 1;
  iVar2 = *(int *)(param_1 + 0x3c);
  *(float *)(iVar2 + 0x68) =
       *(float *)(iVar2 + 0x1c) / (float)*(uint *)(iVar2 + 0x74) + *(float *)(iVar2 + 0x68);
  fn_824B3C70(param_1);
  return;
}

