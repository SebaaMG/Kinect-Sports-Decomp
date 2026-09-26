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
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_8269A190();
extern int fn_826A6F88();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_826A7C10(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte bVar8;
  uint uStack_30;
  int iStack_2c;
  undefined4 *apuStack_28 [4];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    fn_82696D38(apuStack_28,uVar4,uVar2,0xffffffffffffffff,0);
    fn_8268B330(&uStack_30);
    fn_826A6F88(*apuStack_28[0],apuStack_28[0][4],&uStack_30,0xffffffff82007184);
    fn_8269A190(&iStack_2c,(ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      &uStack_30);
    fn_82681838(*(undefined4 *)(param_1 + 4),&iStack_2c);
    lVar6 = (ulonglong)*(uint *)(iStack_2c + 8) - 1;
    bVar8 = (lVar6 == 0) << 1;
    *(int *)(iStack_2c + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8();
    }
    lVar6 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar5 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
        *puVar7 = uVar3;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    if (uVar5 == 1) {
      fn_8267BE38();
    }
    uVar3 = apuStack_28[0][2];
    apuStack_28[0][2] = (int)((ulonglong)uVar3 - 1);
    if ((ulonglong)uVar3 - 1 == 0) {
      fn_826944C8(apuStack_28[0]);
    }
  }
  return;
}

