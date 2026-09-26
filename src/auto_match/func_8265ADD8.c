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
extern int fn_82636C98();
extern int fn_8265AF38();
extern int fn_8265B000();
extern int fn_8265B200();
extern int fn_8265B300();


longlong fn_8265ADD8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      uint param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = param_4;
  param_1[2] = param_6;
  *(undefined1 *)(param_1 + 3) = 1;
  *(byte *)((int)param_1 + 0xd) = ~(byte)param_6 & 1;
  *(undefined1 *)(param_1 + 0x80a) = 1;
  param_1[0x80c] = 0;
  param_1[0x80b] = 0;
  fn_82636C98(param_4,param_5,0,0,0,0,1,0xffffffff8265b048);
  lVar1 = fn_82636C98(param_4,param_5,0,0,0,0,7,0xffffffff8265a1d0);
  if (-1 < lVar1) {
    if (((param_1[2] & 0x100) == 0) && (iVar2 = (param_1[0x80c] + 1) * 0xc, iVar2 + 0xcU <= param_5)
       ) {
      if ((param_1[2] & 0x10) == 0) {
        fn_8265B000(param_1,0xffffffff821cc86c);
      }
      else {
        fn_8265B300(param_1,0xffffffff821ce7a4);
      }
      *(undefined1 *)(param_1 + 0x80a) = 1;
      fn_8265B300(param_1,0xffffffff821ce838);
      fn_8265B200(param_1,0xffffffff821ce870);
      fn_8265B200(param_1,0xffffffff821ce78c,*(undefined4 *)(iVar2 + param_4),
                        *(undefined4 *)(iVar2 + param_4 + 4),*(undefined4 *)(iVar2 + param_4 + 8));
      fn_8265B300(param_1,0xffffffff821ce828);
      fn_8265AF38(param_1);
    }
  }
  return lVar1;
}

