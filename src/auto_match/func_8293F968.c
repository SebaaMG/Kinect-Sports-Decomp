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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F5D48();
extern int fn_828F8E78();
extern int fn_82936220();
extern int fn_829371F8();
extern int fn_8293F5D8();


longlong fn_8293F968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)fn_8265C940(0x150,0x24810000);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0x19] = 0;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1f] = 1;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    puVar1[0x14] = param_5;
    puVar1[0x13] = param_4;
    lVar2 = fn_828F5D48(param_1,2);
    if (-1 < lVar2) {
      lVar2 = fn_8293F5D8(puVar1,param_1,param_2,2,0,0);
      if (-1 < lVar2) {
        lVar2 = fn_82936220(puVar1,param_3);
      }
      fn_828F8E78(param_1);
    }
    fn_829371F8(puVar1);
    fn_8265C990(puVar1,0x24810000);
  }
  return lVar2;
}

