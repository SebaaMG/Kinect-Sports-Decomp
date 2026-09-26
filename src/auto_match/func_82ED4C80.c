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
extern int fn_82F65FB0();
extern unsigned int lbl_82005708;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8215F990;


double fn_82ED4C80(double param_1,undefined8 param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  
  iVar10 = 0;
  if (0 < (int)param_5) {
    lVar9 = (((ulonglong)param_5 - 1 & 0xffffffff) >> 2) + 1;
    iVar10 = 0;
    do {
      bVar1 = *param_4;
      bVar2 = *param_3;
      pbVar3 = param_3 + 1;
      pbVar4 = param_4 + 1;
      pbVar5 = param_3 + 2;
      pbVar6 = param_4 + 2;
      pbVar7 = param_3 + 3;
      pbVar8 = param_4 + 3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 4;
      iVar10 = ((uint)*pbVar8 - (uint)*pbVar7) * ((uint)*pbVar8 - (uint)*pbVar7) +
               ((uint)*pbVar6 - (uint)*pbVar5) * ((uint)*pbVar6 - (uint)*pbVar5) +
               ((uint)*pbVar4 - (uint)*pbVar3) * ((uint)*pbVar4 - (uint)*pbVar3) +
               ((uint)bVar1 - (uint)bVar2) * ((uint)bVar1 - (uint)bVar2) + iVar10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  dVar11 = lbl_82005708;
  if (lbl_8215F990 < (double)(longlong)iVar10 / (double)(longlong)(int)param_5) {
    dVar11 = (double)fn_82F65FB0((param_1 * param_1) /
                                       ((double)(longlong)iVar10 / (double)(longlong)(int)param_5));
    dVar11 = dVar11 * lbl_82015618;
  }
  return dVar11;
}

