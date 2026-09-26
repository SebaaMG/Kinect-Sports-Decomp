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
extern int fn_8228E658();
extern int fn_82359C18();
extern int fn_82456688();
extern int fn_8265C9E0();
extern unsigned int lbl_821AFB20;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_824563F0(undefined4 *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte bVar8;
  undefined4 uStack_40;
  int *piStack_3c;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    bVar8 = 2;
  }
  else {
    puVar4 = puVar2 + 4;
    bVar8 = (puVar4 == (undefined4 *)0x0) << 1;
    puVar2[1] = 1;
    *puVar2 = &lbl_821AFB20;
    puVar2[2] = 1;
    if (puVar4 != (undefined4 *)0x0) {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar2[8] = 0;
      }
      else {
        if (*(int *)(param_3 + 0x10) != param_3) {
          puVar4 = (undefined4 *)0x0;
        }
        uVar3 = (**(code **)**(undefined4 **)(param_3 + 0x10))
                          (*(undefined4 **)(param_3 + 0x10),puVar4);
        puVar2[8] = uVar3;
      }
    }
  }
  param_1[1] = puVar2;
  uStack_40 = 0;
  *param_1 = puVar2 + 4;
  piStack_3c = (int *)0x0;
  fn_8228E658(&uStack_40,param_1);
  fn_82456688(param_2 + 0xc,&uStack_40);
  if (ZEXT48(piStack_3c) != 0) {
    lVar6 = ZEXT48(piStack_3c) + 8;
    do {
      puVar7 = (uint *)lVar6;
      lVar5 = (ulonglong)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar5,0,lVar6);
        *puVar7 = uVar1;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if ((int)lVar5 == 0) {
      (**(code **)(*piStack_3c + 4))();
    }
  }
  fn_82359C18(param_3);
  return param_1;
}

