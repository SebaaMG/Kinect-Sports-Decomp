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
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_8269A190();
extern int fn_82755978();
extern unsigned int iStack_30;
extern U64 storeWordConditionalIndexed();


void fn_82737D40(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar4;
  undefined8 uVar3;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte bVar8;
  int iStack_30;
  uint auStack_2c [11];
  
  cVar4 = fn_82695468(param_1,0x29);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      if (*(int *)(param_1 + 0x1c) < 1) {
        uVar3 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        uVar3 = fn_82695608(uVar3,uVar1);
      }
      fn_82755978(auStack_2c,uVar7 + 0x30,uVar3);
      fn_8269A190(&iStack_30,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        auStack_2c);
      fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_30);
      lVar5 = (ulonglong)*(uint *)(iStack_30 + 8) - 1;
      bVar8 = (lVar5 == 0) << 1;
      *(int *)(iStack_30 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8();
      }
      lVar5 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar5;
        uVar7 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
          *puVar6 = uVar2;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if (uVar7 == 1) {
        fn_8267BE38();
      }
    }
  }
  return;
}

