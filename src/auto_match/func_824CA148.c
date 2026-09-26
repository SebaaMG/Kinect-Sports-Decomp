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
extern unsigned int *auStack_54;
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_824CB858();
extern int fn_8260D428();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;


undefined4 * fn_824CA148(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [28];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [28];
  undefined1 auStack_54 [28];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar4 + 0x51) == '\0') {
    puVar3 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar3 = (undefined4 *)*param_2;
    }
    iVar1 = fn_8260D428(puVar4 + 3,0,puVar4[7],puVar3,param_2[4]);
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
    iVar1 = fn_8260D428(param_2,0,param_2[4],puVar4,puVar2[7]);
    if (-1 < iVar1) goto LAB_824ca288;
  }
  fn_82230300(auStack_a0,0,0);
  fn_8223B688(auStack_70,param_2);
  fn_8223B688(auStack_54,auStack_a0);
  uStack_38 = uStack_84;
  uStack_34 = uStack_80;
  uStack_30 = uStack_7c;
  puVar2 = (undefined4 *)fn_824CB858(auStack_b0,param_1,puVar2,auStack_70);
  puVar2 = (undefined4 *)*puVar2;
  fn_82230300(auStack_54,1,0);
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_a0,1,0);
LAB_824ca288:
  return puVar2 + 10;
}

