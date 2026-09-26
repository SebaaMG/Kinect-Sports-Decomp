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
extern int fn_82540288();
extern int fn_8265C9E0();
extern int fn_82671578();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_3c;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


void fn_82671F28(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  longlong lVar4;
  undefined4 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_40;
  int iStack_3c;
  
  uVar8 = 0;
  uStack_40 = 0;
  iVar5 = fn_82A1BB18();
  iVar3 = (int)param_1;
  if (iVar5 == lbl_831E7B44) {
    do {
      puVar7 = (uint *)(param_1 + 0x104);
      uVar1 = *puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,param_1 + 0x104);
        *puVar7 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0) {
      if (*(undefined4 **)(iVar3 + 0xb8) == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(iVar3 + 0xb8);
      }
      fn_82540288(param_2,uVar6);
    }
  }
  else if (*(int *)(iVar3 + 0xe8) == 0) {
    lVar4 = fn_8265C9E0(0x18);
    if (lVar4 != 0) {
      uStack_40 = 0;
      iStack_3c = 0;
      fn_82517978(&uStack_40,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),1);
      uVar8 = fn_82671578(lVar4,&uStack_40,param_2);
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar8);
  }
  return;
}

