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
extern int fn_82279DA8();
extern int fn_82280B40();
extern unsigned int lbl_821CC160;


void fn_82280798(int param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 100);
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    fn_82280B40(puVar2);
  }
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *puVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x68) = param_2[1];
  uVar1 = lbl_821CC160;
  if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x74) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = *param_3;
    *(undefined4 *)(param_1 + 0x74) = param_3[1];
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  *(char *)(param_1 + 0x79) = param_4;
  fn_82279DA8(*puVar2,0);
  if (param_4 != '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

