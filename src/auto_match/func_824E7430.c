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
extern unsigned int *auStack_90;
extern int fn_8260D428();
extern int fn_82F691F0();


undefined4 * fn_824E7430(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [144];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar3 + 0x91) == '\0') {
    puVar2 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar2 = (undefined4 *)*param_2;
    }
    iVar1 = fn_8260D428(puVar3 + 3,0,puVar3[7],puVar2,param_2[4]);
    if (iVar1 < 0) {
      puVar3 = (undefined4 *)puVar3[2];
    }
    else {
      puVar4 = puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  if (puVar4 != *(undefined4 **)(param_1 + 4)) {
    puVar3 = puVar4 + 3;
    if (0xf < (uint)puVar4[8]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar1 = fn_8260D428(param_2,0,param_2[4],puVar3,puVar4[7]);
    if (-1 < iVar1) {
      return puVar4 + 10;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_90,0,0x68);
}

