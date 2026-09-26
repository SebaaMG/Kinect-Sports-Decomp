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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_40;
extern int fn_82250928();
extern int fn_822509A0();
extern int fn_82517978();
extern int fn_8288A398();
extern int fn_828BB4B8();
extern int fn_828BCC48();
extern int fn_828C2BD8();
extern int fn_828EA820();
extern unsigned int lbl_83265988;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_8251B258(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  uint auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (lbl_83265988 != 0) {
    uVar4 = fn_828EA820();
    iVar6 = fn_8288A398();
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
    uVar5 = fn_828BB4B8(&uStack_38,*(undefined4 *)(iVar6 + 0x38));
    fn_828BCC48(uVar1,uVar4,0xffffffff8329ea78,uVar5);
    iVar6 = *(int *)(*(int *)(param_1 + 4) + 8);
    uVar5 = fn_828BB4B8(&uStack_38,*(undefined4 *)(iVar6 + 0x28));
    fn_828BCC48(iVar6,uVar4,0xffffffff8329ea5c,uVar5);
    fn_828C2BD8(*(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar4,0xffffffff83296028,
                      0xffffffff8329ea94);
    auStack_40[0] = **(int **)(param_1 + 0x18);
    if ((int *)auStack_40[0] != *(int **)(param_1 + 0x18)) {
      do {
        uVar3 = auStack_40[0];
        uStack_38 = 0;
        uStack_34 = 0;
        fn_82517978(&uStack_38,*(undefined4 *)(auStack_40[0] + 0x28),
                          *(undefined4 *)(auStack_40[0] + 0x2c),0);
        fn_828BCC48(*(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar4,uVar3 + 0xc,&uStack_38);
        fn_82250928(auStack_40);
      } while (auStack_40[0] != *(uint *)(param_1 + 0x18));
    }
    puVar2 = *(uint **)(param_1 + 0x28);
    auStack_40[0] = *puVar2;
    while (uVar7 = (ulonglong)auStack_40[0], uVar7 != ZEXT48(puVar2)) {
      fn_828C2BD8(*(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar4,uVar7 + 0xc,uVar7 + 0x28);
      fn_822509A0(auStack_40);
      puVar2 = *(uint **)(param_1 + 0x28);
    }
  }
  return;
}

