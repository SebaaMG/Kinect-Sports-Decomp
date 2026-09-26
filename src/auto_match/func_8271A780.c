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
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_8271A720();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_60;
extern U64 storeWordConditionalIndexed();


void fn_8271A780(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar7;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  char in_RESERVE;
  byte bVar12;
  uint uStack_60;
  undefined4 *apuStack_5c [3];
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    uVar10 = 0;
    *puVar2 = 0;
    iVar7 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar7 == 0x19) {
      lVar11 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
      if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
        lVar11 = 0;
      }
      uVar5 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x30,0);
      bVar1 = (uVar5 & 0xffffffff) == 0;
      bVar12 = bVar1 << 1;
      if (!bVar1) {
        uVar10 = fn_826C0B08(uVar5,*(undefined4 *)(param_1 + 0x18));
      }
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_5c,uVar6,uVar3,0xffffffffffffffff,0);
      fn_8268C510(&uStack_60,*apuStack_5c[0]);
      puVar8 = (undefined4 *)fn_8271A720(lVar11 + 0x30,&uStack_60);
      lVar11 = ((ulonglong)uStack_60 & 0xfffffffc) + 4;
      do {
        puVar9 = (uint *)lVar11;
        uVar5 = (ulonglong)*puVar9;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar5 - 1,0,lVar11);
          *puVar9 = uVar4;
          bVar12 = 2;
        }
      } while (!(bool)(bVar12 >> 1 & 1));
      if (uVar5 == 1) {
        fn_8267BE38();
      }
      if (puVar8 != (undefined4 *)0x0) {
        uStack_48 = *puVar8;
        auStack_50[0] = 4;
        fn_826A79D8(uVar10 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,
                          0xffffffff8200fab0,auStack_50);
        fn_82696330(auStack_50);
        uStack_38 = puVar8[1];
        auStack_40[0] = 4;
        fn_826A79D8(uVar10 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,
                          0xffffffff8200faa4,auStack_40);
        fn_82696330(auStack_40);
      }
      fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar10);
      uVar4 = apuStack_5c[0][2];
      apuStack_5c[0][2] = (int)((ulonglong)uVar4 - 1);
      if ((ulonglong)uVar4 - 1 == 0) {
        fn_826944C8(apuStack_5c[0]);
      }
      if ((uVar10 & 0xffffffff) != 0) {
        fn_826824B0(uVar10);
      }
    }
  }
  return;
}

