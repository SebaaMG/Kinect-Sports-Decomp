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
extern int fn_82AC6560();
extern int fn_82AD1978();


uint * fn_82AD1A40(int *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_1;
  do {
    if (puVar5 == (uint *)0x0) {
      iVar4 = fn_82AC6560(param_3,0x14,0x1a);
      *(uint *)(iVar4 + 0xc) = param_2;
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar4;
      puVar5 = (uint *)fn_82AD1978(param_1,iVar4);
      return puVar5;
    }
    uVar1 = *puVar5;
    uVar3 = uVar1 >> 0x1e & 1;
    if (uVar3 == 0) {
      bVar2 = true;
      if ((uVar1 & 0xe000000) != 0) goto LAB_82ad1a64;
    }
    else {
LAB_82ad1a64:
      bVar2 = false;
    }
    if ((bVar2) && (puVar5[3] == param_2)) {
      if (uVar3 == 0) {
        bVar2 = true;
        if ((uVar1 & 0xe000000) != 0) goto LAB_82ad1a90;
      }
      else {
LAB_82ad1a90:
        bVar2 = false;
      }
      if (bVar2) {
        bVar2 = true;
        if ((uVar1 & 0x1ffe000) == 0) goto LAB_82ad1aa8;
      }
      else {
LAB_82ad1aa8:
        bVar2 = false;
      }
      if (!bVar2) {
        return puVar5;
      }
    }
    puVar5 = (uint *)puVar5[1];
  } while( true );
}

