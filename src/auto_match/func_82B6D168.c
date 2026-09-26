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
extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB6DA0();
extern int fn_82AB6EC0();
extern int fn_82AB7718();
extern int fn_82AB9898();
extern int fn_82B69A00();
extern int fn_82B6CD48();
extern int fn_82B7FEE0();
extern int fn_82B7FFE8();
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


undefined8 fn_82B6D168(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar7;
  uint uVar8;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar9;
  int *piVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9c10,0xffffffff820d9c18,0x318);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820d9c18,0x319);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820d9c18,0x31a);
  }
  uVar1 = fn_82AB6EC0(param_2,1);
  uVar2 = fn_82AB6EC0(param_2,0);
  iVar7 = fn_82B69A00(*(undefined4 *)(param_1 + 0x10),9);
  if (iVar7 != 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uVar1 = fn_82AB9898(*(undefined4 *)(param_1 + 0xc),uVar1);
    uVar2 = fn_82AB9898(*(undefined4 *)(param_1 + 0xc),uVar2);
    uVar8 = fn_82AB60F0();
    iVar7 = fn_82AB60F0(uVar1);
    if ((iVar7 != 0) && (uVar8 != 0)) {
      for (lVar3 = fn_82AB63F8(uVar1); lVar3 != 0; lVar3 = fn_82AB66F8(uVar1,lVar3)) {
        lVar4 = fn_82AB67A8(lVar3);
        if (lVar4 == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce8,0xffffffff820d9c18,0x33a);
        }
        iVar7 = fn_82AB7718(lVar4,param_2);
        if (iVar7 != 0) {
          uVar5 = fn_82AB63F8(uVar2);
          uVar9 = 0;
          if (uVar8 != 0) {
            piVar10 = (int *)&uStack_c0;
            do {
              if ((uVar5 & 0xffffffff) == 0) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f2c,0xffffffff820d9c18,0x348);
              }
              lVar6 = fn_82AB67A8(uVar5);
              if (lVar6 == 0) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce0,0xffffffff820d9c18,0x34b);
              }
              if (*piVar10 == 0) {
                iVar7 = fn_82AB7718(lVar6,param_2);
                if (iVar7 == 0) {
                  *piVar10 = 2;
                  goto LAB_82b6d388;
                }
                *piVar10 = 1;
LAB_82b6d394:
                iVar7 = fn_82B6CD48(lVar4,lVar6);
                if (iVar7 != 0) {
                  fn_82AB6DA0(lVar4);
                  fn_82AB6DA0(lVar6);
                  fn_82B7FEE0(param_3,lVar4,param_2);
                  fn_82B7FFE8(param_3,lVar6,param_2);
                  return 1;
                }
              }
              else {
LAB_82b6d388:
                if (*piVar10 == 1) goto LAB_82b6d394;
              }
              uVar9 = uVar9 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar9 < uVar8);
          }
        }
      }
    }
  }
  return 0;
}

