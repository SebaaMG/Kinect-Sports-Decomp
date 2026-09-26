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
extern int fn_82594590();
extern int fn_82809950();


void fn_825946B8(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  double dVar6;
  double dVar7;
  
  iVar3 = 0;
  lVar4 = 0;
  pfVar5 = (float *)(param_1 + 0xc);
  do {
    dVar6 = (double)fn_82809950((double)pfVar5[-1]);
    dVar7 = (double)(float)(dVar6 * (double)*pfVar5 + (double)pfVar5[1]);
    dVar6 = (double)fn_82594590(param_1,pfVar5 + -3,
                                    (ulonglong)*(uint *)(param_1 + 0x28) + lVar4 + 4,
                                    (param_2 & 0xff) * 0x30 + -0x7cd93d30);
    iVar2 = ((param_2 & 0xff) * 0xc + iVar3) * 4;
    fVar1 = (float)(dVar6 * (double)(float)((double)pfVar5[-3] * dVar7));
    if (*(float *)(iVar2 + -0x7cd93d18) < fVar1) {
      *(float *)(iVar2 + -0x7cd93d18) = fVar1;
    }
    lVar4 = lVar4 + 0x6c;
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 5;
  } while ((int)lVar4 < 0xd8);
  return;
}

