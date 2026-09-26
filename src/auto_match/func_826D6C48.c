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
extern int fn_8267BC98();
extern int fn_8267C2D8();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 fn_826D6C48(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uStack_24 = 0;
    uStack_34 = 0;
    uStack_40 = 4;
    uStack_3c = 0x20;
    uStack_38 = 0x1000;
    uStack_30 = 0xffffffff;
    uStack_2c = 0;
    uStack_28 = 7;
    uVar1 = fn_8267C2D8(*(undefined4 *)(param_1 + 0x1c),0xffffffff8200c560,&uStack_40);
    if (*(int *)(param_1 + 0x20) != 0) {
      fn_8267BC98(*(int *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}

