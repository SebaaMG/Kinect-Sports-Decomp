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
extern int fn_82635A70();
extern int fn_82937A60();
extern int fn_8293C408();
extern int fn_8293D620();


undefined8 fn_8293DD48(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    fn_8293D620(param_1);
    if ((*(uint *)(param_1 + 0x60) & 0x80) == 0) {
      if ((*(uint *)(param_1 + 0x128) & 4) != 0) {
        fn_82937A60(param_1,0xffffffff82033e88);
      }
      if ((*(uint *)(param_1 + 0x128) & 8) != 0) {
        fn_82937A60(param_1,0xffffffff82033e40);
      }
      if ((*(uint *)(param_1 + 0x128) & 0x10000) != 0) {
        fn_82937A60(param_1,0xffffffff82033df8);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x128);
    if ((uVar1 & 0x2000) != 0) {
      *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) | 0x40000;
    }
    if ((uVar1 & 0x2000) == 0) {
      if (((uVar1 & 0x20) != 0) && ((*(uint *)(param_1 + 0x120) & 0x80000) != 0)) {
        fn_82937A60(param_1,0xffffffff82033db4);
      }
      if (((*(uint *)(param_1 + 0x128) & 0x1000) != 0) && ((*(uint *)(param_1 + 0x124) & 2) != 0)) {
        fn_82937A60(param_1,0xffffffff82033d70);
      }
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar2 = fn_8293C408(param_1,1);
      fn_82635A70(uVar2,*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124));
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff88760b59;
    }
  }
  return uVar2;
}

