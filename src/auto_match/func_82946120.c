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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82946120(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x718) != 0) {
    do {
      fn_828F6FA8(auStack_90,0x20,param_4,uVar2,uVar2);
      fn_828F6FA8(auStack_b0,0x20,param_5,uVar2,uVar2);
      fn_828F6FA8(auStack_d0,0x20,param_3,uVar2,uVar2);
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_d0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (param_2 < 0x74400001) {
        uVar1 = 0xffffffff82035200;
        if (param_2 != 0x74400000) {
          if (param_2 == 0x73900000) {
LAB_829462a8:
            uVar1 = 0xffffffff820351d8;
          }
          else {
            if (param_2 == 0x73a00000) goto LAB_829462b0;
            if ((param_2 != 0x73b00000) && (uVar1 = 0xffffffff82035214, param_2 != 0x73c00000)) {
              return 0xffffffff80004005;
            }
          }
        }
      }
      else {
        uVar1 = 0xffffffff82035214;
        if (param_2 != 0x74500000) {
          if (param_2 != 0x74600000) {
            if (param_2 != 0x74700000) {
              return 0xffffffff80004005;
            }
            goto LAB_829462a8;
          }
LAB_829462b0:
          uVar1 = 0xffffffff820351f0;
        }
      }
      uVar1 = fn_829410A8(param_1,uVar1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff82034d10,auStack_90,auStack_b0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x718));
  }
  return 0;
}

