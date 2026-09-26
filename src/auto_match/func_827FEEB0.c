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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827FEEB0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = lbl_821AAD20;
  uVar3 = lbl_82002AE0;
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x30);
  if ((((*(char *)(iVar2 + 0x1f) == '\0') && (*(char *)(iVar2 + 0x20) == '\0')) &&
      (*(char *)(iVar2 + 0x21) == '\0')) && (*(char *)(iVar2 + 0x22) == '\0')) {
    *param_2 = lbl_821AAD20;
    param_2[1] = uVar4;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
    return;
  }
  *param_2 = *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0xc);
  param_2[1] = *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10);
  param_2[2] = *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x14);
  param_2[3] = *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x18);
  return;
}

