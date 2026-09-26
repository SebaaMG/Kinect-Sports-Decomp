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
extern int fn_82A29AC0();


undefined8 fn_82C056D8(int *param_1)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_40 [64];
  
  uVar4 = 0;
  if (param_1[0xb] != -1) {
    uVar5 = 0;
    piVar1 = (int *)param_1[0x21];
    if (param_1[0x1b] != 0) {
      do {
        iVar3 = (**(code **)(*piVar1 + 0x38))(piVar1);
        if (iVar3 == 0) {
          uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1);
          iVar3 = fn_82A29AC0(param_1[0xb],uVar2,auStack_40,1);
          if (((iVar3 == 0) && (iVar3 = thunk_FUN_82a2b798(), iVar3 != 0x26)) && (iVar3 != 0x3e3)) {
            uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
          }
          (**(code **)(*piVar1 + 0x34))(piVar1,1);
        }
        (**(code **)(*piVar1 + 0x44))(piVar1,0);
        uVar5 = uVar5 + 1;
        piVar1 = (int *)piVar1[2];
      } while (uVar5 < (uint)param_1[0x1b]);
    }
  }
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return uVar4;
}

