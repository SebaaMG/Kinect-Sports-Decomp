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
extern unsigned int *auStack_2c;
extern unsigned int lbl_820D1708;
extern unsigned int uStack_30;


/* WARNING: Type propagation algorithm not settling */

undefined4 * fn_82A8B0B0(undefined4 *param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_30;
  uint auStack_2c [11];
  
  param_1[1] = param_2;
  uVar1 = param_4 + 0xfU & 0xfffffff0;
  param_1[3] = 0;
  *param_1 = &lbl_820D1708;
  param_1[2] = (int)uVar1;
  puVar3 = param_1 + 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (0x1ca0e < param_3) {
    uStack_30 = 0x9800;
    auStack_2c[1] = 0x8000;
    auStack_2c[2] = 0x8000;
    auStack_2c[0] = 0x8000;
    iVar2 = LDICreateDecompression(auStack_2c,auStack_2c + 1,0,0,uVar1 + 0x11800,&uStack_30,puVar3);
    if (iVar2 == 0) {
      if ((0x97ff < uStack_30) && (0x7fff < auStack_2c[0])) goto LAB_82a8b178;
      LDIDestroyDecompression(*puVar3);
    }
    *puVar3 = 0;
  }
LAB_82a8b178:
  (**(code **)(*(int *)param_1[1] + 4))();
  return param_1;
}

