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
extern int fn_8267C498();
extern int fn_82722738();
extern int fn_82722740();
extern int fn_827912D8();
extern int fn_8279C910();
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


longlong fn_827A29D0(int param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  
  lVar7 = -1;
  if ((*(ushort *)(param_1 + 0x68) & 1) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar8 = param_3;
      if ((param_3 & 0xffffffff) < (param_2 & 0xffffffff)) {
        uVar8 = param_2;
        param_2 = param_3;
      }
      uVar9 = (undefined4)param_2;
      if ((param_4 == '\0') || (*(int *)(*(int *)(param_1 + 0xc) + 0x1c) == 0)) {
        puVar3 = (undefined4 *)fn_82722738();
        if (puVar3[1] != 0) {
          *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) & 0xffbf;
          puVar6 = (undefined1 *)*puVar3;
          if ((param_2 & 0xffffffff) == (uVar8 & 0xffffffff)) {
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &lbl_820E975C;
            }
            puVar5 = &uStack_58;
            uVar4 = 1;
            uStack_58 = uVar9;
            puStack_54 = puVar6;
            uStack_50 = puVar3[1];
          }
          else {
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &lbl_820E975C;
            }
            puVar5 = &uStack_40;
            uVar4 = 6;
            uStack_40 = uVar9;
            uStack_3c = (int)uVar8;
            puStack_38 = puVar6;
            uStack_34 = puVar3[1];
          }
          lVar7 = fn_8279C910(*(undefined4 *)(param_1 + 8),uVar4,puVar5);
          lVar7 = lVar7 + param_2;
        }
      }
      else {
        iVar1 = fn_82722740();
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar2 = fn_827912D8(iVar1);
          if (iVar2 != 0) {
            *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) & 0xffbf;
            if ((param_2 & 0xffffffff) == (uVar8 & 0xffffffff)) {
              puVar3 = &uStack_70;
              uVar4 = 2;
              uStack_70 = uVar9;
              iStack_6c = iVar1;
            }
            else {
              puVar3 = &uStack_68;
              uVar4 = 7;
              uStack_68 = uVar9;
              uStack_64 = (int)uVar8;
              iStack_60 = iVar1;
            }
            lVar7 = fn_8279C910(*(undefined4 *)(param_1 + 8),uVar4,puVar3);
            lVar7 = lVar7 + param_2;
          }
          fn_8267C498(iVar1);
        }
      }
    }
  }
  return lVar7;
}

