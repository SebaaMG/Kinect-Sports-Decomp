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
extern unsigned int *auStack_50;
extern int fn_82539560();
extern int fn_82A8CFD0();
extern int fn_82F68CC0();
extern int fn_8306E890();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021544;
extern unsigned int lbl_821AAD20;


void fn_8306D020(double param_1,longlong param_2,int param_3)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_50 [80];
  
  uVar2 = fn_82A8CFD0(auStack_50,(ulonglong)*(uint *)(param_3 + 0xd80) * 0x5994 + param_2,
                            param_3 + 0xd8c);
  fn_82F68CC0(param_3 + 0xd8c,uVar2,0x20);
  *(float *)(param_3 + 0xd88) = (float)((double)*(float *)(param_3 + 0xd88) + param_1);
  uVar2 = fn_8306E890((double)lbl_82021544,param_1);
  dVar3 = (double)*(float *)(param_3 + 0xd84);
  fVar1 = lbl_82002AE0;
  if ((double)lbl_821AAD20 < dVar3) {
    fVar1 = (float)((double)*(float *)(param_3 + 0xd88) / dVar3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)(fVar1 * fVar1 * fVar1),(double)lbl_821AAD20,dVar3,uVar2);
}

