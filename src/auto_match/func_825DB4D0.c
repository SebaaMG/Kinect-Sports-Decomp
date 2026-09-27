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
extern int fn_8261DBA8();
extern unsigned int lbl_8218E2E8;
extern float lbl_82195590;
extern float lbl_821955A0;


longlong fn_825DB4D0(double param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  lVar6 = 0;
  dVar8 = (double)fn_8261DBA8();
  lVar4 = 1;
  iVar3 = 0;
  lVar7 = 3;
  iVar5 = 4;
  do {
    fVar1 = (float)((double)(float)((double)*(float *)((int)&lbl_8218E2E8 + iVar5) + param_1) -
                   dVar8) * lbl_82195590;
    fVar2 = (float)((double)(float)((double)*(float *)((int)&lbl_8218E2E8 + iVar3) + param_1) -
                   dVar8) * lbl_82195590;
    if (ABS((float)(((double)fVar1 - (double)(longlong)fVar1) * lbl_821955A0)) <
        ABS((float)(((double)fVar2 - (double)(longlong)fVar2) * lbl_821955A0))) {
      lVar6 = lVar4;
      iVar3 = iVar5;
    }
    lVar4 = lVar4 + 1;
    iVar5 = iVar5 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return lVar6;
}

