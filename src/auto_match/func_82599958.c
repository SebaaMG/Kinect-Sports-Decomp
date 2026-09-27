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
extern int fn_825FBB80();
extern int fn_82602708();
extern int fn_82602D20();
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_82599958(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  lVar4 = 6;
  dVar9 = (double)lbl_821CC160;
  piVar5 = param_1;
  do {
    piVar1 = (int *)*piVar5;
    lVar7 = 0;
    iVar2 = param_1[7];
    if (0 < *piVar1) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar6 + piVar1[1]);
        if ((iVar3 != 0) && (fn_82602D20(iVar2,iVar3), *(int *)(iVar3 + 0x254) == 7)) {
          dVar8 = dVar9;
          if ((double)*(float *)(iVar2 + 0x838) <= dVar9) {
            dVar8 = (double)(*(float *)(iVar2 + 0x820) * lbl_8327F894);
          }
          iVar3 = fn_82602708(dVar8,iVar2,iVar3);
          if (iVar3 == 0) {
            fn_825FBB80(piVar1,lVar7);
          }
        }
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 4;
      } while ((int)lVar7 < *piVar1);
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 1;
  } while (lVar4 != 0);
  return;
}

