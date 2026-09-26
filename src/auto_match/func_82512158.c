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
extern int fn_8265CA20();
extern U64 storeWordConditionalIndexed();


void fn_82512158(undefined8 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  char in_RESERVE;
  byte bVar8;
  
  cVar1 = *(char *)((int)param_2 + 0x19);
  while (bVar8 = (cVar1 == '\0') << 1, cVar1 == '\0') {
    fn_82512158(param_1,param_2[2]);
    piVar2 = (int *)param_2[5];
    piVar3 = (int *)*param_2;
    if (ZEXT48(piVar2) != 0) {
      lVar5 = ZEXT48(piVar2) + 8;
      do {
        puVar6 = (uint *)lVar5;
        lVar7 = (ulonglong)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(lVar7,0,lVar5);
          *puVar6 = uVar4;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if ((int)lVar7 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    fn_8265CA20(param_2);
    param_2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x19);
  }
  return;
}

