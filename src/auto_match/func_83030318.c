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
extern int fn_8301AE78();
extern int fn_8301AEF8();
extern int fn_8301AF50();
extern int fn_8302FB68();
extern int fn_8302FD88();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_832642EC;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8 fn_83030318(int param_1,int param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  byte bVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int iStack_90;
  int iStack_8c;
  int aiStack_88 [2];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  fn_8301AE78(aiStack_88,lbl_832642EC,param_3,*(undefined4 *)(param_1 + 0xc));
  if (param_2 == aiStack_88[0]) {
    return 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc4);
  for (puVar9 = puVar1; puVar2 = puVar1, puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)*puVar9
      ) {
    if (puVar9[1] == aiStack_88[0]) {
      puVar9 = puVar9 + 2;
      goto joined_r0x83030390;
    }
  }
  puVar9 = (undefined4 *)0x0;
joined_r0x83030390:
  do {
    if (puVar2 == (undefined4 *)0x0) break;
    if (puVar2[1] == param_2) {
      piVar10 = puVar2 + 2;
      if (piVar10 != (int *)0x0) goto LAB_830303ec;
      break;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
  param_2 = *(int *)(param_1 + 0xc0);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
LAB_830303ec:
      uVar6 = fn_8302FD88(param_1,puVar9,piVar10,param_3);
      fn_8301AF50(lbl_832642EC,*(undefined4 *)(param_1 + 0xc),param_3);
      iStack_8c = 0;
      iStack_90 = 0;
      puVar1 = *(undefined4 **)(param_1 + 0x104);
      do {
        if (puVar1 == (undefined4 *)0x0) {
          fn_8301AEF8(lbl_832642EC,param_3,*(undefined4 *)(param_1 + 0xc),&iStack_90);
          return uVar6;
        }
        if (iStack_90 == param_2) {
          iStack_8c = iStack_8c + 1;
        }
        else {
          iStack_8c = 1;
          iStack_90 = param_2;
        }
        if ((((ulonglong)(uint)puVar1[8] == (param_3 & 0xffffffff)) && (piVar10 != (int *)0x0)) &&
           (piVar11 = (int *)*piVar10, piVar11 != (int *)piVar10[1])) {
          do {
            iVar3 = *piVar11;
            for (puVar2 = *(undefined4 **)(param_1 + 0xe4); puVar2 != (undefined4 *)0x0;
                puVar2 = (undefined4 *)*puVar2) {
              if (puVar2[1] == iVar3) {
                if (puVar2 + 2 != (undefined4 *)0x0) {
                  uStack_80 = puVar2[2];
                  uStack_7c = puVar2[3];
                  uStack_78 = ((((U64)(uStack_78)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)puVar2[4] >> 0x18))) & ((U64)0xFF)) << 0));
                  uVar5 = puVar2[4];
                  bVar8 = (((U64)(uStack_78) >> 0) & 0xFF);
                  goto LAB_830304b0;
                }
                break;
              }
            }
            uVar5 = uStack_78;
            bVar8 = 0;
LAB_830304b0:
            uStack_78 = uVar5;
            if ((bVar8 & 8) == 0) {
LAB_83030530:
              uVar6 = fn_8302FB68(param_1,iVar3,puVar1 + 2);
            }
            else {
              bVar4 = false;
              if (puVar9 != (undefined4 *)0x0) {
                for (piVar7 = (int *)*puVar9; piVar7 != (int *)puVar9[1]; piVar7 = piVar7 + 1) {
                  if (*piVar7 == iVar3) {
                    bVar4 = true;
                    break;
                  }
                }
              }
              if (!bVar4) goto LAB_83030530;
            }
            piVar11 = piVar11 + 1;
          } while (piVar11 != (int *)piVar10[1]);
        }
        puVar1 = (undefined4 *)*puVar1;
      } while( true );
    }
    if (puVar1[1] == param_2) {
      piVar10 = puVar1 + 2;
      goto LAB_830303ec;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

