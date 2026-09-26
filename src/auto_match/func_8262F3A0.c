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
extern int fn_8251E4D0();
extern int fn_825C2DC0();
extern int fn_82F65FE0();
extern unsigned int lbl_821CC160;


double fn_8262F3A0(double param_1,int param_2,undefined8 param_3,undefined8 param_4,float *param_5
                    )

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (double)lbl_821CC160;
  if (param_5 != (float *)0x0) {
    *param_5 = lbl_821CC160;
  }
  lVar6 = (ulonglong)*(uint *)(param_2 + 0x4c) + 0xbbc;
  if (*(uint *)(param_2 + 0x380) < *(uint *)(param_2 + 900)) {
    fn_82F65FE0(*(uint *)(param_2 + 0x380),*(undefined2 *)(param_2 + 0x390),
                      *(undefined2 *)(param_2 + 0x38c),0xffffffff825731d8);
  }
  *(undefined2 *)(param_2 + 0x3a4) = 0;
  *(undefined4 *)(param_2 + 0x398) = *(undefined4 *)(param_2 + 0x394);
  if (*(uint *)(param_2 + 0x380) < *(uint *)(param_2 + 900)) {
                    /* WARNING: Subroutine does not return */
    fn_8251E4D0(param_2 + 0x394);
  }
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x394);
  uVar2 = *(uint *)(param_2 + 0x398);
  uVar8 = 0;
  uVar7 = 0;
  dVar10 = dVar11;
  dVar12 = dVar11;
  if (uVar5 < uVar2) {
    do {
      uVar4 = uVar7;
      if ((*(uint *)uVar5 & 4) == 0) {
        uVar3 = (longlong)
                (((int)(uint *)uVar5 - *(int *)(param_2 + 0x394)) /
                (int)(uint)*(ushort *)(param_2 + 0x3a0)) *
                (longlong)(int)(uint)*(ushort *)(param_2 + 0x38c) +
                (ulonglong)*(uint *)(param_2 + 0x380);
        uVar4 = (ulonglong)*(uint *)((int)uVar3 + 0x94);
        dVar9 = (double)fn_825C2DC0(lVar6,uVar3,param_3);
        if ((param_5 != (float *)0x0) && (fVar1 = *(float *)((int)uVar3 + 0xa4), *param_5 < fVar1))
        {
          *param_5 = fVar1;
        }
        if ((uVar4 & 0xffffffff) == (uVar7 & 0xffffffff)) {
          if (dVar9 <= dVar10) goto LAB_8262f51c;
        }
        else if ((uVar8 & 0xffffffff) != 0) {
          if (param_1 < dVar10) {
            dVar12 = (double)(float)(dVar10 + dVar12);
          }
          if (dVar11 < dVar10) {
            dVar11 = dVar12;
          }
        }
        uVar8 = uVar3;
        dVar10 = dVar9;
      }
LAB_8262f51c:
      uVar5 = uVar5 + 0xc;
      uVar7 = uVar4;
    } while ((uVar5 & 0xffffffff) < (ulonglong)uVar2);
    if (((uVar8 & 0xffffffff) != 0) &&
       (dVar11 = (double)fn_825C2DC0(lVar6,uVar8,param_3), param_1 < dVar11)) {
      dVar12 = (double)(float)(dVar11 + dVar12);
    }
  }
  return dVar12;
}

