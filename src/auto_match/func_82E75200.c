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
extern int fn_82BA02A8();
extern int fn_82E41840();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEAD70();
extern int fn_82EEADA0();
extern int fn_82EEADD8();
extern unsigned int uStack_30;


longlong fn_82E75200(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uStack_30;
  uint auStack_2c [11];
  
  iVar1 = *(int *)(param_1 + 0x5c);
  auStack_2c[0] = 0;
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_82E4FE40(iVar1);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar2 = fn_82E50BE8(0x38,0,0,0,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82EEAD70(uVar2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) * 10000);
  }
  *(int *)(param_1 + 0x5c) = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = fn_82EEADA0(uVar2,*(undefined8 *)(param_1 + 0x28));
    if (-1 < lVar3) {
      uStack_30 = 0;
      lVar3 = fn_82EEADD8(*(undefined4 *)(param_1 + 0x5c),&uStack_30);
      if ((-1 < lVar3) &&
         (lVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                            (*(int **)(param_1 + 0x10),auStack_2c), -1 < lVar3)) {
        if ((auStack_2c[0] & 1) != 0) {
          uStack_30 = uStack_30 | 1;
        }
        lVar3 = fn_82E41840(*(undefined4 *)(param_1 + 0x5c),uStack_30);
        if (-1 < lVar3) {
          *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x34) = 0x72;
          return lVar3;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_82E4FE40(iVar1);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return lVar3;
}

