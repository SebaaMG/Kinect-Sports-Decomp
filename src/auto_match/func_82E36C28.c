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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_8208DDAC;


void fn_82E36C28(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  
  fVar4 = lbl_8208DDAC;
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x50) < 0x7d01) ||
     (((0xac43 < *(int *)(iVar1 + 0x50) && (*(float *)(iVar1 + 0x30) <= lbl_8208DDAC)) &&
      ((param_1[5] == 0 || ((param_1[8] != 0 || (param_1[7] != 0)))))))) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  param_1[0x4244] = lbl_820288E4;
  iVar3 = lbl_82002C5C;
  iVar2 = lbl_82002AE0;
  param_1[0x4245] = lbl_82005718;
  param_1[0x4243] = iVar5;
  param_1[0x4246] = iVar3;
  param_1[0x4247] = iVar2;
  if (fVar4 < *(float *)(iVar1 + 0x30)) {
    param_1[0x4243] = 1;
    iVar1 = lbl_8200D898;
    param_1[0x4246] = lbl_8200D8C4;
    param_1[0x4247] = iVar1;
  }
  return;
}

