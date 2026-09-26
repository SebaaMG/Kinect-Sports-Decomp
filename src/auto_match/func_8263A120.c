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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8264B4A0();
extern unsigned int uStack_30;


void fn_8263A120(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uStack_30;
  
  puVar1 = *(uint **)(param_1 + 0x3144);
  if (puVar1 != (uint *)0x0) {
    if (*(uint *)(param_1 + 0x2a9c) == 0) {
      if ((*(uint *)(param_1 + 0x2aa0) & *puVar1) != 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x35a8);
        if (*(undefined8 **)(param_1 + 0x35ac) <= puVar2) {
          puVar2 = (undefined8 *)fn_8264B4A0(param_1);
        }
        *puVar2 = CONCAT44((uint)puVar1 >> 2 | uStack_30 & 0x80000000,0xffffffff);
        *(undefined8 **)(param_1 + 0x35a8) = puVar2 + 1;
      }
    }
    else {
      puVar1[2] = *(uint *)(param_1 + 0x2a9c);
    }
  }
  *(undefined4 *)(param_1 + 0x3144) = param_2;
  return;
}

