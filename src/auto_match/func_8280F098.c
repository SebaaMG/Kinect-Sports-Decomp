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
extern int fn_82809558();
extern int fn_82809D40();
extern unsigned int lbl_8201E044;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83156DF0;
extern unsigned int lbl_83156DF1;
extern unsigned int lbl_83156DF2;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8280F098(int param_1,uint param_2,float *param_3,float *param_4,float *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  
  iVar7 = param_2 * 4;
  bVar1 = (&lbl_83156DF0)[iVar7];
  bVar2 = (&lbl_83156DF1)[iVar7];
  bVar3 = (&lbl_83156DF2)[iVar7];
  if ((param_2 & 8) == 0) {
    iVar7 = (uint)bVar1 * 4;
    fVar4 = *(float *)((uint)bVar1 * 0x14 + param_1);
    iVar6 = (iVar7 + (uint)bVar2) * 4;
    fVar5 = *(float *)(iVar6 + param_1);
    dVar9 = (double)fn_82809558((double)(fVar4 * fVar4 + fVar5 * fVar5));
    if (dVar9 <= (double)lbl_8201E044) {
      dVar8 = (double)fn_82809D40(-(double)*(float *)(((uint)bVar3 * 4 + (uint)bVar2) * 4 + param_1
                                                      ),
                                   (double)*(float *)((uint)bVar2 * 0x14 + param_1));
      *param_3 = (float)dVar8;
      dVar8 = -(double)*(float *)((iVar7 + (uint)bVar3) * 4 + param_1);
      goto LAB_8280f25c;
    }
    dVar8 = (double)fn_82809D40((double)*(float *)(((uint)bVar2 * 4 + (uint)bVar3) * 4 + param_1),
                                 (double)*(float *)((uint)bVar3 * 0x14 + param_1));
    *param_3 = (float)dVar8;
    dVar9 = (double)fn_82809D40(-(double)*(float *)((iVar7 + (uint)bVar3) * 4 + param_1),dVar9);
    *param_4 = (float)dVar9;
    fVar4 = *(float *)(iVar6 + param_1);
    dVar9 = (double)*(float *)((uint)bVar1 * 0x14 + param_1);
  }
  else {
    iVar7 = ((uint)bVar3 * 4 + (uint)bVar1) * 4;
    iVar6 = ((uint)bVar2 * 4 + (uint)bVar1) * 4;
    fVar4 = *(float *)(iVar7 + param_1);
    fVar5 = *(float *)(iVar6 + param_1);
    dVar8 = (double)fn_82809558((double)(fVar5 * fVar5 + fVar4 * fVar4));
    if (dVar8 <= (double)lbl_8201E044) {
      dVar9 = (double)fn_82809D40(-(double)*(float *)(((uint)bVar3 * 4 + (uint)bVar2) * 4 + param_1
                                                      ),
                                   (double)*(float *)((uint)bVar2 * 0x14 + param_1));
      *param_3 = (float)dVar9;
      dVar9 = (double)*(float *)((uint)bVar1 * 0x14 + param_1);
LAB_8280f25c:
      dVar9 = (double)fn_82809D40(dVar8,dVar9);
      *param_4 = (float)dVar9;
      *param_5 = lbl_821AAD20;
      goto LAB_8280f270;
    }
    dVar9 = (double)fn_82809D40((double)*(float *)(iVar6 + param_1),
                                 (double)*(float *)(iVar7 + param_1));
    *param_3 = (float)dVar9;
    dVar9 = (double)fn_82809D40(dVar8,(double)*(float *)((uint)bVar1 * 0x14 + param_1));
    iVar7 = (uint)bVar1 * 4;
    *param_4 = (float)dVar9;
    fVar4 = *(float *)((iVar7 + (uint)bVar2) * 4 + param_1);
    dVar9 = -(double)*(float *)((iVar7 + (uint)bVar3) * 4 + param_1);
  }
  dVar9 = (double)fn_82809D40((double)fVar4,dVar9);
  *param_5 = (float)dVar9;
LAB_8280f270:
  if ((param_2 & 4) != 0) {
    *param_3 = -*param_3;
    *param_4 = -*param_4;
    *param_5 = -*param_5;
  }
  if ((param_2 & 0x10) != 0) {
    fVar4 = *param_3;
    *param_3 = *param_5;
    *param_5 = fVar4;
  }
  return;
}

