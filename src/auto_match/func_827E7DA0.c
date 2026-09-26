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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D50C0();
extern int fn_827D5158();
extern int fn_827E3768();
extern int fn_827E3778();
extern int fn_827E3838();
extern int fn_827E41F8();
extern int fn_827E4DE8();
extern int fn_827E50C0();
extern int fn_827E5540();
extern int fn_827E57C8();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


ulonglong fn_827E7DA0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar7;
  undefined8 uVar6;
  int iVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  lVar10 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar8 = 0;
  do {
    if (*(int *)(iVar8 + *(int *)(param_1 + 0x20) + 0x78) == 0) {
      iVar1 = *(int *)(iVar8 + *(int *)(param_1 + 0x20) + 0x74);
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xc), iVar1 != 0)) {
        *(int *)(iVar1 + 0x34) = param_1;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
    }
    else {
      fn_827D5158(&uStack_60);
      lVar5 = fn_827E4DE8(0x38);
      if (lVar5 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        uStack_68 = 0;
        uStack_64 = 0;
        fn_82517978(&uStack_68,uStack_60,iStack_5c,0);
        piVar7 = (int *)fn_827E50C0(lVar5,lVar10,0,0,&uStack_68,0,
                                        *(undefined4 *)(param_1 + 0x20));
      }
      fn_827D50C0(piVar7[5],0x3e5);
      piVar7[0xd] = param_1;
      (**(code **)(*piVar7 + 4))(piVar7);
      uVar6 = fn_827E41F8(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x20) + 0x74));
      fn_827E3778(uVar6,piVar7);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      if (iStack_5c != 0) {
        fn_822315A0();
      }
    }
    iVar8 = iVar8 + 0x28;
    lVar10 = lVar10 + 1;
  } while (iVar8 < 0xa00);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x30);
  for (puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2c); puVar11 != puVar2;
      puVar11 = puVar11 + 1) {
    iVar8 = fn_827E3838(*puVar11);
    *(int *)(iVar8 + 0x38) = param_1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 8);
  while (puVar11 != puVar2) {
    uVar3 = *puVar11;
    fn_827D5158(&uStack_58);
    lVar10 = fn_827E5540(0x3c);
    if (lVar10 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      uStack_68 = 0;
      uStack_64 = 0;
      fn_82517978(&uStack_68,uStack_58,iStack_54,0);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar9 = fn_827E3768(uVar3);
      piVar7 = (int *)fn_827E57C8(lVar10,uVar9,0,0,&uStack_68,0,uVar4);
    }
    fn_827D50C0(piVar7[5],0x3e5);
    piVar7[0xe] = param_1;
    (**(code **)(*piVar7 + 4))(piVar7);
    fn_827E3778(uVar3,piVar7);
    puVar11 = puVar11 + 1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (iStack_54 != 0) {
      fn_822315A0();
    }
  }
  return -(ulonglong)(*(int *)(param_1 + 0x30) != 0) & 0x45b;
}

