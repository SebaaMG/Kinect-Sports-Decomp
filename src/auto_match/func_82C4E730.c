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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_82C562F0();


undefined8
fn_82C4E730(undefined8 param_1,int param_2,undefined1 *param_3,longlong param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined2 *puVar4;
  undefined8 uVar3;
  
  puVar4 = (undefined2 *)
           fn_82C562F0(param_1,(param_4 + 1U & 0x7fffffff) << 1,0xffffffff82196582);
  *(undefined2 **)(param_5 + 0x24) = puVar4;
  if (puVar4 == (undefined2 *)0x0) {
    uVar3 = 0xfffffffffffffff7;
  }
  else {
    if (0 < param_4) {
      param_2 = param_2 - (int)param_3;
      do {
        uVar1 = *param_3;
        puVar2 = param_3 + param_2;
        param_3 = param_3 + 1;
        *puVar4 = CONCAT11(uVar1,*puVar2);
        puVar4 = puVar4 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    uVar3 = 0;
    *puVar4 = 0;
  }
  return uVar3;
}

