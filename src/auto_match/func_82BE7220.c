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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern int fn_82BEA200();
extern int fn_82BEA230();


undefined8 fn_82BE7220(int param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  
  iVar2 = fn_82BEA200(param_1 + 0x2c,0xffffffff820e9890);
  if (iVar2 == 0) {
    uVar1 = 0x2c0;
  }
  else {
    iVar2 = param_1 + 0x14;
    fn_82BE5340(iVar2);
    while (iVar3 = fn_82BE5378(iVar2), iVar3 != 0) {
      if (iVar3 == param_2) {
        fn_82BE5398(iVar2,*(undefined4 *)(param_1 + 0x1c),1);
        uVar1 = 0;
        goto LAB_82be72a8;
      }
      fn_82BE5350();
    }
    uVar1 = 0x2bf;
LAB_82be72a8:
    fn_82BEA230(param_1 + 0x2c,0xffffffff820e9890);
  }
  return uVar1;
}

