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
extern int fn_829C8658();
extern int fn_829C8668();
extern unsigned int iStack_30;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_821AAD20;


void fn_82F59258(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  int iStack_30;
  undefined4 auStack_2c [5];
  
  iStack_30 = -1;
  fn_829C8658(0,0,&iStack_30);
  if (iStack_30 == 0) {
    iVar1 = fn_829C8668(0,0,(undefined4 *)(param_1 + 0x14));
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x14) = lbl_82015B38;
    }
    iVar1 = fn_829C8668(0,6,(float *)(param_1 + 0x18));
    dVar3 = (double)lbl_821AAD20;
    if (iVar1 < 0) {
      *(float *)(param_1 + 0x18) = lbl_821AAD20;
    }
    iVar1 = fn_829C8668(0,7,(float *)(param_1 + 0x1c));
    if (iVar1 < 0) {
      *(float *)(param_1 + 0x1c) = (float)dVar3;
    }
    iVar1 = fn_829C8668(0,8,(float *)(param_1 + 0x20));
    if (iVar1 < 0) {
      *(float *)(param_1 + 0x20) = (float)dVar3;
    }
  }
  else {
    iVar1 = fn_829C8658(0,2,auStack_2c);
    uVar2 = 0;
    if (-1 < iVar1) {
      uVar2 = auStack_2c[0];
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
    iVar1 = fn_829C8668(0,5,(float *)(param_1 + 0x10));
    if (iVar1 < 0) {
      *(float *)(param_1 + 0x10) = lbl_821AAD20;
    }
  }
  return;
}

