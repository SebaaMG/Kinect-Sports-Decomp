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
extern unsigned int *auStack_20;
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256A9F8();
extern int fn_8256B310();
extern int fn_8256B850();
extern int fn_8259C738();
extern int fn_82A1BB18();


void fn_8256AA98(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_20 [2];
  
  uVar2 = fn_82569B10();
  fn_82549610(auStack_20,uVar2);
  iVar3 = fn_82569B10();
  for (puVar1 = (undefined4 *)**(undefined4 **)(iVar3 + 0x14); iVar3 = fn_82569B10(),
      puVar1 != *(undefined4 **)(iVar3 + 0x14); puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[3];
    if (*(int *)(iVar3 + 0xc) != 0) {
      if ((*(byte *)(iVar3 + 0x28) & 0x80) != 0) {
        fn_8256B850(iVar3);
      }
      fn_8256B310(iVar3);
      fn_8256A9F8(iVar3);
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
  }
  fn_82A1BB18();
  fn_8259C738(auStack_20[0]);
  return;
}

