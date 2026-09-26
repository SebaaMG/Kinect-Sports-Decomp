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
extern int fn_829548C8();
extern int fn_8295D0A8();
extern int fn_82975B00();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82961218(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack0000001c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  iVar2 = *(int *)(param_2 * 4 + param_1[5]);
  iStack0000001c = param_2;
  if (*(ushort *)((int)param_1 + 0xca) < 0x101) {
    fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),0x119f,0xffffffff82038730);
    uVar3 = 0xffffffff80004001;
  }
  else {
    iVar1 = *(int *)(iVar2 + 8);
    if ((iVar1 == -1) || (uVar3 = fn_82961218(param_1,iVar1), -1 < (int)uVar3)) {
      if (param_1[0x4f] != iStack0000001c) {
        uVar3 = fn_8295D0A8(param_1,1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffffb0000000,0x10000,0);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*param_1 + 0x148))(param_1,iVar2,auStack_28,&uStack_30);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*param_1 + 0x14c))(param_1,&stack0x0000001c,1,0x10000,&uStack_2c);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*param_1 + 0x13c))(param_1,auStack_28[0],uStack_2c,uStack_30);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = (**(code **)(*param_1 + 0x134))(param_1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = fn_829548C8(param_1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        param_1[0x4f] = iStack0000001c;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

