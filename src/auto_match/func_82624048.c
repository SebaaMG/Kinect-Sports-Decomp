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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_c0;
extern float fRam8326b4f4;
extern int fn_82588528();
extern int fn_82624218();
extern int fn_82A2A288();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B874;
extern unsigned int lbl_8326B878;
extern unsigned int lbl_8326B8E8;
extern float lbl_83274AFC;
extern unsigned int uRam8326b858;
extern unsigned int uRam83274af4;
extern unsigned int uStack_128;


void fn_82624048(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  float afStack_130 [2];
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  char acStack_100 [64];
  undefined1 auStack_c0 [144];
  
  iVar6 = *param_2;
  iVar5 = *param_3;
  lbl_8326B85C = lbl_83274AFC;
  lbl_8326B860 = lbl_83274AFC;
  uRam8326b858 = uRam83274af4;
  lbl_8326B874 = *(float *)((&lbl_8326B8E8)[lbl_8326B850] + 0x10) * lbl_83274AFC * lbl_8218E8E8;
  lbl_8326B878 = *(float *)((&lbl_8326B8E8)[lbl_8326B850] + 0x10) * lbl_83274AFC * lbl_8218E8E8;
  cVar4 = *param_1;
  do {
    if (cVar4 == '\0') {
      *param_2 = iVar6;
      *param_3 = iVar5;
      return;
    }
    cVar4 = *param_1;
    iVar2 = 0;
    lVar3 = (longlong)cVar4;
    if (lVar3 != 0) {
      iVar1 = -(int)param_1;
      do {
        if (((int)lVar3 == 10) || (0x3e < iVar2)) break;
        param_1[(int)(acStack_100 + iVar1)] = cVar4;
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
        cVar4 = *param_1;
        lVar3 = (longlong)cVar4;
      } while (lVar3 != 0);
    }
    acStack_100[iVar2] = '\0';
    fn_82A2A288(0,0,acStack_100,0xffffffffffffffff,auStack_c0,0x40);
    lStack_120 = (longlong)iVar6;
    lStack_110 = (longlong)iVar5;
    uStack_128 = CONCAT44((float)lStack_110,(((U64)(uStack_128) >> 32) & 0xFFFFFFFF));
    dVar7 = (double)lStack_120;
    afStack_130[0] = (float)lStack_120;
    fn_82588528(auStack_c0,afStack_130,&uStack_128);
    lVar3 = (longlong)*param_1;
    if (lVar3 != 0) {
      uStack_128 = (longlong)((double)afStack_130[0] - dVar7);
      iVar6 = (((U64)(uStack_128) >> 32) & 0xFFFFFFFF) + iVar6;
      lStack_118 = (longlong)iVar6;
      if (fRam8326b4f4 < (float)lStack_118) {
        do {
          if ((int)lVar3 == 10) break;
          param_1 = param_1 + 1;
          lVar3 = (longlong)*param_1;
        } while (lVar3 != 0);
      }
    }
    if (*param_1 == '\n') {
      param_1 = param_1 + 1;
      iVar2 = fn_82624218();
      iVar6 = *param_2;
      iVar5 = iVar2 + iVar5;
    }
    cVar4 = *param_1;
  } while( true );
}

