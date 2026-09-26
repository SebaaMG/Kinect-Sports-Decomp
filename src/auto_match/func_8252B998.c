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
extern unsigned int *auStack_40;
extern unsigned int *auStack_90;
extern int fn_82553A18();
extern int fn_82F68CC0();
extern unsigned int iStack_7c;
extern unsigned int lbl_82196290;
extern unsigned int lbl_82196298;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_8252B998(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_90 [20];
  int iStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [64];
  
  piVar1 = *(int **)(param_1 + 0x8c0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              ((double)*(float *)(param_1 + 0xb3c),piVar1,param_1 + 0xf0,
               *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x44),
               *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x40));
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1a8);
    fn_82F68CC0(&uStack_70,param_1 + 0xf0,0x40);
    iVar6 = 0;
    if (0 < piVar1[0x48]) {
      iVar5 = 0;
      do {
        iStack_7c = piVar1[0x47];
        fn_82F68CC0(auStack_90,auStack_40,0x10);
        fn_82553A18(uVar2,*(undefined4 *)(iVar5 + piVar1[0x49]),uStack_70,uStack_68,uStack_60,
                          uStack_58,uStack_50,uStack_48);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < piVar1[0x48]);
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x1dc)) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x1dc) - 1;
    *(int *)(param_1 + 0x1dc) = (int)lVar3;
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)(param_1 + 0x1f0);
      lVar3 = 2;
      do {
        lVar3 = lVar3 + -1;
        *puVar4 = lbl_82196290;
        puVar4[1] = lbl_82196298;
        puVar4 = puVar4 + 2;
      } while (lVar3 != 0);
    }
  }
  return;
}

