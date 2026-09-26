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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82230040();
extern int fn_8228E658();
extern int fn_82514110();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82513E08(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined4 *puVar7;
  char in_RESERVE;
  byte bVar8;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined **ppuStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  
  puVar7 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar7[1] + 0x19) == '\0') {
    puVar3 = (undefined4 *)puVar7[1];
    do {
      if ((uint)puVar3[3] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        puVar7 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  if ((puVar7 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar7[3])) {
    uStack_40 = *param_2;
    puStack_50 = (undefined4 *)0x0;
    uStack_4c = 0;
    uStack_3c = 0;
    piStack_38 = (int *)0x0;
    fn_8228E658(&uStack_3c,&puStack_50);
    puVar3 = (undefined4 *)fn_8265C9E0(0x1c);
    if (puVar3 == (undefined4 *)0x0) {
      uStack_44 = 0;
      ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_48);
    }
    puVar6 = puVar3 + 3;
    bVar8 = (puVar6 == (uint *)0x0) << 1;
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 0x19) = 0;
    if (puVar6 != (uint *)0x0) {
      *puVar6 = uStack_40;
      puVar3[4] = 0;
      puVar3[5] = 0;
      fn_8228E658(puVar3 + 4,&uStack_3c);
    }
    fn_82514110(&puStack_50,param_1,puVar7,puVar3);
    puVar7 = puStack_50;
    if (ZEXT48(piStack_38) != 0) {
      lVar5 = ZEXT48(piStack_38) + 8;
      do {
        puVar6 = (uint *)lVar5;
        lVar4 = (ulonglong)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar4,0,lVar5);
          *puVar6 = uVar2;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      if ((int)lVar4 == 0) {
        (**(code **)(*piStack_38 + 4))();
      }
    }
  }
  return puVar7 + 4;
}

