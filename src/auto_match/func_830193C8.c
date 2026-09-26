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
extern int fn_83016920();
extern int fn_8302A5B8();
extern int fn_8302A8F0();
extern unsigned int lbl_8326437C;
extern unsigned int lbl_83264380;
extern unsigned int uStack_20;


ulonglong fn_830193C8(double param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  ulonglong uStack_20;
  
  iVar1 = *param_2;
  uVar6 = 0;
  if ((iVar1 != 0) && (uVar2 = param_2[1], uVar2 != 0)) {
    if (uVar2 == 1) {
      uVar4 = (ulonglong)*(uint *)(iVar1 + 4);
      goto LAB_83019464;
    }
    if (uVar2 != 0) {
      iVar5 = 0;
      do {
        if (param_1 <= (double)*(float *)(iVar5 + iVar1)) {
LAB_830194a4:
          uVar4 = (ulonglong)*(uint *)(uVar6 * 0xc + iVar1 + 4);
          goto LAB_83019464;
        }
        if ((uVar6 < uVar2 - 1) && (param_1 < (double)*(float *)(iVar5 + iVar1 + 0xc))) {
          pfVar3 = (float *)(uVar6 * 0xc + iVar1);
          if (pfVar3[2] == 5.60519e-45) {
            uVar4 = (longlong)
                    ((double)((float)(param_1 - (double)*pfVar3) /
                             (float)((double)pfVar3[3] - (double)*pfVar3)) *
                     (double)(float)((double)(uint)pfVar3[4] - (double)(uint)pfVar3[1]) +
                    (double)(uint)pfVar3[1]) & 0xffffffff;
          }
          else if (pfVar3[2] == 1.26117e-44) {
            uVar4 = (ulonglong)(uint)pfVar3[1];
          }
          else {
            dVar7 = (double)fn_83016920((double)((float)(param_1 - (double)*pfVar3) /
                                                  (float)((double)pfVar3[3] - (double)*pfVar3)),
                                          (double)(uint)pfVar3[1],(double)(uint)pfVar3[4],
                                          0xffffffff83264368);
            uVar4 = (longlong)dVar7 & 0xffffffff;
          }
          goto LAB_83019464;
        }
        if (uVar6 == uVar2 - 1) goto LAB_830194a4;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar6 < uVar2);
    }
  }
  uVar4 = uStack_20 >> 0x20;
LAB_83019464:
  if (param_2[2] == 1) {
    dVar7 = (double)fn_8302A5B8((double)uVar4,lbl_8326437C);
    uVar4 = (longlong)dVar7 & 0xffffffff;
  }
  else if (param_2[2] == 2) {
    dVar7 = (double)fn_8302A8F0((double)uVar4,lbl_83264380);
    uVar4 = (longlong)dVar7 & 0xffffffff;
  }
  return uVar4;
}

