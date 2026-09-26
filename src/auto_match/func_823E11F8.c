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
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_823E1690();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_64;


undefined4 * fn_823E11F8(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *apuStack_70 [2];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [96];
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x51) == '\0') {
    puVar3 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar3[4] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x51) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar5[4])) {
    pppuVar4 = &ppuStack_68;
    lVar6 = 6;
    do {
      pppuVar4 = pppuVar4 + 2;
      pppuVar4[0] = (undefined **)0x0;
      pppuVar4[1] = (undefined **)0x0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = *param_2;
    puVar3 = (undefined4 *)fn_8265C9E0(0x60);
    if (puVar3 == (undefined4 *)0x0) {
      uStack_64 = 0;
      ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_68);
    }
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar3 + 0x14) = 0;
    *(undefined1 *)((int)puVar3 + 0x51) = 0;
    if (puVar3 + 4 != (uint *)0x0) {
      puVar3[4] = uVar2;
      fn_82F68CC0(puVar3 + 8,auStack_60,0x30);
    }
    fn_823E1690(apuStack_70,param_1,puVar5,puVar3);
    puVar5 = apuStack_70[0];
  }
  return puVar5 + 8;
}

