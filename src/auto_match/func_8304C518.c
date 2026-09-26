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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8304DD90();
extern int fn_8304DE60();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


undefined8 fn_8304C518(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 auStack_40 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *(undefined2 *)(param_1 + 0x13c) = 0;
  uVar1 = fn_8304DD90(param_1,auStack_40);
  if ((int)uVar1 == 1) {
    iVar2 = fn_8304DE60(param_1,auStack_40[0]);
    if (iVar2 == 1) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_30);
      if ((*(ushort *)(param_1 + 0x1c) == 0) || (1 < *(ushort *)(param_1 + 0x1c))) {
        uStack_2c = *(undefined4 *)(param_1 + 0x4c);
        uStack_28 = *(undefined4 *)(param_1 + 0x50);
      }
      else {
        uStack_2c = 0;
        uStack_28 = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_30);
      (**(code **)(**(int **)(param_1 + 0x28) + 0x30))();
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

