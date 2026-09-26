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
extern unsigned int lbl_8214C340;


undefined8 fn_82E24DB8(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    lVar2 = fn_8265C940(param_1,0x208c804d);
    if (lVar2 != 0) {
      puVar3 = (undefined4 *)fn_8265C940(0x20,0x208c804d);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[3] = (int)param_1;
        puVar3[4] = (int)lVar2;
        puVar3[1] = 1;
        *puVar3 = &lbl_8214C340;
        puVar3[2] = 0;
      }
      if (puVar3 != (undefined4 *)0x0) {
        *param_2 = puVar3;
        return 0;
      }
      fn_8265C990(lVar2,0x208c804d);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

