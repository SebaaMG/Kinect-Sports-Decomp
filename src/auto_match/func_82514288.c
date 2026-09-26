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
extern int fn_8225F028();
extern int fn_825143C8();
extern int fn_8265CA20();
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82514288(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  byte bVar8;
  char in_RESERVE;
  byte bVar9;
  undefined4 *apuStack_50 [20];
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  bVar8 = 1;
  if (*(char *)((int)puVar4[1] + 0x19) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar1;
      bVar8 = -(*(uint *)(param_3 + 0xc) < (uint)puVar4[3]) & 1;
      if (bVar8 == 0) {
        puVar1 = (undefined4 *)puVar4[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  bVar9 = (bVar8 == 0) << 1;
  apuStack_50[0] = puVar4;
  if (bVar8 != 0) {
    if (puVar4 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      bVar8 = 1;
      goto LAB_82514318;
    }
    fn_8225F028(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(uint *)(param_3 + 0xc) <= (uint)apuStack_50[0][3]) {
    piVar2 = *(int **)(param_3 + 0x14);
    if (ZEXT48(piVar2) != 0) {
      lVar5 = ZEXT48(piVar2) + 8;
      do {
        puVar6 = (uint *)lVar5;
        lVar7 = (ulonglong)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(lVar7,0,lVar5);
          *puVar6 = uVar3;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if ((int)lVar7 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82514318:
  puVar4 = (undefined4 *)fn_825143C8(apuStack_50,param_2,bVar8,puVar4,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar4;
  return param_1;
}

