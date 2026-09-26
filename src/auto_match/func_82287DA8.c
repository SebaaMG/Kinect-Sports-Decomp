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
extern unsigned int *auStack_420;
extern unsigned int *auStack_42c;
extern unsigned int *auStack_430;
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_8225DA70();
extern int fn_8225F160();
extern int fn_82287F00();
extern int fn_8228ABB8();
extern int fn_8234F298();
extern unsigned int lbl_83265988;


void fn_82287DA8(int param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined1 auStack_430 [4];
  undefined1 auStack_42c [12];
  undefined1 auStack_420 [1056];
  
  uVar2 = fn_8225C590();
  uVar9 = 0;
  do {
    bVar1 = false;
    lVar3 = fn_8225D9B8(uVar2,uVar9);
    if (lVar3 != 0) {
      uVar5 = 0;
      if (param_2 != 0) {
        puVar8 = (uint *)(param_1 + 0x6ac);
        do {
          if (bVar1) goto LAB_82287e3c;
          if ((ulonglong)*puVar8 == (uVar9 & 0xffffffff)) {
            bVar1 = true;
          }
          uVar5 = uVar5 + 1;
          puVar8 = puVar8 + 0x10;
        } while (uVar5 < param_2);
        if (bVar1) goto LAB_82287e3c;
      }
      iVar4 = fn_8225DA70(uVar2,auStack_420,lVar3,0);
      if (iVar4 != 0) {
        iVar4 = param_2 * 0x40 + param_1;
        *(int *)(iVar4 + 0x6ac) = (int)uVar9;
        *(undefined4 *)(iVar4 + 0x6a8) = 0;
        *(undefined4 *)(iVar4 + 0x6b8) = 0;
        *(undefined4 *)(iVar4 + 0x6bc) = 1;
        fn_8225F160();
        if ((lbl_83265988 == 0) ||
           ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
          uVar5 = param_2;
          if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
            uVar5 = -((param_2 < 2) - 1);
          }
          fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar5,auStack_430,auStack_42c);
          puVar7 = auStack_42c;
          puVar6 = auStack_430;
        }
        else {
          puVar7 = (undefined1 *)0x0;
          puVar6 = (undefined1 *)0x0;
        }
        fn_8228ABB8(param_1,param_2,auStack_420,puVar6,puVar7);
        return;
      }
    }
LAB_82287e3c:
    uVar9 = uVar9 + 1;
    if (3 < (uVar9 & 0xffffffff)) {
      fn_82287F00(param_1,param_2);
      return;
    }
  } while( true );
}

