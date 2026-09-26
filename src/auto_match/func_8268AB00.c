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
extern unsigned int fStack_3c;
extern int fn_8267BE38();
extern int fn_8268A388();
extern int fn_8268A970();
extern int fn_8268C510();
extern int fn_8268C750();
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


undefined8
fn_8268AB00(double param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte bVar7;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  uint uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  
  if ((*(int *)(param_2 + 0xc) != 0) && (param_3 != 0)) {
    fn_8268C510(&uStack_50);
    puStack_48 = &uStack_50;
    iVar3 = fn_8268A388(*(undefined4 *)(param_2 + 0xc),&puStack_48);
    bVar7 = (iVar3 == 0) << 1;
    if (iVar3 == 0) {
      fn_8268C510(&uStack_4c,param_4);
      fn_8268C750(&uStack_40,&uStack_4c);
      fStack_3c = (float)param_1;
      lVar5 = ((ulonglong)uStack_4c & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar5;
        uVar4 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      bVar7 = (uVar4 == 1) << 1;
      uStack_38 = param_5;
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      puStack_48 = &uStack_50;
      puStack_44 = &uStack_40;
      fn_8268A970(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),&puStack_48);
      lVar5 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar5;
        uVar4 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      bVar7 = (uVar4 == 1) << 1;
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      lVar5 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar5;
        uVar4 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      return 1;
    }
    lVar5 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (uint *)lVar5;
      uVar4 = (ulonglong)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
    if (uVar4 == 1) {
      fn_8267BE38();
    }
  }
  return 0;
}

