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
extern unsigned int fStack_20;
extern int fn_83016920();
extern int fn_8302A5B8();
extern int fn_8302A8F0();
extern unsigned int lbl_8326437C;
extern unsigned int lbl_83264380;


void fn_83015B10(double param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  float fStack_20;
  
  iVar1 = *param_2;
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar2 = param_2[1], uVar2 != 0)) {
    if (uVar2 == 1) {
      dVar6 = (double)*(float *)(iVar1 + 4);
      goto LAB_83015bac;
    }
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        if (param_1 <= (double)*(float *)(iVar4 + iVar1)) {
LAB_83015bcc:
          dVar6 = (double)*(float *)(uVar5 * 0xc + iVar1 + 4);
          goto LAB_83015bac;
        }
        if ((uVar5 < uVar2 - 1) && (param_1 < (double)*(float *)(iVar4 + iVar1 + 0xc))) {
          pfVar3 = (float *)(uVar5 * 0xc + iVar1);
          if (pfVar3[2] == 5.60519e-45) {
            dVar6 = (double)(((float)(param_1 - (double)*pfVar3) /
                             (float)((double)pfVar3[3] - (double)*pfVar3)) * (pfVar3[4] - pfVar3[1])
                            + pfVar3[1]);
          }
          else if (pfVar3[2] == 1.26117e-44) {
            dVar6 = (double)pfVar3[1];
          }
          else {
            dVar6 = (double)fn_83016920((double)((float)(param_1 - (double)*pfVar3) /
                                                      (float)((double)pfVar3[3] - (double)*pfVar3)),
                                              (double)pfVar3[1],(double)pfVar3[4],0xffffffff83264368
                                             );
          }
          goto LAB_83015bac;
        }
        if (uVar5 == uVar2 - 1) goto LAB_83015bcc;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (uVar5 < uVar2);
    }
  }
  dVar6 = (double)fStack_20;
LAB_83015bac:
  if (param_2[2] == 1) {
    fn_8302A5B8(dVar6,lbl_8326437C);
  }
  else if (param_2[2] == 2) {
    fn_8302A8F0(lbl_83264380);
  }
  return;
}

