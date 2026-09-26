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
extern int fn_82ABE5F8();
extern int fn_82AE60E8();
extern int fn_82F691F0();


void fn_82B43B90(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0((ulonglong)
                 *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                          0x28) + 4,0,(ulonglong)(param_2 + 0x20U >> 5) << 2);
  }
  puVar3 = *(uint **)(uVar1 + 0x28);
  lVar4 = (((ulonglong)(param_2 + 0x20U >> 3) & 0x1ffffffc) + 2) * 2 +
          ((((ulonglong)(param_2 + 1U) & 0x7fffffff) * 2 + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc);
  if (puVar3 != (uint *)0x0) {
    uVar2 = (ulonglong)*puVar3 & 0x7ffff;
    if (param_2 + 1U <= uVar2) goto LAB_82b43c5c;
    fn_82ABE5F8(param_1,puVar3,
                 ((uVar2 + 0x1f >> 3 & 0x1ffffffc) + 2) * 2 +
                 (((ulonglong)*puVar3 & 0x7ffff) * 2 + 0x1f >> 3 & 0x1ffffffc),0);
  }
  puVar3 = (uint *)fn_82AE60E8(param_1,lVar4,0);
  *(uint **)(uVar1 + 0x28) = puVar3;
LAB_82b43c5c:
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar3,0,lVar4);
}

