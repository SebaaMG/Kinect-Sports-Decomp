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
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005778;
extern unsigned int lbl_8209A960;
extern unsigned int lbl_83187460;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E26FD0(uint param_1,uint param_2,longlong *param_3)

{
  double *pdVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    lVar4 = 0;
  }
  else {
    iVar2 = 0;
    pdVar1 = (double *)&lbl_83187460;
    uVar3 = 0;
    dVar5 = (double)param_1 / (double)param_2;
    while ((dVar5 < *pdVar1 - lbl_82005778 || (*pdVar1 + lbl_82005778 < dVar5))) {
      uVar3 = uVar3 + 0x18;
      iVar2 = iVar2 + 1;
      pdVar1 = pdVar1 + 3;
      if ((uVar3 & 0xffffffff) == 0xc0) {
        *param_3 = (longlong)(lbl_8209A960 / dVar5 + lbl_82005730);
        return;
      }
    }
    lVar4 = *(longlong *)(iVar2 * 0x18 + -0x7ce78bb0);
  }
  *param_3 = lVar4;
  return;
}

