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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_8251BC68();
extern int fn_8260D428();
extern unsigned int iStack_30;
extern unsigned int lbl_8329EA40;
extern unsigned int lbl_8329EA50;
extern unsigned int lbl_8329EA54;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;


undefined4 * fn_8251B5E8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar4 + 0x35) == '\0') {
    uVar3 = 0xffffffff8329ea40;
    if (0xf < lbl_8329EA54) {
      uVar3 = (ulonglong)lbl_8329EA40;
    }
    iVar1 = fn_8260D428(puVar4 + 3,0,puVar4[7],uVar3,lbl_8329EA50);
    if (iVar1 < 0) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar2 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  if (puVar2 != *(undefined4 **)(param_1 + 4)) {
    puVar4 = puVar2 + 3;
    if (0xf < (uint)puVar2[8]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar1 = fn_8260D428(0xffffffff8329ea40,0,lbl_8329EA50,puVar4,puVar2[7]);
    if (-1 < iVar1) goto LAB_8251b6f8;
  }
  fn_8223B688(auStack_50,0xffffffff8329ea40);
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  puVar2 = (undefined4 *)fn_8251BC68(auStack_60,param_1,puVar2,auStack_50);
  puVar2 = (undefined4 *)*puVar2;
  if (iStack_30 != 0) {
    fn_822315A0(iStack_30);
  }
  fn_82230300(auStack_50,1,0);
LAB_8251b6f8:
  return puVar2 + 10;
}

