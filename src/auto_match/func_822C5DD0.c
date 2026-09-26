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
extern int fn_82D7E470();
extern unsigned int lbl_831D84F1;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


undefined4 *
fn_822C5DD0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  *param_1 = 0;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack_28 = param_3;
  uStack_20 = param_4;
  cVar2 = fn_82D7E470(&uStack_30);
  if (cVar2 == '\0') {
    if ((undefined8 *)(param_1 + 2) != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 2) = uStack_30;
      *(undefined8 *)(param_1 + 4) = uStack_28;
      *(undefined8 *)(param_1 + 6) = uStack_20;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *param_1 = &lbl_831D84F1;
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}

