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
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


undefined8 fn_83006278(int *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[10];
  if (iVar2 == 0) {
    if ((param_2 & 0xffffffff) == 0) {
      return 1;
    }
    puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x40);
    param_1[10] = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1[6] = 0xffffffff;
      puVar1[7] = 0;
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[9] = 0xffffffff;
      puVar1[10] = 0;
      *(undefined1 *)(puVar1 + 0xb) = 0;
      puVar1[0xc] = 0xffffffff;
      puVar1[0xd] = 0;
      *(undefined1 *)(puVar1 + 0xe) = 0;
      *(undefined1 *)(puVar1 + 0xf) = 0;
    }
    iVar2 = param_1[10];
    if (iVar2 == 0) {
      return 0x34;
    }
  }
  *(byte *)(iVar2 + 0x3c) = *(byte *)(iVar2 + 0x3c) & ~(byte)param_3 | (byte)param_2;
  (**(code **)(*param_1 + 0x14))(param_1);
  (**(code **)(*param_1 + 0xe4))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3,0,0);
  return 1;
}

