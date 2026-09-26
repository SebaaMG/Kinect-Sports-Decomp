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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_825507B0();
extern int fn_8260D428();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;
extern unsigned int uStack_54;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_8258E568(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar2 + 0x2d) == '\0') {
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
    if (-1 < iVar1) goto LAB_8258e6b0;
  }
  fn_8223B688(auStack_50,param_2);
  uStack_34 = 0;
  puVar2 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_54 = 0;
    ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_58);
  }
  *puVar2 = *(undefined4 *)(param_1 + 4);
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *(undefined1 *)((int)puVar2 + 0x2d) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    fn_8223B688(puVar2 + 3,auStack_50);
    puVar2[10] = uStack_34;
  }
  fn_825507B0(auStack_60,param_1,puVar4,puVar2);
  puVar4 = (undefined4 *)0x0;
  fn_82230300(auStack_50,1,0);
LAB_8258e6b0:
  return puVar4 + 10;
}

