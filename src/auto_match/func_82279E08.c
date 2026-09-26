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
#define _fStack_90 ((*(U64*)&fStack_90))
extern unsigned int *auStack_60;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8227A7B8();
extern int fn_8227E790();
extern int fn_8227F578();
extern int fn_8227F728();
extern int fn_82536590();
extern int fn_8266F578();
extern unsigned int uStack_80;


void fn_82279E08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_60 [96];
  
  iVar3 = fn_8266F578(*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xe8) = 1;
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0xf0) != 0)) {
    uVar8 = 0;
    piVar1 = (int *)**(int **)(param_1 + 0x10);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      iVar3 = 0;
      do {
        uVar5 = *(undefined8 *)(piVar1[2] + 0x228);
        uVar7 = *(undefined8 *)(piVar1[2] + 0x230);
        uStack_80 = ((((U64)(uStack_80)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar5)) & ((U64)0xFFFFFFFF)) << 32));
        fStack_8c = (float)uVar7;
        fStack_90 = (float)((ulonglong)uVar7 >> 0x20);
        uStack_80 = ((((U64)(uStack_80)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        _fStack_90 = CONCAT44(fStack_90 + (((U64)(uStack_80) >> 0) & 0xFFFFFFFF),fStack_8c + (((U64)(uStack_80) >> 32) & 0xFFFFFFFF));
        uStack_80 = uVar5;
        fn_8227A7B8(param_1,&uStack_80,&fStack_90,&fStack_88,&fStack_70,auStack_60);
        fStack_78 = fStack_70 - fStack_88;
        iVar2 = *(int *)(param_1 + 0x9c);
        fStack_74 = fStack_6c - fStack_84;
        if ((uVar8 & 0xffffffff) <
            (ulonglong)(uint)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2)) {
          uVar6 = (ulonglong)*(uint *)(*(int *)(iVar2 + 0xc) + iVar3);
          iVar4 = fn_8227F728(uVar6,&fStack_88,&fStack_78);
          if (iVar4 == 0) {
            *(ulonglong *)((int)uVar6 + 0x1c) = CONCAT44(fStack_88,fStack_84);
            *(ulonglong *)((int)uVar6 + 0x24) = CONCAT44(fStack_78,fStack_74);
            fn_8227F578(uVar6);
            *(undefined4 *)(iVar2 + 0x3c) = 1;
          }
        }
        fn_8227E790(*(undefined4 *)(param_1 + 0x9c),uVar8,auStack_60);
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + 4;
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x10));
    }
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    if (*(int *)(param_1 + 0x104) == 0) goto LAB_82279f84;
    iVar3 = param_1 + 0x10c;
  }
  else {
    if (*(int *)(param_1 + 0x104) != 0) goto LAB_82279f84;
    iVar3 = param_1 + 0x108;
  }
  fn_82536590(iVar3,0);
LAB_82279f84:
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x100);
  return;
}

