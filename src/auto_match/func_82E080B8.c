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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82CED6A8();
extern int fn_82E07630();
extern int fn_82E081D0();


/* WARNING: Removing unreachable block (ram,0x82e080f0) */

int fn_82E080B8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  int *piVar7;
  
  fn_82CED6A8();
  puVar5 = (uint *)(param_1 + 4);
  fn_82CE5410();
  uVar6 = (ulonglong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    piVar7 = (int *)(*puVar5 + 4);
    do {
      if (*piVar7 != 0) {
        fn_82CE4118();
      }
      *piVar7 = 0;
      fn_82CED5B8(piVar7 + -1);
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  lVar4 = -(ulonglong)*(uint *)(param_1 + 8);
  uVar6 = ((ulonglong)*(uint *)(param_1 + 8) & 0x1fffffff) * 8 + (ulonglong)*puVar5;
  if (0 < lVar4) {
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        fn_82E07630(uVar6);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    iVar3 = fn_82CE5410();
    fn_82E081D0(puVar5,*(undefined4 *)(iVar3 + 0x10),0,0,uVar2,iVar1);
  }
  return param_1;
}

