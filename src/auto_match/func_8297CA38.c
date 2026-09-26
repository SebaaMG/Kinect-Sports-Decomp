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
extern int fn_8265C940();
extern int fn_8296CF68();
extern int fn_82F691F0();


undefined8 fn_8297CA38(int param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  fn_8296CF68();
  uVar4 = 0;
  uVar3 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar1 + 4)) &&
         (uVar6 = (ulonglong)*(uint *)(iVar1 + 0xc), (uVar4 & 0xffffffff) <= uVar6)) {
        uVar4 = uVar6 + 1;
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  lVar7 = (((ulonglong)*(uint *)(param_1 + 0xc) & 0x1fffffff) * 8 + uVar4 & 0x3fffffff) << 2;
  lVar2 = fn_8265C940(lVar7,0x24810000);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar2,0,lVar7);
  }
  return 0xffffffff8007000e;
}

