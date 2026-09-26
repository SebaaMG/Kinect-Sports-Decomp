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
extern int fn_82A1E650();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E66280();


longlong fn_82EE86E0(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *apiStack_40 [16];
  
  iVar4 = 0;
  apiStack_40[0] = (int *)0x0;
  lVar2 = fn_82E66280(param_1,param_1 + 8,0,apiStack_40);
  if (-1 < lVar2) {
    iVar3 = param_1 + 0x5c;
    fn_82E50CB8(iVar3);
    iVar1 = *(int *)(param_1 + 0x98);
    if (0 < iVar1) {
      do {
        lVar2 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x14))
                          (*(int **)(param_1 + 0xa0),apiStack_40[0]);
        if (lVar2 < 0) {
          fn_82E50F10(iVar3);
          goto LAB_82ee876c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    fn_82E50F10(iVar3);
    fn_82A1E650(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x40),0x28);
  }
LAB_82ee876c:
  if (apiStack_40[0] != (int *)0x0) {
    (**(code **)(*apiStack_40[0] + 8))();
  }
  return lVar2;
}

