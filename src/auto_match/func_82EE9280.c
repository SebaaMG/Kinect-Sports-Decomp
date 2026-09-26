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
extern int fn_8306C6E8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_82EE9280(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iStack_30;
  int iStack_2c;
  undefined4 auStack_28 [4];
  
  iStack_30 = 0;
  iStack_2c = 0;
  if (*(int *)(param_1 + 0x10ac) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x10a8);
  }
  *param_2 = 0;
  iVar2 = fn_8306C6E8(*(undefined4 *)(param_1 + 0x70),auStack_28,&iStack_2c,&iStack_30,uVar3);
  iVar1 = iStack_30;
  if (iStack_2c == 0) {
    if (iStack_30 != 0) {
      iVar4 = iStack_30 + -4;
      *(undefined4 *)(iStack_30 + 0x1c) = auStack_28[0];
      if (iVar2 == 0) {
        uVar3 = thunk_FUN_82a2b798();
        if (0 < (longlong)uVar3) {
          uVar3 = uVar3 & 0xffff | 0x80070000;
        }
        *(int *)(iVar1 + 0x18) = (int)uVar3;
      }
      *param_2 = iVar4;
      return 0;
    }
  }
  else {
    if (iStack_2c != 1) {
      return 0;
    }
    if (iStack_30 != 0) {
      (**(code **)(*(int *)(iStack_30 + -4) + 8))(iStack_30 + -4);
      return 0;
    }
  }
  thunk_FUN_82a2b798();
  return 0;
}

