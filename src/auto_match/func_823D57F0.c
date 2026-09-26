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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823D57F0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  
  fVar6 = lbl_821CC160;
  fVar5 = lbl_821CA460;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  pfVar9 = (float *)(param_1 + 0x3c);
  lVar10 = 4;
  do {
    iVar8 = iVar7 + iVar1;
    if (*(int *)(iVar8 + 0x18c) == 1) {
      fVar2 = *pfVar9 - *(float *)(iVar8 + 0x188);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar2 < fVar6) << 2) | (uint)(NAN(fVar2) || NAN(fVar6)) << 2)) <
          0.0) {
        fVar2 = fVar6;
      }
      fVar3 = fVar2 - fVar5;
      fVar4 = fVar5;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < fVar6) << 2) | (uint)(NAN(fVar3) || NAN(fVar6)) << 2)) <
          0.0) {
        fVar4 = fVar2;
      }
      *pfVar9 = fVar4;
    }
    pfVar9 = pfVar9 + 1;
    iVar7 = iVar7 + 0x18;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

