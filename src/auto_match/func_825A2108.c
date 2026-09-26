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
extern int fn_825FF9D0();
extern int fn_8265C9E0();
extern int fn_827F0F58();
extern int fn_827F0FB8();
extern int fn_827F46E8();
extern int fn_827F5C20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 fn_825A2108(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x7b8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = fn_8265C9E0(0x160);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_825FF9D0(uVar2,param_1,*(undefined4 *)(param_1 + 0x7b0),param_3);
  }
  *(int *)(param_1 + 0x7b8) = (int)uVar3;
  fn_827F0FB8(param_2,uVar3,1);
  uVar2 = fn_827F46E8(0xe8);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_827F5C20((double)lbl_821CA460,(double)lbl_821CA460,(double)lbl_821CC160,uVar2,0
                              ,*(undefined4 *)(param_1 + 0x7b8),param_3,
                              *(undefined4 *)(param_1 + 0x7b8),0);
  }
  fn_827F0F58(param_2,uVar3,1);
  return *(undefined4 *)(param_1 + 0x7b8);
}

