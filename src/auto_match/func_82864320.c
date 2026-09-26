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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82810380();
extern int fn_82862120();
extern int fn_82862238();
extern int fn_828622E8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832116B4;
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82864320(int param_1,int param_2,ulonglong param_3,longlong param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  if ((param_3 & 0xffff) != 0) {
    *(short *)(param_2 + 8) = (short)param_3;
    fn_828622E8((double)lbl_832116BC,*(undefined4 *)(param_2 + 4),param_3,lbl_832116B8,param_4,0
                    ,param_4 * 0x34 + (ulonglong)*(uint *)(param_1 + 4));
    fn_828622E8((double)lbl_832116BC,*(undefined4 *)(param_2 + 4),*(undefined2 *)(param_2 + 8),
                    lbl_832116B8);
    iVar6 = 2;
    if (2 < *(ushort *)(param_2 + 8)) {
      dVar7 = (double)lbl_821AAD20;
      do {
        iVar3 = 0;
        if (0 < (int)param_4) {
          lVar4 = 0;
          do {
            lVar5 = lVar4 + (ulonglong)*(uint *)(param_1 + 4);
            pcVar1 = (char *)fn_82862120(lVar5,lbl_832116B4);
            if (*pcVar1 != '\0') {
              fn_82862238((double)lbl_832116BC,*(undefined4 *)(param_2 + 4),
                                *(undefined2 *)(param_2 + 8),lbl_832116B8);
              fn_82862238((double)lbl_832116BC,*(undefined4 *)(param_2 + 4),
                                *(undefined2 *)(param_2 + 8),lbl_832116B8);
              iVar2 = fn_82810380(dVar7,lVar5 + 0xc,auStack_80);
              if (((iVar2 == 0) && (iVar2 = fn_82810380(dVar7,lVar5,auStack_70), iVar2 != 0))
                 || ((iVar2 = fn_82810380(dVar7,lVar5,auStack_80), iVar2 == 0 &&
                     (iVar2 = fn_82810380(dVar7,lVar5 + 0xc,auStack_70), iVar2 != 0)))) {
                fn_828622E8((double)lbl_832116BC,*(undefined4 *)(param_2 + 4),
                                *(undefined2 *)(param_2 + 8),lbl_832116B8);
                iVar6 = iVar6 + 1;
                break;
              }
            }
            iVar3 = iVar3 + 1;
            lVar4 = lVar4 + 0x34;
          } while (iVar3 < (int)param_4);
        }
      } while (iVar6 < (int)(uint)*(ushort *)(param_2 + 8));
    }
  }
  return;
}

