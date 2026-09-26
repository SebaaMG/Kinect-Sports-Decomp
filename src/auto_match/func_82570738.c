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
extern int fn_82561E40();
extern int fn_82566E58();
extern int fn_82567CC0();


void fn_82570738(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  iVar8 = param_2[2];
  if (iVar8 != param_2[3]) {
    do {
      uVar10 = *(undefined4 *)(iVar8 + 4);
      iVar4 = fn_82567CC0(param_1,uVar10,param_2 + 8);
      if (iVar4 == 0) {
        puVar1 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        puVar2 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        fn_82561E40(param_2 + 8);
        puVar1 = (undefined4 *)(iVar8 + 0x20U & 0xfffffff0);
        *puVar1 = in_register_00010010;
        puVar1[1] = in_register_00010014;
        puVar1[2] = in_register_00010018;
        puVar1[3] = in_vr1;
        iVar8 = iVar8 + 0x30;
      }
      else {
        fn_82566E58(uVar10,*(undefined4 *)(*param_2 + 0x844));
        iVar4 = param_2[3];
        iVar7 = iVar8;
        iVar3 = iVar8;
        while (iVar3 + 0x30 != iVar4) {
          puVar6 = (undefined8 *)(iVar3 + 0x28);
          puVar5 = (undefined8 *)(iVar7 + -8);
          lVar9 = 6;
          do {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          iVar7 = iVar7 + 0x30;
          iVar3 = iVar3 + 0x30;
        }
        iVar7 = param_2[3] + -0x30;
        for (iVar4 = iVar7; iVar4 != param_2[3]; iVar4 = iVar4 + 0x30) {
        }
        param_2[3] = iVar7;
      }
    } while (iVar8 != param_2[3]);
  }
  return;
}

