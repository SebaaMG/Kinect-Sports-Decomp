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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_3c;
extern int fn_82248B90();
extern int fn_82F63108();
extern unsigned int lbl_821BE8CC;
extern unsigned int uStack_2c;
extern unsigned int uStack_31;


void fn_824870A8(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piStack_40;
  float fStack_3c;
  undefined1 uStack_31;
  undefined **ppuStack_30;
  undefined8 uStack_2c;
  undefined ***pppuStack_20;
  
  fStack_3c = (float)param_1;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821BE8CC;
  piVar1 = *(int **)(param_2 + 8);
  uStack_2c = CONCAT44(*(undefined4 *)(param_2 + 0x14),fStack_3c);
  piStack_40 = (int *)*piVar1;
  if (piStack_40 != piVar1) {
    do {
      if (pppuStack_20 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      iVar2 = (*(code *)(*pppuStack_20)[1])(pppuStack_20,piStack_40 + 4);
    } while ((iVar2 != 0) && (fn_82248B90(&piStack_40), piStack_40 != piVar1));
    if (pppuStack_20 == (undefined ***)0x0) {
      return;
    }
  }
  iVar2 = (int)&ppuStack_30 + -(int)pppuStack_20;
  (*(code *)(*pppuStack_20)[3])
            (pppuStack_20,iVar2 - (int)(&uStack_31 + (uint)(iVar2 == 0) + -(int)pppuStack_20));
  return;
}

