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
extern int fn_82813428();
extern int fn_82813CB8();
extern int fn_82A1E6A0();
extern unsigned int iStack_38;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


longlong fn_82813FD0(longlong param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong lVar4;
  undefined4 uVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  undefined8 uStack_40;
  int iStack_38;
  undefined4 *puStack_34;
  
  puVar5 = (undefined4 *)param_1;
  *puVar5 = 0;
  do {
    puVar7 = (uint *)(param_1 + 4);
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,param_1 + 4);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  puVar5[2] = 0;
  do {
    puVar7 = (uint *)(param_1 + 0xc);
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,param_1 + 0xc);
      *puVar7 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(undefined8 *)(puVar5 + 4) = 0;
  puVar5[6] = 0;
  sync(0);
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  lVar4 = fn_82813CB8(param_1,0x10);
  bVar1 = lVar4 == 0;
  iVar3 = (int)lVar4;
  if (!bVar1) {
    *(undefined4 *)(iVar3 + 8) = 0;
    do {
      puVar7 = (uint *)(lVar4 + 0xc);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,lVar4 + 0xc);
        *puVar7 = uVar2;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  uStack_40 = *(undefined8 *)(puVar5 + 8);
  puStack_34 = puVar5 + 8;
  iStack_38 = iVar3;
  fn_82813428(&uStack_40);
  puStack_34 = puVar5 + 10;
  uStack_40 = *(undefined8 *)(puVar5 + 10);
  iStack_38 = iVar3;
  fn_82813428(&uStack_40);
  if (param_2 != '\0') {
    uVar6 = fn_82A1E6A0(0,1,0,0);
    puVar5[0xe] = uVar6;
  }
  sync(0);
  return param_1;
}

