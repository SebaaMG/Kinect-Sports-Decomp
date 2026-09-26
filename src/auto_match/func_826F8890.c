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
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_82687270();
extern int fn_8268ACE8();
extern int fn_8268C750();
extern int fn_826D7220();
extern int fn_826E5AE8();
extern unsigned int uStack_30;
extern unsigned int uStack_40;


void fn_826F8890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [40];
  
  iVar1 = fn_8268ACE8(param_1 + 0x20);
  if (iVar1 != 0) {
    uStack_40 = 3;
    fn_8268C750(auStack_3c,param_1 + 0x20);
    fn_8268C750(auStack_38,param_1 + 0x18);
    uVar2 = fn_826E5AE8(*(undefined4 *)(param_1 + 0x10),&uStack_40,
                              *(undefined4 *)(param_1 + 0x14),0,0);
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_82687270();
    }
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    fn_826D7220(&uStack_40);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    uStack_30 = 3;
    fn_8268C750(auStack_2c,param_1 + 0x1c);
    fn_8268C750(auStack_28,param_1 + 0x18);
    uVar2 = fn_826E5AE8(*(undefined4 *)(param_1 + 0x10),&uStack_30,
                              *(undefined4 *)(param_1 + 0x14),0,0);
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_82687270(*(int *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    fn_826D7220(&uStack_30);
  }
  sync(1);
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

