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
extern int fn_82230040();
extern int fn_8223B688();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


undefined4 * fn_824CB450(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x51) == '\0') {
    puVar1 = (undefined4 *)fn_8265C9E0(0x54);
    if (puVar1 == (undefined4 *)0x0) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    *puVar1 = *(undefined4 *)(param_1 + 4);
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(puVar1 + 0x14) = 0;
    *(undefined1 *)((int)puVar1 + 0x51) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      fn_8223B688(puVar1 + 3,param_2 + 3);
      fn_8223B688(puVar1 + 10,param_2 + 10);
      puVar1[0x11] = param_2[0x11];
      puVar1[0x12] = param_2[0x12];
      puVar1[0x13] = param_2[0x13];
    }
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    if (*(char *)((int)puVar3 + 0x51) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = fn_824CB450(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = fn_824CB450(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  return puVar3;
}

