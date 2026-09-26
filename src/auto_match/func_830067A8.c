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
extern int fn_82FA5060();
extern int fn_83006528();
extern int fn_83008038();
extern int fn_830195D8();
extern unsigned int lbl_831BC768;


undefined8
fn_830067A8(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int in_stack_00000054;
  
  if (param_1[10] == 0) {
    puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x40);
    param_1[10] = (int)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1[6] = 0xffffffff;
      puVar1[7] = 0;
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[9] = 0xffffffff;
      puVar1[10] = 0;
      *(undefined1 *)(puVar1 + 0xb) = 0;
      puVar1[0xc] = 0xffffffff;
      puVar1[0xd] = 0;
      *(undefined1 *)(puVar1 + 0xe) = 0;
      *(undefined1 *)(puVar1 + 0xf) = 0;
    }
    if (param_1[10] == 0) {
      return 0x34;
    }
  }
  uVar2 = 1;
  fn_83006528(param_1,param_2,param_3,param_5,param_6);
  puVar1 = (undefined4 *)fn_83008038(param_1[10]);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 2;
  }
  else {
    *puVar1 = (int)param_2;
    puVar1[1] = (int)param_3;
    puVar1[3] = (int)param_5;
    puVar1[4] = (int)param_6;
    puVar1[2] = param_4;
    if (((param_8 & 0xffffffff) != 0) && (in_stack_00000054 != 0)) {
      uVar2 = fn_830195D8(puVar1 + 5,param_8,in_stack_00000054,param_7);
    }
    if (((*(byte *)((int)param_1 + 0x3e) & 0x80) != 0) || (param_1[4] == 0)) {
      (**(code **)(*param_1 + 0x5c))(param_1,puVar1);
    }
  }
  return uVar2;
}

