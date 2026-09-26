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
extern unsigned int *auStack_40;
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C11AE0();
extern unsigned int iStack_3c;
extern unsigned int uStack_38;


void fn_82C07298(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 *apuStack_34 [13];
  
  uStack_38 = 0;
  iStack_3c = 0;
  auStack_40[0] = 0;
  apuStack_34[0] = (undefined4 *)0x0;
  iVar1 = fn_82C10F68(param_1[0x8f],&uStack_38,apuStack_34,auStack_40);
  if (iVar1 != -0x7fafffea) {
    if (iVar1 < 0) {
      return;
    }
    do {
      if (iVar1 < 0) {
        return;
      }
      iVar1 = fn_82C11AE0(*apuStack_34[0]);
      if (iVar1 < 0) {
        return;
      }
      iVar1 = fn_82C10FD0(param_1[0x8f],uStack_38,apuStack_34,auStack_40);
    } while (iVar1 != -0x7fafffea);
  }
  fn_82C11038(param_1[0x8f],uStack_38);
  iVar1 = fn_82C10F68(param_1[0x8e],&uStack_38,&iStack_3c,auStack_40);
  if (iVar1 != -0x7fafffea) {
    if (iVar1 < 0) {
      return;
    }
    do {
      if (iVar1 < 0) {
        return;
      }
      if (*(int *)(iStack_3c + 4) == 3) {
        *(undefined4 *)(iStack_3c + 4) = 1;
      }
      else if (*(int *)(iStack_3c + 4) == 2) {
        *(undefined4 *)(iStack_3c + 4) = 0;
      }
      *(undefined4 *)(iStack_3c + 0x10) = 0;
      *(undefined1 *)(iStack_3c + 0x14) = 0;
      *(undefined4 *)(iStack_3c + 8) = 0;
      *(undefined4 *)(iStack_3c + 0xc) = 0;
      *(undefined4 *)(iStack_3c + 0x50) = 0;
      *(undefined4 *)(iStack_3c + 0x18) = 0;
      *(undefined4 *)(iStack_3c + 0x1c) = 0;
      iVar1 = fn_82C10FD0(param_1[0x8e],uStack_38,&iStack_3c,auStack_40);
    } while (iVar1 != -0x7fafffea);
  }
  fn_82C11038(param_1[0x8e],uStack_38);
  iVar1 = (**(code **)(*param_1 + 0x14))(*param_1,param_2);
  if (-1 < iVar1) {
    *(undefined8 *)(param_1 + 0x8c) = param_2;
    param_1[0x86] = 0;
    param_1[0x85] = 2;
    param_1[0x8b] = 1;
    param_1[0x93] = 0;
    param_1[0x9e] = 0;
  }
  return;
}

