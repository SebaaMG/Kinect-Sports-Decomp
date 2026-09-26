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
extern int fn_82FF9C88();
extern int fn_83007AE8();
extern int fn_83008748();
extern int fn_830087C8();
extern unsigned int iStack_2c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8302C2A0(int param_1,int param_2,undefined4 param_3,undefined8 param_4,ulonglong param_5)

{
  int iVar1;
  undefined2 *puStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  undefined8 uStack_34;
  int iStack_2c;
  undefined4 uStack_28;
  
  puStack0000001c = (undefined2 *)(param_2 + 4);
  uStack00000024 = param_3;
  iVar1 = fn_82FF9C88(&stack0x0000001c,&stack0x00000024,&uStack_50);
  if (iVar1 == 1) {
    if (iStack_2c == 0) {
      fn_83008748(param_1 + 0x88,uStack_4c,uStack_48,uStack_40,(ulonglong)uStack_38 << 0x20,
                        uStack_34);
    }
    else {
      fn_830087C8(param_1 + 0x88,uStack_50,uStack_4c,iStack_2c,uStack_28);
    }
    iVar1 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,param_5);
    if (((param_5 & 0xff) == 0) && (iVar1 == 1)) {
      *(undefined2 *)(param_1 + 0x84) = *puStack0000001c;
      *(undefined2 *)(param_1 + 0x80) = puStack0000001c[1];
      *(undefined2 *)(param_1 + 0x82) = puStack0000001c[2];
    }
  }
  return;
}

