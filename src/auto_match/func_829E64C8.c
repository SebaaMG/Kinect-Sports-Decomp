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
extern int fn_829E7EA0();
extern int fn_829E82F0();
extern int fn_829E8330();
extern int fn_829E8390();


void fn_829E64C8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  
  iVar3 = fn_829E7EA0(param_1 + 4);
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = fn_829E8330(*(undefined4 *)(param_1 + 0x18),param_3,param_4);
    uVar2 = fn_829E82F0(*(undefined4 *)(param_1 + 0x18),param_5,param_6);
    fn_829E8390(*(undefined4 *)(param_1 + 0x18),param_1 + 4,param_8,uVar2,uVar1);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  *param_7 = uVar4;
  return;
}

