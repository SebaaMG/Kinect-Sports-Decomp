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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82522588();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_827D50C0();
extern int fn_827DEA50();
extern int fn_82816F98();
extern int fn_82816FE8();
extern unsigned int iStack_44;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82610928(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  int aiStack_50 [2];
  uint uStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  
  fn_82522588(&uStack_48,param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(uStack_48 + 0x88);
  if (iVar2 == 0) {
    lVar4 = (ulonglong)uStack_48 + 0x1dc;
    do {
      puVar5 = (uint *)lVar4;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar5 - 1,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    aiStack_50[0] = 0;
    fn_82816F98(iVar2,*(undefined4 *)(iVar1 + 0x80),aiStack_50);
    if (aiStack_50[0] != 0) {
      fn_827D5078();
      fn_827DEA50(*(undefined4 *)(param_1 + 0x10),iVar2);
      fn_82816FE8(iVar2,*(undefined4 *)(iVar1 + 0x80),auStack_40);
      fn_827D5090(*param_3,uStack_3c);
      fn_827D50A8(*param_3,0);
      fn_827D50C0(*param_3,0);
      if (iStack_44 != 0) {
        fn_822315A0();
      }
      if (param_3[1] != 0) {
        fn_822315A0();
      }
      return 0;
    }
    fn_827D50C0(*param_3,2);
    lVar4 = (ulonglong)uStack_48 + 0x1dc;
    do {
      puVar5 = (uint *)lVar4;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar5 - 1,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return 2;
}

