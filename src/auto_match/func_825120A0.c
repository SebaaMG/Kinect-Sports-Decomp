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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82512158();
extern int fn_8265CA20();
extern U64 storeWordConditionalIndexed();


void fn_825120A0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  char in_RESERVE;
  byte bVar9;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x19);
  while( true ) {
    bVar9 = (cVar1 == '\0') << 1;
    if (cVar1 != '\0') break;
    fn_82512158(param_1,piVar2[2]);
    piVar3 = (int *)piVar2[5];
    piVar4 = (int *)*piVar2;
    if (ZEXT48(piVar3) != 0) {
      lVar6 = ZEXT48(piVar3) + 8;
      do {
        puVar7 = (uint *)lVar6;
        lVar8 = (ulonglong)*puVar7 - 1;
        if (in_RESERVE != '\0') {
          uVar5 = storeWordConditionalIndexed(lVar8,0,lVar6);
          *puVar7 = uVar5;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if ((int)lVar8 == 0) {
        (**(code **)(*piVar3 + 4))();
      }
    }
    fn_8265CA20(piVar2);
    cVar1 = *(char *)((int)piVar4 + 0x19);
    piVar2 = piVar4;
  }
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

