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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern int fn_8267BF50();
extern int fn_8267C498();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278D3F0();
extern int fn_827998E8();
extern int fn_82799DA8();
extern int fn_827A7E68();


void fn_82726CE0(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [128];
  
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xd0) + 8), uVar6 != 0)) {
    iVar8 = 0;
    do {
      if (**(uint **)(param_1 + 0xd0) != 0) {
        uVar2 = fn_827A7E68((ulonglong)**(uint **)(param_1 + 0xd0) + 0x30,0,0xffffffff8200befc
                                  ,0xffffffffffffffff);
        uVar3 = fn_827A7E68((ulonglong)**(uint **)(param_1 + 0xd0) + 0x30,0,0xffffffff820110cc
                                  ,0xffffffffffffffff);
        uVar4 = fn_8267BF50(param_1);
        fn_826FDED0(auStack_b0,uVar4);
        if ((uVar2 & 0xffffffff) != 0) {
          uVar4 = fn_8278D3F0(auStack_80,auStack_b0,uVar2);
          fn_82726AB8(auStack_b0,uVar4);
          fn_826FDF58(auStack_80);
        }
        if ((uVar3 & 0xffffffff) != 0) {
          uVar4 = fn_8278D3F0(auStack_80,auStack_b0,uVar3);
          fn_82726AB8(auStack_b0,uVar4);
          fn_826FDF58(auStack_80);
        }
        puVar7 = (uint *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) + iVar8);
        uVar1 = *puVar7;
        lVar9 = (ulonglong)puVar7[1] + (ulonglong)uVar1;
        fn_82799DA8(*(undefined4 *)(param_1 + 0xa0),auStack_b0,uVar1,lVar9);
        iVar10 = *(int *)(*(int *)(param_1 + 0xd0) + 4) + iVar8;
        uVar5 = fn_827998E8(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 8),uVar1,lVar9);
        if (*(int *)(iVar10 + 8) != 0) {
          fn_8267C498();
        }
        *(undefined4 *)(iVar10 + 8) = uVar5;
        fn_826FDF58(auStack_b0);
      }
      uVar6 = uVar6 - 1;
      iVar8 = iVar8 + 0x14;
    } while (uVar6 != 0);
  }
  return;
}

