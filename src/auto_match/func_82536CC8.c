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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_82292828();
extern int fn_8239DD40();
extern int fn_8265C9E0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_83297840;


void fn_82536CC8(void)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [40];
  
  if (lbl_83297840 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      lbl_83297840 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      fn_8239DD40(puVar2,10);
      uVar1 = fn_82864988(auStack_70,0xffffffff821bc014);
      fn_82292828(puVar2,uVar1);
      fn_82864898(auStack_70);
      uVar1 = fn_82864988(auStack_40,0xffffffff821c3abc);
      fn_82292828(puVar2,uVar1);
      fn_82864898(auStack_40);
      lbl_83297840 = puVar2;
    }
  }
  return;
}

