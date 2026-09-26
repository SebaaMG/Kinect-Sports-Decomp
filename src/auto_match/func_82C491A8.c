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
extern int fn_82F68CC0();
extern unsigned int iStack_8c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


ulonglong fn_82C491A8(int param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6070);
    if (*(int *)(iVar1 + 0x2c8) == 0) {
      if ((*(uint *)(param_1 + 0x5614) & 2) == 0) {
        uVar2 = -(ulonglong)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff9;
      }
      else {
        uStack_90 = *(undefined4 *)(param_1 + 0x5610);
        uStack_84 = 1;
        uStack_88 = *(undefined4 *)(param_1 + 0xb148);
        iStack_8c = param_1;
        fn_82F68CC0(&uStack_80,param_2,0x5c);
        uStack_7c = *(undefined4 *)(param_1 + 0x5628);
        uStack_78 = *(undefined4 *)(param_1 + 0x562c);
        uStack_80 = (uint)(*(int *)(param_1 + 0x5580) != 0);
        uVar2 = (**(code **)(iVar1 + 0xc0))(&uStack_90);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

