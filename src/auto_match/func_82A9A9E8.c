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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99C98();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9A9E8(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d28d4);
  fn_82A9A860(param_2);
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 < *(int *)(param_1 + 8) * 0x114 + uVar4) {
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d28bc);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,*(undefined4 *)(uVar4 + 0x104));
      fn_82A99D88(param_2,0xffffffff820d28c4,uVar4);
      fn_82A99B70(param_2,0xffffffff820d287c,0xffffffff820d28cc,*(undefined4 *)(uVar4 + 0x108),
                    *(undefined4 *)(uVar4 + 0x10c));
      if (*(int *)(uVar4 + 0x110) == 0) {
        fn_82A9A810(param_2);
      }
      else {
        fn_82A99B70(param_2,0xffffffff820157e8);
        param_2[1] = param_2[1] + 1;
        pcVar2 = *(char **)(uVar4 + 0x110);
        pcVar3 = pcVar2;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        (**(code **)(*param_2 + 0xc))(param_2,pcVar2,pcVar3 + (-1 - (int)pcVar2));
        fn_82A99C98(param_2,0xffffffff820d28bc);
      }
      uVar4 = uVar4 + 0x114;
    } while (uVar4 < (uint)(*(int *)(param_1 + 8) * 0x114 + *(int *)(param_1 + 4)));
  }
  fn_82A99C28(param_2,0xffffffff820d28d4);
  return;
}

