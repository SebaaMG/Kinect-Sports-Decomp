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
extern int fn_82230300();
extern int fn_82267130();
extern int fn_82268238();
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern int fn_82A1E658();


void fn_82268330(int param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x6e0) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x6e0) = 0;
  }
  if (*(int *)(param_1 + 0x6e4) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x6e4) = 0;
  }
  piVar4 = (int *)(param_1 + 0x61c);
  lVar3 = 3;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      if (piVar1[8] != 0) {
        if (*piVar1 == 0x3e5) {
          fn_82A1C0F0(piVar1);
        }
        fn_82522ED8(piVar1[8]);
      }
      fn_82A1E658(piVar1[3]);
      if (piVar1[9] != 0) {
        fn_8265CA20();
      }
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      fn_8265CA20(piVar1);
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0x5c0) != 0) {
    fn_82267130();
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x6e8);
  if (uVar5 != 0) {
    uVar2 = *(uint *)(param_1 + 0x6ec);
    for (; (uVar5 & 0xffffffff) != (ulonglong)uVar2; uVar5 = uVar5 + 0x38) {
      fn_82230300(uVar5 + 8,1,0);
    }
    fn_8265CA20(*(undefined4 *)(param_1 + 0x6e8));
  }
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  lVar3 = 2;
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  iVar6 = param_1 + 0x6e8;
  do {
    iVar6 = iVar6 + -0x38;
    fn_82230300(iVar6,1,0);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  fn_82268238(param_1 + 0x5dc);
  return;
}

