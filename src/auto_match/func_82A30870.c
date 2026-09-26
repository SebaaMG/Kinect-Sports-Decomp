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
extern int fn_82A2E6A8();
extern int fn_82A2F770();
extern unsigned int uStack_30;


undefined8 fn_82A30870(undefined8 param_1,int param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined1 auStack_2c [44];
  
  uVar1 = fn_82A2E6A8(param_1,param_2,param_3 - 1,&uStack_30,auStack_2c,0);
  if (-1 < (int)uVar1) {
    uVar1 = fn_82A2F770(param_1,uStack_30,1,0);
    if (-1 < (int)uVar1) {
      *(undefined4 *)(param_2 + 0x24) = uStack_30;
      uVar2 = (undefined4)param_3;
      *(undefined4 *)(param_2 + 0x14) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
      if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x18)) {
        *(undefined4 *)(param_2 + 0x18) = uVar2;
      }
      if ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x1c)) {
        *(undefined4 *)(param_2 + 0x1c) = uVar2;
      }
      uVar1 = 0;
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x10;
    }
  }
  return uVar1;
}

