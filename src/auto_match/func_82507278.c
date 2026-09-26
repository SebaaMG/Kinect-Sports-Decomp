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
extern int fn_82507590();
extern int fn_828EB518();
extern int fn_82A81B88();


undefined8 fn_82507278(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0xf58) = 0;
  *(undefined8 *)(param_1 + 0xf60) = 0;
  *(undefined8 *)(param_1 + 0xf68) = 0;
  *(undefined4 *)(param_1 + 0xf70) = 0;
  *(undefined4 *)(param_1 + 0xffc) = *(undefined4 *)(param_2 + 0x5d8);
  if (*(int *)(param_2 + 0xd4) != 0) goto LAB_82507340;
  iVar1 = *(int *)(param_2 + 0x5bc);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff831c2a10;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        if ((-1 < *(int *)(param_2 + 0x5dc)) && (*(int *)(param_2 + 0x5dc) != 0xff)) {
          fn_828EB518();
        }
      }
      else if (iVar1 != 4) {
        uVar2 = 0xffffffff831c2240;
        goto LAB_82507338;
      }
      fn_82A81B88(3,1,param_1 + 0xb6f,param_1 + 0xf58);
      *(undefined1 *)(param_1 + 0xb6e) = 1;
      *(undefined1 *)(param_1 + 0xb6d) = 1;
      goto LAB_82507340;
    }
    uVar2 = 0xffffffff831c2628;
  }
LAB_82507338:
  fn_82507590(param_1,uVar2);
LAB_82507340:
  *(undefined4 *)(param_1 + 0xff4) = *(undefined4 *)(param_2 + 0x5bc);
  *(char *)(param_1 + 0xff8) = '\x01' - (*(int *)(param_2 + 0x5d4) == 0);
  *(undefined4 *)(param_1 + 0xfec) = *(undefined4 *)(param_2 + 0x5c0);
  return 1;
}

