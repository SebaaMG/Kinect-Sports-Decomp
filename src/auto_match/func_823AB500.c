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
extern int fn_822315A0();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0DB8;


void fn_823AB500(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0xc);
  puStack_3c = (undefined4 *)fn_8265C9E0(0x10);
  if (puStack_3c == (undefined4 *)0x0) {
    puStack_3c = (undefined4 *)0x0;
  }
  else {
    puStack_3c[3] = puVar1;
    puStack_3c[1] = 1;
    puStack_3c[2] = 1;
    *puStack_3c = &lbl_821C0DB8;
  }
  *puVar1 = param_2;
  puStack_40 = puVar1;
  uVar2 = (**(code **)(*param_1 + 4))(param_1);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  fn_82376640(param_1 + 0x1b,&puStack_40);
  param_1[1] = 1;
  param_1[0x1a] = param_1[0x1a] + 1;
  if (puStack_3c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  return;
}

