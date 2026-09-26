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
extern int fn_822B17A8();
extern int fn_8259BDA8();


void fn_82448E88(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *apuStack_40 [16];
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x48) + 0x34);
  apuStack_40[0] = (undefined4 *)*puVar1;
  while (apuStack_40[0] != puVar1) {
    piVar2 = *(int **)(param_1 + 0x40);
    bVar3 = false;
    uVar4 = 0;
    if ((piVar2[0x4a] - piVar2[0x49]) / 0x5c != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar5 + piVar2[0x49]) == *(int *)(apuStack_40[0][3] + 0x2c)) {
          iVar5 = uVar4 + 1;
          goto LAB_82448f18;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x5c;
      } while (uVar4 < (uint)((piVar2[0x4a] - piVar2[0x49]) / 0x5c));
    }
    iVar5 = 1;
LAB_82448f18:
    if (iVar5 == 1) {
      if ((((1 < *(int *)(*(int *)(*piVar2 + 0x174) + 0xbc)) ||
           (iVar5 = *(int *)(*piVar2 + 0xa0), iVar5 == 0)) || (*(int *)(iVar5 + 0x40) != 2)) &&
         ((iVar5 = *(int *)(apuStack_40[0][3] + 0x24), iVar5 != 0 &&
          (iVar5 = *(int *)(iVar5 + 0x34), iVar5 != 0)))) {
        fn_822B17A8(iVar5,0x2e,0);
      }
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    fn_8259BDA8(apuStack_40);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x40) = 1;
  return;
}

