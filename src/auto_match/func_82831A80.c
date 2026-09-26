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
extern int fn_828184A8();
extern int fn_82820EF8();
extern int fn_828252D0();
extern int fn_82827750();
extern int fn_82F672D8();
extern int fn_82F67CF8();


longlong fn_82831A80(int param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar3;
  char cVar4;
  longlong lVar2;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_1 + 0x80;
  fn_82F672D8(iVar9,0xffffffff8201f094,4);
  fn_82F672D8(param_1 + 0x84,0xffffffff8201f09c,0x10);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(int *)(param_1 + 0xa0) = (*(int **)(param_1 + 0x388))[1] - **(int **)(param_1 + 0x388) >> 5;
  uVar5 = (*(int **)(param_1 + 0x3bc))[1] - **(int **)(param_1 + 0x3bc) >> 2;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xa4) = uVar5;
  if (*(int *)(param_1 + 0x3c4) == 0) {
    uVar3 = fn_828252D0(((ulonglong)uVar5 & 0x3fffffff) << 2);
    *(undefined4 *)(param_1 + 0x3c4) = uVar3;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    iVar8 = 0;
    do {
      pcVar1 = *(char **)(**(int **)(param_1 + 0x3bc) + iVar8);
      pcVar6 = pcVar1;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      iVar7 = (int)pcVar6 - (int)pcVar1;
      uVar5 = uVar5 + 1;
      *(int *)(*(int *)(param_1 + 0x3c4) + iVar8) = iVar7;
      iVar8 = iVar8 + 4;
      *(int *)(param_1 + 0xa8) = iVar7 + *(int *)(param_1 + 0xa8);
    } while (uVar5 < *(uint *)(param_1 + 0xa4));
  }
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x14);
  cVar4 = fn_82827750(param_1);
  if (cVar4 != '\0') {
    fn_82820EF8(param_1 + 0x98,4);
  }
  uVar3 = fn_828184A8(iVar9,0x38);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  lVar2 = fn_82F67CF8(iVar9,0x38,1,param_2);
  return (lVar2 + -1) - (lVar2 + -2 + (ulonglong)(lVar2 + -1 == 0));
}

