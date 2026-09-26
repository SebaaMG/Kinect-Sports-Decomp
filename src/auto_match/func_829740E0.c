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
extern int fn_82F691F0();


undefined8 fn_829740E0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + iVar4);
      uVar1 = *(uint *)(iVar2 + 4);
      if ((uVar1 & 0x100) != 0) {
        if ((uVar1 & 0x400) == 0) {
          if ((uVar1 & 0x800) == 0) goto LAB_8297413c;
        }
        lVar5 = (ulonglong)*(uint *)(iVar2 + 8) + lVar5;
      }
LAB_8297413c:
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  lVar6 = (((ulonglong)*(uint *)(param_1 + 0xc) & 0x7fffffff) * 2 + lVar5 & 0xfffffff) << 4;
  lVar5 = fn_8265C940(lVar6,0x24810000);
  if (lVar5 == 0) {
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar5,0xff,lVar6);
}

