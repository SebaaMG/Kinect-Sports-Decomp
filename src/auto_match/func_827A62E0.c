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
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a;


void fn_827A62E0(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  double dVar5;
  float fStack_20;
  undefined2 uStack_1a;
  
  iVar2 = 0;
  if ((*(int *)*param_3 == 2) && (iVar2 = 1, (uint)param_3[1] < 2)) {
    return;
  }
  piVar4 = (int *)*param_3 + iVar2 * 3;
  if (*piVar4 == 3) {
    dVar5 = (double)lbl_821AAD20;
    fStack_20 = lbl_821AAD20;
    fn_8278FFF0(&fStack_20,piVar4[1],piVar4[2]);
    if (((double)fStack_20 != dVar5) && (uVar3 = 0, param_2[1] != 0)) {
      iVar2 = 0;
      uStack_1a = (undefined2)(int)((double)fStack_20 * (double)lbl_8200571C);
      do {
        uVar3 = uVar3 + 1;
        iVar1 = *(int *)(*param_2 + iVar2);
        iVar2 = iVar2 + 4;
        *(undefined2 *)(iVar1 + 0x24) = uStack_1a;
        *(ushort *)(iVar1 + 0x2a) = *(ushort *)(iVar1 + 0x2a) | 2;
      } while (uVar3 < (uint)param_2[1]);
    }
  }
  return;
}

