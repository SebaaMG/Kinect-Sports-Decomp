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
extern int fn_82A2B760();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8
fn_82A29FE0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 == (undefined4 *)0x0) {
    uVar1 = NtWriteFile(param_1,0,0,0,&uStack_30,param_2,param_3,0);
    if (((uVar1 != 0x103) ||
        (uVar2 = NtWaitForSingleObjectEx(param_1,1,0,0), uVar1 = uStack_30, -1 < (int)uVar2)) &&
       (uVar2 = uVar1, -1 < (int)uVar1)) {
      *param_4 = uStack_2c;
      return 1;
    }
    if ((uVar2 & 0xc0000000) == 0x80000000) {
      *param_4 = uStack_2c;
    }
  }
  else {
    uStack_24 = param_5[2];
    uStack_28 = param_5[3];
    *param_5 = 0x103;
    uVar1 = NtWriteFile(param_1,param_5[4],0,-(uint)((param_5[4] & 1) == 0) & (uint)param_5,param_5,
                        param_2,param_3,&uStack_28);
    if (((uVar1 & 0xc0000000) != 0xc0000000) && (uVar1 != 0x103)) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_5[1];
      }
      return 1;
    }
  }
  fn_82A2B760();
  return 0;
}

