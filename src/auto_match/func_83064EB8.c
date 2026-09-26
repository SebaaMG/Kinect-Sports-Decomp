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
extern unsigned int *auStack_70;
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_83064858();
extern int fn_83065890();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern unsigned int lbl_8217E890;
extern unsigned int uStack_48;
extern unsigned int uStack_60;


undefined8 fn_83064EB8(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint auStack_70 [2];
  undefined **appuStack_68 [2];
  uint uStack_60;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  
  uStack_60 = 0;
  appuStack_68[0] = &lbl_8217E890;
  uStack_48 = 0;
  puStack_50 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)0x0;
  uVar7 = 0;
  lVar8 = 0;
  fn_83065890(appuStack_68);
  puVar2 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)0x0;
  uVar4 = auStack_70[0];
  auStack_70[0] = uStack_60;
  while (uStack_60 = auStack_70[0], auStack_70[0] != 0) {
    lVar8 = lVar8 + 1;
    fn_8257A9F0(&puStack_50,auStack_70);
    uVar5 = (*(code *)appuStack_68[0][1])(appuStack_68,uStack_60);
    puVar2 = puStack_4c;
    puVar3 = puStack_50;
    uVar4 = auStack_70[0];
    auStack_70[0] = uVar5;
  }
  puVar1 = puVar3;
  if ((param_3 & 0xffffffff) != 0) {
    auStack_70[0] = uVar4;
    fn_830677A0(param_3,lVar8,param_4);
    uVar4 = auStack_70[0];
  }
  for (; auStack_70[0] = uVar4, puVar1 != puVar2; puVar1 = puVar1 + 1) {
    cVar6 = fn_83064858(param_1,*puVar1);
    if (cVar6 != '\0') {
      uVar7 = 1;
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_830679A8(param_3);
    }
    uVar4 = auStack_70[0];
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830678C8(param_3);
  }
  if (puVar3 != (undefined4 *)0x0) {
    fn_8265CA20(puVar3);
  }
  return uVar7;
}

