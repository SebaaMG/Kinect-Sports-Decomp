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
extern int fn_82681838();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_826957D0();
extern int fn_826972E0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


void fn_827104C0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  undefined8 uStack_50;
  uint uStack_40;
  undefined4 uStack_3c;
  
  fn_8268AFB0(&uStack_40,lbl_831E7E64);
  lVar5 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,lVar5);
      dVar6 = (double)fn_826972E0(uVar2,uVar1);
      uStack_50 = (longlong)dVar6;
      fn_8268B120(&uStack_40,(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(param_1 + 0x1c));
  }
  uVar4 = (ulonglong)uStack_40;
  if (uVar4 == 0) {
    uVar4 = 0xffffffff82196582;
  }
  iVar3 = fn_82694610((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar4,
                            uStack_3c);
  uStack_50 = CONCAT44(iVar3,(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  fn_82681838(*(undefined4 *)(param_1 + 4),&uStack_50);
  lVar5 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
  *(int *)(iVar3 + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(iVar3);
  }
  fn_8268AFD8(&uStack_40);
  return;
}

