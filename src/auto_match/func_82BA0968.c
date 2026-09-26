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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BBFE28();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern unsigned int uStack_144;


undefined4 fn_82BA0968(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_144;
  int aiStack_140 [80];
  
  iVar5 = 0;
  if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 0x1c)) {
    puVar8 = &uStack_144;
    do {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
      puVar3 = (undefined4 *)fn_82B7BD28(uVar6,0x14);
      puVar9 = puVar3 + 1;
      *puVar3 = uVar6;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        fn_82BA03B8(puVar9,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
      }
      iVar7 = *(int *)(param_1 + 0xc);
      iVar5 = iVar5 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = puVar9;
    } while (iVar5 <= *(int *)(*(int *)(iVar7 + 0x550) + 0x1c));
  }
  for (iVar5 = *(int *)(param_1 + 0x88); *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8)) {
    piVar4 = (int *)fn_82BC0088(aiStack_140[*(int *)(iVar5 + 0x34)],
                                      *(undefined4 *)(aiStack_140[*(int *)(iVar5 + 0x34)] + 4));
    *piVar4 = iVar5;
  }
  iVar5 = fn_82BBFE28(param_1 + 0x80);
  uVar6 = fn_82B7BD28(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac),iVar5 + 1U & 0x3fffffff
                           );
  iVar5 = iVar5 + -1;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  iVar7 = 0;
  if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 0x1c)) {
    piVar4 = aiStack_140;
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 4) != 0) {
        iVar10 = iVar5 << 2;
        do {
          uVar6 = fn_82BC7368(iVar1);
          iVar2 = *piVar4;
          iVar5 = iVar5 + -1;
          *(undefined4 *)(iVar10 + *(int *)(param_1 + 0xa0)) = uVar6;
          iVar10 = iVar10 + -4;
        } while (*(int *)(iVar2 + 4) != 0);
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar7 <= *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 0x1c));
  }
  return *(undefined4 *)(param_1 + 0xa0);
}

