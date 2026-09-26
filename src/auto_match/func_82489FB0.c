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
extern int fn_82489AA0();
extern int fn_82A1DAA8();


undefined8 fn_82489FB0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = piVar1[5];
  if (iVar2 <= piVar1[5]) {
    iVar5 = iVar2;
  }
  piVar1[5] = iVar5;
  iVar5 = piVar1[6];
  if (piVar1[6] < iVar2) {
    iVar5 = iVar2;
  }
  iVar3 = *piVar1;
  piVar1[6] = iVar5;
  uVar6 = 0;
  if (piVar1[1] - iVar3 >> 2 != 0) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(*(int *)(iVar5 + iVar3) + 4);
      if ((iVar4 == 0) || (iVar4 == 3)) {
        iVar5 = *(int *)(uVar6 * 4 + iVar3);
        fn_82A1DAA8(*(undefined4 *)(iVar5 + 8),param_2,*(undefined4 *)(iVar5 + 0x10));
        *(int *)(iVar5 + 0x14) = iVar2;
        fn_82489AA0(iVar5,1);
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < (uint)(piVar1[1] - *piVar1 >> 2));
  }
  return 0;
}

