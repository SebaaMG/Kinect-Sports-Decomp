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
extern int fn_8267BE38();
extern int fn_8268C6A8();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82697700();
extern int fn_8269A1F0();
extern int fn_82755698();
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_82737BE0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte bVar9;
  uint uStack_30;
  undefined4 *apuStack_2c [11];
  
  cVar5 = fn_82695468(param_1,0x29);
  bVar9 = (cVar5 == '\0') << 1;
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar8 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar8 = 0;
    }
    if (((uVar8 & 0xffffffff) != 0) && (2 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar3 = fn_82697700(uVar3,uVar1);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      fn_82696D38(apuStack_2c,uVar4,uVar1,0xffffffffffffffff,0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,2);
      uVar4 = fn_82695608(uVar4,uVar1);
      fn_8268C6A8(&uStack_30,*apuStack_2c[0],apuStack_2c[0][4]);
      uVar3 = fn_82755698(uVar8 + 0x30,uVar3,((ulonglong)uStack_30 & 0xfffffffc) + 8,uVar4);
      fn_8269A1F0(*(undefined4 *)(param_1 + 4),uVar3);
      lVar6 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
      do {
        puVar7 = (uint *)lVar6;
        uVar8 = (ulonglong)*puVar7;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
          *puVar7 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar8 == 1) {
        fn_8267BE38();
      }
      uVar2 = apuStack_2c[0][2];
      apuStack_2c[0][2] = (int)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826944C8(apuStack_2c[0]);
      }
    }
  }
  return;
}

