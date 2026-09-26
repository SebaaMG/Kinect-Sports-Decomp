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
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_8268CC00();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_826C59F8();
extern int fn_826C8590();
extern int fn_82741A50();
extern int fn_82758C90();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_826CFE38(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [96];
  
  iVar3 = fn_826C59F8();
  if ((iVar3 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,0);
    iVar4 = fn_82696958(uVar2,uVar1);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
      if ((iVar5 == 0x1a) && (iVar5 = *(int *)(iVar4 + 0x30), iVar5 != 0)) {
        fn_8268CC00(&uStack_80);
        cVar9 = '\x01';
        cVar10 = '\0';
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar1 = *(undefined4 *)(param_1 + 0x18);
          uVar2 = fn_826957D0(param_1,1);
          iVar6 = fn_82696958(uVar2,uVar1);
          if ((iVar6 != 0) &&
             (iVar7 = (**(code **)(*(int *)(iVar6 + 0x10) + 8))(iVar6 + 0x10), iVar7 == 0xf)) {
            puVar8 = (undefined4 *)
                     fn_82741A50(auStack_60,iVar6,*(undefined4 *)(param_1 + 0x18));
            uStack_80 = *puVar8;
            uStack_7c = puVar8[1];
            uStack_78 = puVar8[2];
            uStack_74 = puVar8[3];
            uStack_70 = puVar8[4];
            uStack_6c = puVar8[5];
          }
          if (2 < *(int *)(param_1 + 0x1c)) {
            uVar1 = *(undefined4 *)(param_1 + 0x18);
            uVar2 = fn_826957D0(param_1,2);
            cVar9 = fn_82695608(uVar2,uVar1);
            if (3 < *(int *)(param_1 + 0x1c)) {
              uVar1 = *(undefined4 *)(param_1 + 0x18);
              uVar2 = fn_826957D0(param_1,3);
              cVar10 = fn_82695608(uVar2,uVar1);
            }
          }
        }
        cVar11 = (cVar9 == '\0') + '@';
        if (cVar10 == '\0') {
          cVar11 = (cVar9 == '\0') + 'B';
        }
        fn_826C8590(iVar3,1);
        fn_82758C90(*(undefined4 *)(iVar3 + 0x1b8),cVar11,iVar5,&uStack_80);
      }
      fn_826824B0(iVar4);
    }
  }
  return;
}

