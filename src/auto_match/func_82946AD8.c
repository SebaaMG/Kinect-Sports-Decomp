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
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82946AD8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x68c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82941178(param_1);
    if ((((-1 < (int)uVar1) &&
         (uVar1 = fn_829410A8(param_1,0xffffffff82035628), -1 < (int)uVar1)) &&
        (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
       (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)) {
      *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
      uVar1 = fn_82941178(param_1);
      if (((-1 < (int)uVar1) &&
          (uVar1 = fn_829410A8(param_1,0xffffffff820355e0), -1 < (int)uVar1)) &&
         ((uVar1 = fn_82941178(param_1), -1 < (int)uVar1 &&
          (uVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < (int)uVar1)))) {
        uVar1 = 0;
        *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
        if (*(int *)(param_1 + 0x68c) != 0) {
          puVar3 = (undefined4 *)(param_1 + 0x60c);
          do {
            uVar2 = fn_82941178(param_1);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_829410A8(param_1,0xffffffff82035548,*puVar3,puVar3[1]);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82941178(param_1);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_829410A8(param_1,0xffffffff82035588,*puVar3,puVar3[1]);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar1 = uVar1 + 1;
            puVar3 = puVar3 + 2;
          } while (uVar1 < *(uint *)(param_1 + 0x68c));
        }
        *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + -1;
        uVar1 = fn_82941178(param_1);
        if ((-1 < (int)uVar1) &&
           (uVar1 = fn_829410A8(param_1,0xffffffff82034894), -1 < (int)uVar1)) {
          *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + -1;
          uVar1 = fn_82941178(param_1);
          if (-1 < (int)uVar1) {
            uVar1 = fn_829410A8(param_1,0xffffffff82034898);
            uVar1 = (int)uVar1 >> 0x1f & uVar1;
          }
        }
      }
    }
  }
  return uVar1;
}

