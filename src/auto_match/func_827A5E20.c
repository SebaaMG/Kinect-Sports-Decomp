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
extern int fn_8278FFF0();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82011710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a;


void fn_827A5E20(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  float fStack_20;
  undefined2 uStack_1a;
  
  iVar4 = 0;
  if ((*(int *)*param_3 == 2) && (iVar4 = 1, (uint)param_3[1] < 2)) {
    return;
  }
  piVar5 = (int *)*param_3 + iVar4 * 3;
  if (*piVar5 == 3) {
    dVar7 = (double)lbl_821AAD20;
    fStack_20 = lbl_821AAD20;
    fn_8278FFF0(&fStack_20,piVar5[1],piVar5[2]);
    dVar2 = lbl_82011710;
    dVar6 = (double)fStack_20;
    if ((dVar6 != dVar7) && (uVar3 = 0, param_2[1] != 0)) {
      iVar4 = 0;
      dVar7 = (double)lbl_8200571C;
      do {
        iVar1 = *(int *)(*param_2 + iVar4);
        if (dVar2 <= dVar6) {
          uStack_1a = 0xffff;
        }
        else {
          uStack_1a = (undefined2)(longlong)(dVar6 * dVar7);
        }
        uVar3 = uVar3 + 1;
        *(undefined2 *)(iVar1 + 0x26) = uStack_1a;
        iVar4 = iVar4 + 4;
        *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 8;
      } while (uVar3 < (uint)param_2[1]);
    }
  }
  return;
}

