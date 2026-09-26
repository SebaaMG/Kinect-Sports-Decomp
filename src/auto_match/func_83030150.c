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
extern int fn_82FB02C8();
extern int fn_8302FA48();


void fn_83030150(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0) {
    fn_8302FA48(param_1,param_2[2],0);
  }
  else if (uVar1 == 1) {
    uVar1 = param_2[2];
    for (puVar2 = *(undefined4 **)(param_1 + 0x104); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (((uVar1 == 0) || (uVar1 == puVar2[8])) && (puVar2[0x1b] != 1)) {
        puVar2[0x1b] = 1;
      }
    }
  }
  else if (uVar1 < 3) {
    uVar1 = param_2[2];
    for (puVar2 = *(undefined4 **)(param_1 + 0x104); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (((uVar1 == 0) || (uVar1 == puVar2[8])) && (puVar2[0x1b] != 0)) {
        puVar2[0x1b] = 0;
      }
    }
  }
  fn_82FB02C8(param_1,param_2);
  return;
}

