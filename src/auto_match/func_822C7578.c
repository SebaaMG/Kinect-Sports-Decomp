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
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_822C7978();
extern int fn_8260D428();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_84;


undefined4 * fn_822C7578(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_90 [2];
  undefined **ppuStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [28];
  undefined1 auStack_44 [68];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar2 + 0x45) == '\0') {
    puVar3 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar3 = (undefined4 *)*param_2;
    }
    iVar1 = fn_8260D428(puVar2 + 3,0,puVar2[7],puVar3,param_2[4]);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)puVar2[2];
    }
    else {
      puVar4 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  if (puVar4 != *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar4 + 3;
    if (0xf < (uint)puVar4[8]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    iVar1 = fn_8260D428(param_2,0,param_2[4],puVar2,puVar4[7]);
    if (-1 < iVar1) goto LAB_822c76f0;
  }
  fn_82230300(auStack_80,0,0);
  fn_8223B688(auStack_60,param_2);
  fn_82240378(auStack_44,auStack_80);
  puVar2 = (undefined4 *)fn_8265C9E0(0x48);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_84 = 0;
    ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_88);
  }
  *puVar2 = *(undefined4 *)(param_1 + 4);
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(puVar2 + 0x11) = 0;
  *(undefined1 *)((int)puVar2 + 0x45) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    fn_8223B688(puVar2 + 3,auStack_60);
    fn_82240378(puVar2 + 10,auStack_44);
  }
  fn_822C7978(apuStack_90,param_1,puVar4,puVar2);
  fn_82230300(auStack_44,1,0);
  fn_82230300(auStack_60,1,0);
  fn_82230300(auStack_80,1,0);
  puVar4 = apuStack_90[0];
LAB_822c76f0:
  return puVar4 + 10;
}

