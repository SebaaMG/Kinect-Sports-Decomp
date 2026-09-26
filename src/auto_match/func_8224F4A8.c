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
extern int fn_8224F398();
extern int fn_82520D38();
extern int fn_8265C9E0();
extern unsigned int lbl_82197E2C;
extern unsigned int lbl_821CC160;


undefined4 * fn_8224F4A8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  fn_82520D38();
  *param_1 = &lbl_82197E2C;
  iVar2 = fn_8265C9E0(0x40);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8224F398();
  }
  param_1[10] = uVar3;
  puVar4 = (undefined4 *)fn_8265C9E0(100);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_8224F398(puVar4 + 3);
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = 1;
    *(undefined1 *)(puVar4 + 0x13) = 0;
    *(undefined1 *)((int)puVar4 + 0x4d) = 0;
    puVar4[0x14] = 0;
    *(undefined1 *)(puVar4 + 0x15) = 0;
    puVar4[0x18] = 0;
  }
  param_1[0xb] = puVar4;
  param_1[0xc] = *(undefined4 *)(param_2 + 0x48);
  uVar1 = lbl_821CC160;
  param_1[0xd] = *(undefined4 *)(param_2 + 0x4c);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x50);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  return param_1;
}

