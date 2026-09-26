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
extern unsigned int *auStack_138;
extern unsigned int *auStack_154;
extern unsigned int *auStack_170;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_824C9CB8();
extern int fn_824CA0B8();
extern int fn_824CAEF0();
extern int fn_824CBB98();
extern int fn_8260D428();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_108;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_174;
extern unsigned int uStack_f0;


undefined4 * fn_824CA898(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_180 [2];
  undefined **ppuStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [28];
  undefined1 auStack_154 [28];
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_108;
  undefined4 uStack_f0;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [192];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar2 + 0xb9) == '\0') {
    puVar3 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar3 = (undefined4 *)*param_2;
    }
    iVar1 = fn_8260D428(puVar2 + 4,0,puVar2[8],puVar3,param_2[4]);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)puVar2[2];
    }
    else {
      puVar4 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  if (puVar4 != *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar4 + 4;
    if (0xf < (uint)puVar4[9]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    iVar1 = fn_8260D428(param_2,0,param_2[4],puVar2,puVar4[8]);
    if (-1 < iVar1) goto LAB_824caa2c;
  }
  fn_82230300(auStack_170,0,0);
  fn_82230300(auStack_154,0,0);
  fn_824CA0B8(auStack_138);
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  fn_8223B688(auStack_e0,param_2);
  fn_824CAEF0(auStack_c0,auStack_170);
  puVar2 = (undefined4 *)fn_8265C9E0(0xc0);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_174 = 0;
    ppuStack_178 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_178);
  }
  *puVar2 = *(undefined4 *)(param_1 + 4);
  puVar2[1] = *(undefined4 *)(param_1 + 4);
  puVar2[2] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(puVar2 + 0x2e) = 0;
  *(undefined1 *)((int)puVar2 + 0xb9) = 0;
  if (puVar2 + 4 != (undefined4 *)0x0) {
    fn_8223B688(puVar2 + 4,auStack_e0);
    fn_824CAEF0(puVar2 + 0xc,auStack_c0);
  }
  fn_824CBB98(apuStack_180,param_1,puVar4,puVar2);
  fn_824C9CB8(auStack_c0);
  fn_82230300(auStack_e0,1,0);
  fn_824C9CB8(auStack_170);
  puVar4 = apuStack_180[0];
LAB_824caa2c:
  return puVar4 + 0xc;
}

