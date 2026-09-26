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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C7078();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_824060E8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern U64 storeWordConditionalIndexed();


uint * fn_822EA278(uint *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 auStack_50 [4];
  int *piStack_4c;
  
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  fn_824060E8(&uStack_58,param_2 + 0x34);
  fn_822C7078(auStack_50,&uStack_58,uVar2,uVar1);
  uStack_60 = 0;
  fn_822EA970(&uStack_58,param_3,auStack_50,*(undefined4 *)(param_2 + 0x80),param_3,&uStack_60
                   );
  iVar4 = fn_82365BD8(&uStack_60,param_4);
  fn_82376640((ulonglong)uStack_58 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  uStack_60 = 0;
  uStack_5c = 0;
  if (uStack_54 != 0) {
    cVar5 = fn_8223AAC0(uStack_54);
    in_cr0 = (cVar5 == '\0') << 1;
    if (cVar5 != '\0') {
      uStack_5c = uStack_54;
      uStack_60 = uStack_58;
    }
  }
  fn_822C8B40(param_2,&uStack_60);
  if (uStack_5c != 0) {
    fn_822315A0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (uStack_54 != 0) {
    cVar5 = fn_8223AAC0(uStack_54);
    in_cr0 = (cVar5 == '\0') << 1;
    if (cVar5 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = uStack_54;
      *param_1 = uStack_58;
    }
    fn_822315A0(uStack_54);
  }
  if (ZEXT48(piStack_4c) != 0) {
    lVar7 = ZEXT48(piStack_4c) + 8;
    do {
      puVar8 = (uint *)lVar7;
      lVar6 = (ulonglong)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar7);
        *puVar8 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(code **)(*piStack_4c + 4))();
    }
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

