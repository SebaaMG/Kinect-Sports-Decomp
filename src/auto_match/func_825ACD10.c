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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_6c;
extern int fn_82230040();
extern int fn_825AD738();
extern int fn_825AD818();
extern int fn_825AE028();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;


undefined4 * fn_825ACD10(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_70;
  undefined1 auStack_6c [4];
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [4];
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x21) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar3[3] < *param_2) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x21) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar4[3])) {
    uVar2 = *param_2;
    uStack_48 = 0;
    puStack_4c = (undefined4 *)fn_8265C9E0(0x1c);
    if (puStack_4c == (undefined4 *)0x0) {
      uStack_5c = 0;
      ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_60);
    }
    *puStack_4c = puStack_4c;
    puStack_4c[1] = puStack_4c;
    puStack_4c[2] = puStack_4c;
    *(undefined1 *)(puStack_4c + 6) = 1;
    *(undefined1 *)((int)puStack_4c + 0x19) = 1;
    uStack_40 = uVar2;
    fn_825AD818(auStack_3c,auStack_50);
    puVar3 = (undefined4 *)fn_8265C9E0(0x24);
    if (puVar3 == (undefined4 *)0x0) {
      uStack_64 = 0;
      ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_68);
    }
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined1 *)((int)puVar3 + 0x21) = 0;
    if (puVar3 + 3 != (uint *)0x0) {
      puVar3[3] = uStack_40;
      fn_825AD818(puVar3 + 4,auStack_3c);
    }
    fn_825AE028(&puStack_70,param_1,puVar4,puVar3);
    fn_825AD738(auStack_6c,auStack_3c,*puStack_38);
    fn_8265CA20(puStack_38);
    fn_825AD738(auStack_6c,auStack_50,*puStack_4c);
    fn_8265CA20(puStack_4c);
    puVar4 = puStack_70;
  }
  return puVar4 + 4;
}

