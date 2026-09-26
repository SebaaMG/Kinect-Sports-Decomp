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
extern int fn_827C7FC0();
extern int fn_827C8250();
extern int fn_827C8A48();
extern int fn_827C8CE0();
extern int fn_827C8D38();


void fn_827C8DE8(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x20);
  *(undefined4 **)(param_1 + 0x13c) = puVar1;
  *puVar1 = fn_827C8A48;
  puVar1[1] = fn_827C8CE0;
  puVar1[2] = fn_827C8D38;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  fn_827C7FC0(param_1);
  if (*(int *)(param_1 + 0xac) == 0) {
    *(undefined1 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 1;
  }
  else {
    fn_827C8250(param_1);
  }
  if (*(char *)(param_1 + 0xd4) != '\0') {
    *(undefined1 *)(param_1 + 0xb2) = 1;
  }
  if (param_2 == '\0') {
    puVar1[4] = 0;
  }
  else if (*(char *)(param_1 + 0xb2) == '\0') {
    puVar1[4] = 2;
  }
  else {
    puVar1[4] = 1;
  }
  puVar1[7] = 0;
  puVar1[5] = 0;
  iVar2 = *(int *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0xb2) != '\0') {
    iVar2 = iVar2 << 1;
  }
  puVar1[6] = iVar2;
  return;
}

