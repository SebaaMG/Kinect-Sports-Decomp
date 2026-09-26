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
extern int fn_82230040();
extern int fn_82273208();
extern int fn_82273758();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_54;


undefined4 * fn_822734A0(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  byte bVar6;
  undefined4 *apuStack_60 [2];
  undefined **ppuStack_58;
  undefined4 uStack_54;
  
  puVar4 = (undefined4 *)fn_8265C9E0(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    uStack_54 = 0;
    ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_58);
  }
  puVar5 = puVar4 + 4;
  *puVar4 = *(undefined4 *)(param_2 + 4);
  puVar4[1] = *(undefined4 *)(param_2 + 4);
  puVar4[2] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(puVar4 + 0x18) = 0;
  *(undefined1 *)((int)puVar4 + 0x61) = 0;
  if (puVar5 != (uint *)0x0) {
    *puVar5 = *param_3;
    fn_82F68CC0(puVar4 + 8,param_3 + 4,0x40);
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  bVar6 = 1;
  if (*(char *)((int)puVar1[1] + 0x61) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      puVar1 = puVar2;
      bVar6 = -(*puVar5 < (uint)puVar1[4]) & 1;
      if (bVar6 == 0) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
      }
    } while (*(char *)((int)puVar2 + 0x61) == '\0');
  }
  apuStack_60[0] = puVar1;
  if (bVar6 != 0) {
    if (puVar1 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      bVar6 = 1;
      goto LAB_82273584;
    }
    fn_82273208(apuStack_60);
  }
  puVar2 = apuStack_60[0];
  if (*puVar5 <= (uint)apuStack_60[0][4]) {
    fn_8265CA20(puVar4);
    *param_1 = puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82273584:
  puVar4 = (undefined4 *)fn_82273758(apuStack_60,param_2,bVar6,puVar1,puVar4);
  uVar3 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar3;
  return param_1;
}

