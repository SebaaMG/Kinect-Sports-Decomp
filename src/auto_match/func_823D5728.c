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


void fn_823D5728(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  
  fVar5 = lbl_821CC160;
  fVar4 = lbl_821CA460;
  iVar6 = 0;
  pfVar7 = (float *)(param_1 + 0x3c);
  lVar9 = 4;
  do {
    iVar8 = *(int *)(param_1 + 0xc) + iVar6;
    if ((*(int *)(iVar8 + 0x184) == 3) &&
       (*(float *)(iVar8 + 0x180) < (float)(longlong)*(int *)(param_1 + 0x94))) {
      fVar1 = *(float *)(iVar8 + 0x17c) + *pfVar7;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < fVar5) << 2) | (uint)(NAN(fVar1) || NAN(fVar5)) << 2)) <
          0.0) {
        fVar1 = fVar5;
      }
      fVar2 = fVar1 - fVar4;
      fVar3 = fVar4;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar2 < fVar5) << 2) | (uint)(NAN(fVar2) || NAN(fVar5)) << 2)) <
          0.0) {
        fVar3 = fVar1;
      }
      *pfVar7 = fVar3;
    }
    pfVar7 = pfVar7 + 1;
    iVar6 = iVar6 + 0x18;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

