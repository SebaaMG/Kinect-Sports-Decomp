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
#define NAN(x) ((x) != (x))
extern int fn_82250A18();
extern int fn_82308E08();
extern int fn_82369900();
extern int fn_8236B3E8();
extern int fn_8236B578();
extern int fn_8236BB40();
extern int fn_823C2148();
extern int fn_823CC900();
extern int fn_823D1358();
extern int fn_82539560();
extern int fn_8287CB50();
extern int fn_8287FD98();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1A4C;
extern unsigned int lbl_831D1A50;
extern unsigned int lbl_832975B0;


void fn_823DDF88(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar6;
  int iVar5;
  uint uVar7;
  int *piVar9;
  undefined8 uVar8;
  double dVar10;
  double dVar11;
  int aiStack_60 [24];
  
  iVar2 = *(int *)(param_2 + 8);
  dVar11 = (double)lbl_821CC160;
  if (*(int *)(iVar2 + 0xf9c) != 0) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0xfa8) + param_1);
    *(float *)(iVar2 + 0xfa8) = fVar1;
    *(undefined4 *)(iVar2 + 0xfac) = *(undefined4 *)(iVar2 + 0xfb0);
    dVar10 = (double)fn_82539560((double)fVar1,dVar11,(double)*(float *)(iVar2 + 0xf90),dVar11,
                                  (double)lbl_821CA460);
    *(float *)(iVar2 + 0xfb0) = (float)dVar10;
  }
  cVar6 = fn_82308E08(iVar2 + 0xa88);
  if ((cVar6 == '\0') && (cVar6 = fn_82308E08(iVar2 + 0xb48), cVar6 == '\0')) {
    iVar5 = iVar2 + 0xcf8;
    cVar6 = fn_82308E08(iVar5);
    if (cVar6 == '\0') {
      if (*(int *)(*(int *)(iVar2 + 0x4b0) + 0xd4) == 0) {
        uVar7 = *(uint *)(param_2 + 0xc);
        if (uVar7 == 0) {
          cVar6 = fn_82308E08(iVar5);
          if (cVar6 == '\0') {
            if ((*(int *)(iVar2 + 0x9a0) == 0) && (*(int *)(iVar2 + 0x41c) != 10)) {
              iVar5 = lbl_832975B0;
              if (lbl_832975B0 == 0) {
                iVar5 = fn_82250A18();
              }
              if ((*(char *)(iVar5 + 4) == '\0') ||
                 (*(int *)(*(int *)(param_2 + 8) + 0xcc) == *(int *)(*(int *)(param_2 + 8) + 0xf00))
                 ) {
                fn_823CC900(iVar2,*(char *)(iVar2 + 0xd51) != '\0');
              }
            }
            else if (*(int *)(iVar2 + 0xf9c) == 0) {
              iVar5 = fn_8236BB40(iVar2);
              if (iVar5 != 0) {
                fn_823D1358(iVar2);
              }
            }
            else if (((lbl_831D1A4C <= *(float *)(iVar2 + 0xfb0)) &&
                     (*(float *)(iVar2 + 0xfac) < lbl_831D1A4C)) && (*(int *)(iVar2 + 0xfa4) == 0))
            {
              fn_82369900(iVar2,*(undefined4 *)(iVar2 + 0xe10));
              fn_823C2148(iVar2,0,0);
              *(float *)(iVar2 + 0xfa8) = (float)dVar11;
              *(float *)(iVar2 + 0xfb0) = (float)dVar11;
              *(float *)(iVar2 + 0xfac) = (float)dVar11;
              fn_8236B3E8(iVar2);
              fn_8287FD98();
              dVar11 = (double)fn_8287CB50();
              dVar10 = (double)lbl_831D1A50;
              *(undefined4 *)(param_2 + 0xc) = 1;
              *(float *)(param_2 + 0x10) = (float)(dVar11 * (double)lbl_82193CC0 + dVar10);
            }
          }
        }
        else if (uVar7 == 1) {
          dVar10 = (double)(float)((double)*(float *)(param_2 + 0x10) - param_1);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar10 < dVar11) << 2) |
                        (uint)(NAN(dVar10) || NAN(dVar11)) << 2)) < 0.0) {
            dVar10 = dVar11;
          }
          *(float *)(param_2 + 0x10) = (float)dVar10;
          aiStack_60[0] = 8;
          aiStack_60[1] = 9;
          aiStack_60[3] = 7;
          bVar3 = false;
          aiStack_60[2] = 6;
          bVar4 = false;
          uVar7 = 0;
          piVar9 = aiStack_60;
          do {
            if (*(int *)(iVar2 + 0x41c) == *piVar9) {
              bVar3 = true;
              bVar4 = true;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 < 4);
          if (*(int *)(iVar2 + 0x41c) == 10) {
            bVar3 = true;
          }
          cVar6 = fn_82308E08(iVar5);
          if ((cVar6 == '\0') &&
             ((((!bVar3 || (dVar10 == dVar11)) ||
               ((*(char *)(iVar2 + 0xd51) == '\0' && (*(char *)(iVar2 + 0xd52) == '\0')))) ||
              (*(int *)(iVar2 + 4000) != 0)))) {
            if ((!bVar3) || (uVar8 = 1, *(char *)(iVar2 + 0xd51) == '\0')) {
              uVar8 = 0;
            }
            iVar5 = lbl_832975B0;
            if (lbl_832975B0 == 0) {
              iVar5 = fn_82250A18();
            }
            if (((*(char *)(iVar5 + 4) == '\0') ||
                ((bVar3 = *(int *)(*(int *)(param_2 + 8) + 0xf00) ==
                          *(int *)(*(int *)(param_2 + 8) + 0xcc), !bVar4 && (bVar3)))) ||
               ((bVar4 && (!bVar3)))) {
              fn_823CC900(iVar2,uVar8);
              *(undefined4 *)(param_2 + 0xc) = 2;
            }
          }
        }
        else if (uVar7 < 3) {
          fn_82308E08(iVar5);
        }
      }
      else {
        fn_8236B578(iVar2);
      }
    }
  }
  return;
}

