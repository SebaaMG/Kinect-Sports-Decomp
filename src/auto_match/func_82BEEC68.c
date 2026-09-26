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


void fn_82BEEC68(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  
  pfVar5 = (float *)(param_1 + -4);
  pfVar7 = (float *)(param_2 + 8);
  lVar4 = 4;
  do {
    pfVar6 = (float *)(param_3 + -4);
    lVar8 = 4;
    do {
      pfVar1 = pfVar6 + 0xd;
      pfVar2 = pfVar6 + 9;
      pfVar3 = pfVar6 + 5;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 1;
      *pfVar5 = *pfVar6 * pfVar7[-2] +
                *pfVar3 * pfVar7[-1] + *pfVar2 * *pfVar7 + *pfVar1 * pfVar7[1];
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar4 = lVar4 + -1;
    pfVar7 = pfVar7 + 4;
  } while (lVar4 != 0);
  return;
}

