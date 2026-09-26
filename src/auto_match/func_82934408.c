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
extern unsigned int *auStack_28;
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


undefined8 fn_82934408(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iStack_30;
  uint uStack_2c;
  uint auStack_28 [10];
  
  if (param_3 == (uint *)0x0) {
    param_3 = auStack_28;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 9) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 == 1) || (iVar1 == 0)) {
      *param_2 = 1;
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    else if (iVar1 == 2) {
      *param_2 = *(int *)(param_1 + 0x20);
      uVar3 = *(uint *)(param_1 + 0x1c);
    }
    else {
      if (iVar1 != 3) {
        return 0xffffffff80004005;
      }
      uVar3 = 1;
      *param_2 = 1;
    }
    *param_3 = uVar3;
  }
  else if (iVar1 == 8) {
    uVar2 = fn_82934408(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *param_2 = *(int *)(param_1 + 0x14) * *param_2;
  }
  else {
    if (iVar1 != 1) {
      return 0xffffffff80004005;
    }
    *param_2 = 0;
    *param_3 = 0;
    do {
      uVar2 = fn_82934408(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 0x30),
                            &iStack_30,&uStack_2c);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *param_2 = *param_2 + iStack_30;
      uVar3 = *param_3;
      if (*param_3 < uStack_2c) {
        uVar3 = uStack_2c;
      }
      *param_3 = uVar3;
      param_1 = *(int *)(param_1 + 0xc);
    } while (param_1 != 0);
  }
  return 0;
}

