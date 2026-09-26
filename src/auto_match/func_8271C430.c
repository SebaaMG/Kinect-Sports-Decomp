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
extern unsigned int *auStack_40;
extern int fn_8267BE38();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B1F0();
extern int fn_8268B330();
extern int fn_8268BB68();
extern int fn_8268BEA8();
extern int fn_826944C8();
extern int fn_82696D38();
extern int fn_826A70B0();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_8271C430(int param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  char in_RESERVE;
  byte bVar5;
  uint uStack_50;
  undefined4 *apuStack_4c [3];
  undefined1 auStack_40 [64];
  
  fn_8268AFB0(auStack_40,lbl_831E7E64);
  fn_8268B330(&uStack_50);
  fn_826A70B0(*(undefined4 *)*param_2,((undefined4 *)*param_2)[4],&uStack_50);
  fn_8268B1F0(auStack_40,(uint *)(uStack_50 & 0xfffffffc) + 2,
                    *(uint *)(uStack_50 & 0xfffffffc) & 0x7fffffff);
  fn_8268B1F0(auStack_40,0xffffffff8200268c,0xffffffffffffffff);
  fn_8268BEA8(&uStack_50);
  fn_82696D38(apuStack_4c,param_3,*(undefined4 *)(param_1 + 4),0xffffffffffffffff,0);
  fn_826A70B0(*apuStack_4c[0],apuStack_4c[0][4],&uStack_50);
  fn_8268B1F0(auStack_40,(uint *)(uStack_50 & 0xfffffffc) + 2,
                    *(uint *)(uStack_50 & 0xfffffffc) & 0x7fffffff);
  fn_8268B1F0(auStack_40,0xffffffff8200fcf8,0xffffffffffffffff);
  fn_8268BB68(*(undefined4 *)(param_1 + 8),auStack_40);
  lVar2 = (ulonglong)(uint)apuStack_4c[0][2] - 1;
  bVar5 = (lVar2 == 0) << 1;
  apuStack_4c[0][2] = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(apuStack_4c[0]);
  }
  lVar2 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar2;
    uVar3 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 - 1,0,lVar2);
      *puVar4 = uVar1;
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  fn_8268AFD8(auStack_40);
  return;
}

