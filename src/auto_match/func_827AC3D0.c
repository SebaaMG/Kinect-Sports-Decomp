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
extern int fn_8268B330();
extern int fn_8268B400();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_827A7D90();
extern int fn_827A8040();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82015E20;
extern unsigned int uStack_2c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


void fn_827AC3D0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar6;
  char *pcVar4;
  undefined8 uVar3;
  int iVar5;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte bVar10;
  uint uStack_40;
  undefined4 *puStack_3c;
  undefined4 *apuStack_38 [2];
  undefined **ppuStack_30;
  uint uStack_2c;
  uint *puStack_28;
  
  cVar6 = fn_82695468(param_1,0x1f);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar9 = 0;
    }
    if (((uVar9 & 0xffffffff) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      if ((*(int *)(param_1 + 0x1c) < 2) ||
         (pcVar4 = (char *)fn_826957D0(param_1,1), *pcVar4 == '\x01')) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_38,uVar3,uVar1,0xffffffffffffffff,0);
        if (apuStack_38[0][4] != 0) {
          fn_827A8040(uVar9 + 0x30,*(char *)*apuStack_38[0] == '.',(char *)*apuStack_38[0],
                        0xffffffffffffffff);
        }
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        fn_82696D38(&puStack_3c,uVar3,uVar1,0xffffffffffffffff,0);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        iVar5 = fn_82696958(uVar3,uVar1);
        bVar10 = (iVar5 == 0) << 1;
        apuStack_38[0] = puStack_3c;
        if (iVar5 != 0) {
          fn_8268B330(&uStack_40);
          fn_8268B610(&uStack_40,*puStack_3c,0xffffffffffffffff);
          fn_8268B400(&uStack_40,0x7b);
          uStack_2c = *(uint *)(param_1 + 0x18);
          puStack_28 = &uStack_40;
          ppuStack_30 = &lbl_82015E20;
          (**(code **)(*(int *)(iVar5 + 0x10) + 0x20))
                    (iVar5 + 0x10,(ulonglong)uStack_2c + 0x78,&ppuStack_30,0,0);
          fn_8268B400(&uStack_40,0x7d);
          fn_827A7D90(uVar9 + 0x30,(uint *)(uStack_40 & 0xfffffffc) + 2,
                        *(uint *)(uStack_40 & 0xfffffffc) & 0x7fffffff);
          ppuStack_30 = &lbl_8200C4D4;
          lVar7 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
          do {
            puVar8 = (uint *)lVar7;
            uVar9 = (ulonglong)*puVar8;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
              *puVar8 = uVar2;
              bVar10 = 2;
            }
          } while (!(bool)(bVar10 >> 1 & 1));
          apuStack_38[0] = puStack_3c;
          if (uVar9 == 1) {
            fn_8267BE38();
            apuStack_38[0] = puStack_3c;
          }
        }
      }
      uVar2 = apuStack_38[0][2];
      apuStack_38[0][2] = (int)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826944C8(apuStack_38[0]);
      }
    }
  }
  return;
}

