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
extern unsigned int *auStack_3c;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82697700();
extern int fn_8269A190();
extern int fn_827558F0();
extern unsigned int iStack_40;
extern U64 storeWordConditionalIndexed();


void fn_82737E58(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar6;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte bVar10;
  int iStack_40;
  uint auStack_3c [15];
  
  cVar6 = fn_82695468(param_1,0x29);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar9 = 0;
    }
    if (((uVar9 & 0xffffffff) != 0) && (1 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar4 = fn_82697700(uVar3,uVar1);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      uVar5 = fn_82697700(uVar3,uVar1);
      if (*(int *)(param_1 + 0x1c) < 3) {
        uVar3 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,2);
        uVar3 = fn_82695608(uVar3,uVar1);
      }
      if ((uVar5 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
        uVar5 = uVar4 + 1;
      }
      fn_827558F0(auStack_3c,uVar9 + 0x30,uVar4,uVar5,uVar3);
      fn_8269A190(&iStack_40,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        auStack_3c);
      fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_40);
      lVar7 = (ulonglong)*(uint *)(iStack_40 + 8) - 1;
      bVar10 = (lVar7 == 0) << 1;
      *(int *)(iStack_40 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8();
      }
      lVar7 = ((ulonglong)auStack_3c[0] & 0xfffffffc) + 4;
      do {
        puVar8 = (uint *)lVar7;
        uVar9 = (ulonglong)*puVar8;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
          *puVar8 = uVar2;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if (uVar9 == 1) {
        fn_8267BE38();
      }
    }
  }
  return;
}

