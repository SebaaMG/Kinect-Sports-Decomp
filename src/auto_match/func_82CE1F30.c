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
extern int fn_82CE2830();
extern unsigned int uStack_44;


void fn_82CE1F30(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4,int *param_5,
                  uint *param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_50 [12];
  uint uStack_44;
  
  iVar1 = fn_82CE2830(0xffffffff8323a8f0,param_1,auStack_50);
  if (-1 < iVar1) {
    if ((param_2 & 8) == 0) {
      param_3 = (ulonglong)uStack_44;
    }
    if ((param_2 & 0x100) != 0) {
      param_3 = (param_3 + 0x10 & 0xfffffff0) + 0x104;
    }
    uVar2 = (int)((param_3 * 0x78 & 0xffffffff) / 100) + 3U & 0xfffffffc;
    if (param_6 != (uint *)0x0) {
      *param_6 = uVar2;
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0x1000;
    }
    if (param_5 != (int *)0x0) {
      iVar1 = 0x4c;
      if ((param_2 & 2) != 0) {
        iVar1 = 0x50;
      }
      if ((param_2 & 0x200) != 0) {
        iVar1 = iVar1 + 4;
      }
      *param_5 = iVar1 + uVar2 + param_4 + 0x2e20;
    }
  }
  return;
}

