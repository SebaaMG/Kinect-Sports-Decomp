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
extern int fn_8284C760();
extern int fn_8284D400();
extern int fn_82A93C18();
extern int fn_82A93D70();
extern int fn_82A93DE0();
extern int fn_82A93EA8();


undefined8 fn_82837BA0(undefined8 param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    fn_82A93C18(*(undefined2 *)(param_2 + 0x24),*(undefined2 *)(param_2 + 0x26),
                      *(undefined1 *)(param_2 + 0x30),0,*(undefined4 *)(param_2 + 0x18),0,
                      *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  }
  else if (iVar2 == 2) {
    fn_82A93D70(*(undefined2 *)(param_2 + 0x24),*(undefined1 *)(param_2 + 0x30),0,
                      *(undefined4 *)(param_2 + 0x18),1,*(undefined4 *)(param_2 + 0x28),
                      *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x34));
  }
  else if (iVar2 == 3) {
    fn_82A93EA8(*(undefined2 *)(param_2 + 0x24),*(undefined2 *)(param_2 + 0x26),
                    *(undefined4 *)(param_2 + 0x38),*(undefined1 *)(param_2 + 0x30),0,
                    *(undefined4 *)(param_2 + 0x18),0,*(undefined4 *)(param_2 + 0x28));
  }
  else if (iVar2 == 4) {
    uVar3 = 0;
    if (*(int *)(param_2 + 0x38) != 0) {
      iVar2 = 0;
      do {
        fn_82A93C18(*(undefined4 *)(iVar2 + *(int *)(param_2 + 0x44)),
                          *(undefined4 *)(iVar2 + *(int *)(param_2 + 0x48)),
                          *(undefined4 *)(iVar2 + *(int *)(param_2 + 0x4c)),0,
                          *(undefined4 *)(param_2 + 0x18),0,
                          *(undefined4 *)(iVar2 + *(int *)(param_2 + 0x3c)),
                          *(undefined4 *)(iVar2 + *(int *)(param_2 + 0x40)));
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar3 < *(uint *)(param_2 + 0x38));
    }
  }
  else if (iVar2 == 5) {
    fn_82A93DE0(*(undefined2 *)(param_2 + 0x24),*(undefined2 *)(param_2 + 0x26),
                      *(undefined4 *)(param_2 + 0x38),*(undefined1 *)(param_2 + 0x30),0,
                      *(undefined4 *)(param_2 + 0x18),0,*(undefined4 *)(param_2 + 0x28));
  }
  iVar2 = fn_8284C760();
  if (iVar2 != 0) {
    uVar1 = fn_8284C760();
    fn_8284D400(param_2,uVar1);
  }
  return 0;
}

