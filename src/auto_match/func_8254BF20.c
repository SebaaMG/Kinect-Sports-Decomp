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
extern int fn_8254C278();
extern int fn_82F65350();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


undefined8 fn_8254BF20(int param_1,uint *param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  double dVar9;
  
  fVar4 = lbl_821CA460;
  fVar1 = (float)param_2[4];
  iVar7 = *(int *)(param_1 + 0xc);
  if (*param_5 <= *param_4 + fVar1) {
    if (param_2[5] == 0) {
      fVar2 = (float)param_2[3];
      if (*param_3 != iVar7) {
        do {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          *(float *)(*param_3 + 0x3c) =
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar4) * (fVar1 - fVar2);
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          *(float *)(*param_3 + 0x30) = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar4;
          iVar7 = *param_3;
          *param_3 = iVar7 + 0x60;
        } while (iVar7 + 0x60 != *(int *)(param_1 + 0xc));
      }
      param_2[5] = 1;
    }
    else {
      dVar9 = (double)(*param_5 - *param_4);
      if (*param_3 != iVar7) {
        do {
          iVar7 = *param_3;
          if ((*(int *)(iVar7 + 0x38) == 0) && ((double)*(float *)(iVar7 + 0x3c) < dVar9)) {
            if ((float)param_2[2] < *(float *)(iVar7 + 0x30)) {
              uVar3 = param_2[1];
              if (uVar3 == 9) goto LAB_8254c174;
            }
            else {
              uVar3 = *param_2;
            }
            fn_8254C278((double)*param_5,(double)(float)param_2[3],param_1,iVar7,uVar3);
            *(undefined4 *)(*param_3 + 0x38) = 1;
          }
LAB_8254c174:
          iVar7 = *param_3;
          *param_3 = iVar7 + 0x60;
        } while (iVar7 + 0x60 != *(int *)(param_1 + 0xc));
      }
    }
    uVar5 = 1;
  }
  else {
    if (*param_3 != iVar7) {
      dVar9 = (double)lbl_821CC160;
      do {
        if ((param_2[5] == 0) && (*(float *)(*param_3 + 0x30) <= (float)param_2[2])) {
          uVar3 = *param_2;
          iVar7 = (int)(((ulonglong)uVar3 + 0xb & 0xffffffff) << 2);
          iVar8 = *(int *)(*(int *)(*param_3 + 0x10) * 8 + *(int *)(param_1 + 0x18) + 4) * 0x54 +
                  *(int *)(param_1 + 0xb4);
          if (0 < *(int *)(iVar7 + iVar8)) {
            iVar6 = fn_82F65350();
            iVar7 = *(int *)(iVar7 + iVar8);
            iVar7 = (iVar6 - (iVar6 / iVar7) * iVar7) +
                    *(int *)((int)(((ulonglong)uVar3 + 3 & 0xffffffff) << 2) + iVar8);
            if (-1 < iVar7) {
              *(int *)(*param_3 + 0x18) = iVar7;
              *(uint *)(*param_3 + 0x58) = *param_2;
              *(float *)(*param_3 + 0x24) = (float)dVar9;
              *(undefined4 *)(*param_3 + 0x34) = 0;
            }
          }
        }
        *(undefined4 *)(*param_3 + 0x38) = 0;
        iVar7 = *param_3;
        *param_3 = iVar7 + 0x60;
      } while (iVar7 + 0x60 != *(int *)(param_1 + 0xc));
    }
    uVar5 = 0;
  }
  return uVar5;
}

