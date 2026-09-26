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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE56B0();
extern int fn_82BEB628();


void fn_82BEC2C8(int param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_82BE5340(param_2);
    iVar4 = param_1 + 0x50;
    fn_82BE5340(iVar4);
    while (*(int *)(param_1 + 0x58) != 0) {
      lVar1 = fn_82BE56B0(0xc);
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        uVar2 = fn_82BE5378(iVar4);
        iVar3 = fn_82BEB628(lVar1,uVar2);
      }
      if (iVar3 == 0) {
        fn_82BE5240(param_1,0x65,0xffffffff820eaff4);
        *(undefined4 *)(param_1 + 0x10) = 0;
        return;
      }
      fn_82BE52B8(param_2);
      fn_82BE5350(iVar4);
    }
  }
  return;
}

