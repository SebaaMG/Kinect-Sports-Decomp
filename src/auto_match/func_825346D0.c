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
extern int fn_82230040();
extern int fn_82292780();
extern int fn_82537040();
extern int fn_8265C9E0();
extern int fn_828647A8();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_5c;


undefined8 fn_825346D0(int param_1,int param_2,undefined8 param_3)

{
  char cVar3;
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar4;
  undefined4 *apuStack_70 [2];
  undefined4 *apuStack_68 [2];
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [80];
  
  fn_828648F0(auStack_50,param_3);
  param_1 = param_2 * 0x10 + param_1;
  fn_828647D8(auStack_50);
  apuStack_70[0] = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 8))[1];
  while (*(char *)((int)puVar2 + 0x31) == '\0') {
    cVar3 = fn_828647A8(puVar2 + 3,auStack_50);
    if (cVar3 == '\0') {
      apuStack_70[0] = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
    else {
      puVar2 = (undefined4 *)puVar2[2];
    }
  }
  if (apuStack_70[0] != *(undefined4 **)(param_1 + 8)) {
    cVar3 = fn_828647A8(auStack_50,apuStack_70[0] + 3);
    if (cVar3 == '\0') {
      ppuVar4 = apuStack_70;
      goto LAB_82534778;
    }
  }
  apuStack_68[0] = *(undefined4 **)(param_1 + 8);
  ppuVar4 = apuStack_68;
LAB_82534778:
  if (*ppuVar4 == *(undefined4 **)(param_1 + 8)) {
    puVar2 = (undefined4 *)fn_8265C9E0(0x34);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_5c = 0;
      ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_60);
    }
    *puVar2 = *(undefined4 *)(param_1 + 8);
    puVar2[1] = *(undefined4 *)(param_1 + 8);
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((int)puVar2 + 0x31) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      fn_82292780(puVar2 + 3,auStack_50);
    }
    fn_82537040(apuStack_68,param_1 + 4,puVar2);
    fn_82864898(auStack_50);
    uVar1 = 0;
  }
  else {
    fn_82864898(auStack_50);
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

