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
extern unsigned int *auStack_18;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_826959C8();
extern int fn_826F8A98();
extern int fn_82704528();
extern unsigned int uStack_1c;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82704D58(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte bVar8;
  char acStack_20 [4];
  uint uStack_1c;
  undefined4 auStack_18 [2];
  
  fn_8268B330(&uStack_1c);
  cVar4 = fn_826F8A98(*(undefined4 *)(param_1 + 0x14),&uStack_1c,auStack_18,acStack_20);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(char *)(iVar1 + 0x78) == '\0') || (cVar4 == '\0')) {
    if (cVar4 == '\0') {
      lVar6 = ((ulonglong)uStack_1c & 0xfffffffc) + 4;
      puVar7 = (uint *)lVar6;
      uVar5 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
      }
      if (uVar5 == 1) {
        fn_8267BE38();
      }
      return 0;
    }
    bVar8 = (acStack_20[0] == '\0') << 1;
    if ((acStack_20[0] == '\0') && (*(char *)(iVar1 + 0x30) == '\x06')) {
      fn_826959C8(iVar1 + 0x30);
    }
    fn_82704528(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                  *(undefined4 *)(param_1 + 0x18),&uStack_1c,auStack_18[0]);
    lVar6 = ((ulonglong)uStack_1c & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar5 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
  }
  else {
    lVar6 = ((ulonglong)uStack_1c & 0xfffffffc) + 4;
    bVar3 = false;
    do {
      puVar7 = (uint *)lVar6;
      uVar5 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
  }
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return 1;
}

