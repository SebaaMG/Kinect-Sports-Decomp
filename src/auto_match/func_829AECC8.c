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
extern unsigned int *auStack_570;
extern int fn_829AB2C0();
extern int fn_829AB368();
extern int fn_829B50F8();
extern int fn_829B8840();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_829AECC8(int param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_570 [1392];
  
  if (param_2 != 0) {
    fn_829AB368();
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_829AB368(param_1,param_3);
  }
  fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x59c));
  fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x5dc));
  fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x5d8));
  fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x674));
  fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x678));
  fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x638));
  if ((*(uint *)(param_1 + 0x55c) & 0x1000) != 0) {
    fn_829AB2C0(param_1,*(undefined4 *)(param_1 + 0x604));
  }
  if ((*(uint *)(param_1 + 0x55c) & 0x2000) != 0) {
    fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x65c));
  }
  if (*(int *)(param_1 + 0x644) != 0) {
    uVar2 = (ulonglong)(uint)(1 << (8U - *(int *)(param_1 + 0x62c) & 0x3f));
    if (uVar2 != 0) {
      iVar1 = 0;
      do {
        fn_829B50F8(param_1,*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x644)));
        uVar2 = uVar2 - 1;
        iVar1 = iVar1 + 4;
      } while (uVar2 != 0);
    }
    fn_829B50F8(param_1,*(undefined4 *)(param_1 + 0x644));
  }
  fn_829B8840(param_1 + 0x564);
  fn_82F68CC0(auStack_570,param_1,0x540);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x6a0);
}

