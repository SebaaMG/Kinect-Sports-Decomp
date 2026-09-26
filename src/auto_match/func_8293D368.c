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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82635E18();
extern int fn_82635FD0();
extern int fn_82936B10();
extern int fn_82937A60();
extern int fn_8293B978();
extern int fn_8293C408();
extern int fn_82A9F7E0();


undefined8 fn_8293D368(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  uint auStack_38 [14];
  
  *(undefined4 *)(param_1 + 300) = 0;
  auStack_40[0] = 0;
  fn_82936B10(param_2,auStack_38,auStack_40,0xffffffff82937a60,param_1);
  fn_8293B978(param_1,auStack_38,param_2,3);
  if ((auStack_38[0] & 0x1f) < 0x14) {
    if (*(int *)(*(int *)(param_2 + 100) + 0x10) != -0x3ea) {
      fn_82937A60(param_1,0xffffffff82033afc);
      return 0xffffffff80004005;
    }
    auStack_38[0] =
         (*(uint *)(*(int *)(param_2 + 100) + 0x18) & 0x1f) << 0x14 | auStack_38[0] & 0xfe0fffff;
  }
  uVar1 = fn_8293C408(param_1,1);
  uVar2 = fn_82635E18(uVar1,auStack_38);
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82635FD0(uVar1,uVar2,1);
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    fn_82A9F7E0(*(undefined4 *)(param_1 + 0x13c),1,uVar2,*(undefined4 *)(param_2 + 0x20),
                    *(undefined4 *)(param_2 + 0x24),0xffffffffffffffff,0);
  }
  return 0;
}

