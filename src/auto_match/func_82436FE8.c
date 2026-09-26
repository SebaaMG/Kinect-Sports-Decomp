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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82436FE8(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double dStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double dStack_58;
  
  iVar5 = *(int *)(param_2 + 0x40);
  fVar1 = (float)((double)*(float *)(iVar5 + 0x220) + param_1);
  *(float *)(iVar5 + 0x220) = fVar1;
  if (*(float *)(iVar5 + 0x21c) < fVar1) {
    iVar5 = 1;
    iVar6 = 0x224;
    lVar4 = 2;
    *(undefined4 *)(*(int *)(param_2 + 0x40) + 0x220) = lbl_821CC160;
    do {
      piVar2 = *(int **)(param_2 + 0x40);
      if ((*(int *)(iVar6 + (int)piVar2) == 0) || (*(int *)((int)piVar2 + iVar6 + 8) == 0)) {
        puVar3 = *(undefined4 **)(*(int *)(*piVar2 + 0xd4) + 0xc);
        uStack_60 = 0;
        uStack_5c = 0;
        fn_82273CD8(&uStack_60,3);
        dStack_58 = (double)(longlong)iVar5;
        fn_82672C20(*puVar3,0xffffffff821abaa0,&uStack_60,1);
        puVar3 = &uStack_60;
      }
      else {
        puVar3 = *(undefined4 **)(*(int *)(*piVar2 + 0xd4) + 0xc);
        uStack_70 = 0;
        uStack_6c = 0;
        fn_82273CD8(&uStack_70,3);
        dStack_68 = (double)(longlong)iVar5;
        fn_82672C20(*puVar3,0xffffffff821abac8,&uStack_70,1);
        puVar3 = &uStack_70;
      }
      fn_82273C88(puVar3);
      lVar4 = lVar4 + -1;
      iVar5 = iVar5 + 1;
      *(uint *)(iVar6 + *(int *)(param_2 + 0x40)) =
           (uint)LZCOUNT(*(undefined4 *)(iVar6 + *(int *)(param_2 + 0x40))) >> 5;
      iVar6 = iVar6 + 4;
    } while (lVar4 != 0);
  }
  return;
}

