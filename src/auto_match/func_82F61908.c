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
extern int fn_82A1E7D8();
extern int fn_82A1F2F8();
extern int fn_82BFE9D8();
extern int fn_82F61358();


undefined8 fn_82F61908(int param_1,longlong param_2,int param_3,undefined4 *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_82A1F2F8();
  do {
    if (*(int *)(param_1 + 0x2c) < 1) break;
    fn_82F61358(param_1);
    iVar2 = fn_82A1F2F8();
  } while ((uint)(iVar2 - iVar1) < param_5);
  if (*(int *)(param_1 + 0x2c) < 1) {
    uVar3 = 0;
    fn_82A1E7D8(*(undefined4 *)(param_1 + 0x24));
    if (0 < (int)param_2) {
      puVar4 = param_4;
      do {
        iVar1 = *(int *)((param_3 - (int)param_4) + (int)puVar4);
        if (param_4 != (undefined4 *)0x0) {
          *puVar4 = *(undefined4 *)(iVar1 * 0x14 + *(int *)(param_1 + 0x40) + 0xc);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        iVar1 = iVar1 * 0x14;
        *(undefined4 *)(iVar1 + iVar2) = 0;
        iVar1 = iVar1 + iVar2;
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        fn_82BFE9D8(*(undefined4 *)(param_1 + 0x30));
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 1;
      } while (param_2 != 0);
    }
  }
  else {
    uVar3 = 0x2240401;
  }
  return uVar3;
}

