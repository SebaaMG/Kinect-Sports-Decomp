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
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822B3F70();
extern int fn_822B4040();
extern int fn_822B44F0();
extern int fn_822B4718();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_70;
extern unsigned int uStack_a4;


undefined4 * fn_822B41D0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_b0 [2];
  undefined **ppuStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [48];
  uint uStack_70;
  undefined1 auStack_60 [96];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x51) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar3[4] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x51) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar4[4])) {
    uVar2 = fn_822B3F70(auStack_a0);
    uStack_70 = *param_2;
    fn_822B44F0(auStack_60,uVar2);
    puVar3 = (undefined4 *)fn_8265C9E0(0x60);
    if (puVar3 == (undefined4 *)0x0) {
      uStack_a4 = 0;
      ppuStack_a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_a8);
    }
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar3 + 0x14) = 0;
    *(undefined1 *)((int)puVar3 + 0x51) = 0;
    if (puVar3 + 4 != (uint *)0x0) {
      puVar3[4] = uStack_70;
      fn_822B44F0(puVar3 + 8,auStack_60);
    }
    fn_822B4718(apuStack_b0,param_1,puVar4,puVar3);
    fn_822B4040(auStack_60);
    fn_822B4040(auStack_a0);
    puVar4 = apuStack_b0[0];
  }
  return puVar4 + 8;
}

