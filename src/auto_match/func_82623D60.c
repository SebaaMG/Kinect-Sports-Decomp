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
extern int fn_8263FB88();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;


void fn_82623D60(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = (double)fn_82F6A540();
  dVar8 = (double)*param_5;
  dVar7 = (double)param_5[1];
  dVar6 = -dVar8;
  dVar5 = -dVar7;
  pfVar3 = (float *)fn_8263FB88(lbl_8320A898,0xd,4,0x14);
  if (-1 < (longlong)-(ulonglong)(pfVar3 == (float *)0x0)) {
    *pfVar3 = (float)dVar6;
    pfVar3[1] = (float)dVar5;
    iVar2 = lbl_8320A898;
    pfVar3[4] = (float)param_2;
    pfVar3[5] = (float)dVar8;
    pfVar3[6] = (float)dVar5;
    fVar1 = lbl_821CC160;
    pfVar3[2] = lbl_821CC160;
    pfVar3[3] = fVar1;
    pfVar3[7] = fVar1;
    pfVar3[8] = (float)dVar4;
    pfVar3[9] = (float)param_2;
    pfVar3[10] = (float)dVar8;
    pfVar3[0xb] = (float)dVar7;
    pfVar3[0xc] = fVar1;
    pfVar3[0xd] = (float)dVar4;
    pfVar3[0xe] = fVar1;
    pfVar3[0xf] = (float)dVar6;
    pfVar3[0x10] = (float)dVar7;
    pfVar3[0x11] = fVar1;
    pfVar3[0x12] = fVar1;
    pfVar3[0x13] = fVar1;
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x3554);
  }
  fn_82F6A58C();
  return;
}

