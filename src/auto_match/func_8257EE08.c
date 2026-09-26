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
extern int fn_8251E530();
extern int fn_8251F720();
extern int fn_8255B1E0();
extern int fn_825909E0();
extern int fn_825A2410();
extern int fn_825B9EF8();
extern unsigned int lbl_821CC160;


undefined8 fn_8257EE08(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if ((((param_1[7] != param_1[6]) && (uVar1 = *param_1, *(int *)(uVar1 + 0x7dc) == 0)) &&
      ((iVar4 = *(int *)(*(int *)(uVar1 + 0x88c) * 0xc + uVar1 + 0x85c), iVar4 == 0 ||
       (lVar5 = (ulonglong)*(uint *)(iVar4 + 4) - (ulonglong)*(uint *)(iVar4 + 8),
       lVar5 == lVar5 + -1 + (ulonglong)(lVar5 == 0))))) &&
     ((*(int *)(*(int *)(uVar1 + 0x844) + 0x358) == 0 && (*(int *)(uVar1 + 0x5c) == 0)))) {
    piVar2 = (int *)param_1[6];
    uVar6 = 1;
    if (*piVar2 == 0) {
      iVar4 = fn_8255B1E0((double)lbl_821CC160,*(undefined4 *)(uVar1 + 0x844),piVar2 + 2,1,0,1
                                ,0,0);
      if (iVar4 != 0) {
        param_1[0xf] = 1;
        fn_825B9EF8((ulonglong)*param_1 + 0x54,0xffff,0);
        uVar6 = 0;
      }
    }
    else if ((*piVar2 == 1) && (lVar5 = fn_8251F720(piVar2 + 2,0), lVar5 != 0)) {
      uVar1 = *param_1;
      *(int *)(uVar1 + 0x88c) = *(int *)(uVar1 + 0x88c) + 1;
      fn_825909E0(uVar1 + 0x85c,1);
      puVar3 = (undefined4 *)fn_825A2410(*(int *)(uVar1 + 0x88c) * 0xc + uVar1 + 0x85c);
      *puVar3 = (int)lVar5;
      puVar3[1] = (int)lVar5;
                    /* WARNING: Subroutine does not return */
      fn_8251E4D0(param_1 + 1);
    }
    fn_8251E530(param_1 + 6,piVar2);
    return uVar6;
  }
  return 0;
}

