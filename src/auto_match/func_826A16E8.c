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
extern int fn_8269A9E8();
extern int fn_826A15C8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826A16E8(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  uVar1 = fn_8269A9E8(*param_2);
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fn_826A15C8(param_1,param_2,param_3);
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if ((*param_2 & uVar3) != 0) {
          uStack_4c = param_2[1];
          uStack_48 = param_2[2];
          uStack_44 = param_2[3];
          uVar2 = uVar2 + 1;
          uStack_50 = uVar3;
          fn_826A15C8(param_1,&uStack_50,param_3);
        }
        uVar3 = uVar3 << 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}

