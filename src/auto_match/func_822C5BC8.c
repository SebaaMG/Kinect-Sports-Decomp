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
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AF3D0;
extern unsigned int lbl_821CC160;


undefined4 *
fn_822C5BC8(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
             undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar4 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821A8D8C;
    puVar4[2] = 1;
    if (puVar4 + 4 != (undefined4 *)0x0) {
      uVar5 = *param_4;
      uVar6 = *(undefined4 *)(param_2 + 0x114);
      uVar1 = *param_6;
      puVar4[7] = param_2;
      puVar4[8] = param_3;
      puVar4[5] = uVar5;
      puVar4[6] = uVar6;
      puVar4[4] = &lbl_821AF3D0;
      puVar2 = (undefined4 *)(param_2 + 0x80U & 0xfffffff0);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar3 = (undefined4 *)((int)puVar4 + in_r0 + 0x30 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      uVar5 = *(undefined4 *)
               (((uint)LZCOUNT(*(undefined4 *)(param_2 + 0x2c)) >> 3 & 4) + **(int **)(param_3 + 8))
      ;
      puVar4[0x12] = lbl_821CC160;
      puVar4[0x11] = param_5;
      puVar4[0x13] = 0;
      puVar4[0x14] = uVar1;
      *(undefined1 *)(puVar4 + 0x15) = 0;
      puVar4[0x10] = uVar5;
      *(undefined1 *)((int)puVar4 + 0x55) = 0;
    }
  }
  param_1[1] = puVar4;
  *param_1 = puVar4 + 4;
  return param_1;
}

