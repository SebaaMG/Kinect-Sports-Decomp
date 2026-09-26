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
extern int fn_82248B90();
extern int fn_82F63108();
extern unsigned int lbl_821BE8B4;
extern unsigned int uStack_2c;
extern unsigned int uStack_31;


void fn_82486F40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *apiStack_40 [3];
  undefined1 uStack_31;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined ***pppuStack_20;
  
  piVar1 = *(int **)(param_1 + 8);
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821BE8B4;
  apiStack_40[0] = (int *)*piVar1;
  uStack_2c = param_2;
  if (apiStack_40[0] != piVar1) {
    do {
      if (pppuStack_20 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      iVar2 = (*(code *)(*pppuStack_20)[1])(pppuStack_20,apiStack_40[0] + 4);
    } while ((iVar2 != 0) && (fn_82248B90(apiStack_40), apiStack_40[0] != piVar1));
    if (pppuStack_20 == (undefined ***)0x0) {
      return;
    }
  }
  iVar2 = (int)&ppuStack_30 + -(int)pppuStack_20;
  (*(code *)(*pppuStack_20)[3])
            (pppuStack_20,iVar2 - (int)(&uStack_31 + (uint)(iVar2 == 0) + -(int)pppuStack_20));
  return;
}

