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
#define TBLr 0
extern int fn_82645110();
extern int fn_82646E80();
extern int fn_82646F48();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


void fn_826452A8(int param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  int in_r13;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x2a9c);
  if ((uint)(iVar2 - param_2) < (uint)(iVar2 - **(int **)(param_1 + 0x2a90))) {
    if ((param_4 == '\0') && (param_2 == iVar2)) {
      if (*(int *)(param_1 + 0x3460) != 0) {
        return;
      }
      fn_82645110();
    }
    if ((uint)(*(int *)(param_1 + 0x2a9c) - param_2) <
        (uint)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90))) {
      iStack_38 = **(int **)(param_1 + 0x2a90);
      uStack_34 = *(undefined4 *)(*(int *)(in_r13 + 0x100) + 0x58);
      uVar1 = TBLr;
      uStack_2c = (undefined4)uVar1;
      iStack_40 = param_1;
      uStack_3c = param_3;
      uStack_30 = uStack_34;
      if ((uint)(*(int *)(param_1 + 0x2a9c) - param_2) <
          (uint)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90))) {
        do {
          iVar2 = fn_82646F48(&iStack_40);
          if (iVar2 == 0) break;
        } while ((uint)(*(int *)(param_1 + 0x2a9c) - param_2) <
                 (uint)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90)));
      }
      fn_82646E80(&iStack_40);
    }
  }
  return;
}

