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
extern int fn_82558B08();
extern int fn_82569B10();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int *lbl_8327F84C;
extern U64 storeWordConditionalIndexed();


void fn_8256A938(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar5;
  undefined8 uVar4;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  while( true ) {
    lVar3 = fn_82569B10();
    do {
      puVar6 = (uint *)(lVar3 + 0x78);
      uVar1 = *puVar6;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar3 + 0x78);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((uVar1 == 0) && (cVar5 = (**(code **)(*lbl_8327F84C + 0x24))(), cVar5 == '\x01')) break;
    fn_82558B08();
  }
  sync(1);
  uVar4 = fn_82569B10();
  lVar3 = fn_82A1BB18();
  fn_8259C5D8(uVar4,0,lVar3 + 1);
  fn_82558B08();
  uVar4 = fn_82569B10();
  fn_82A1BB18();
  fn_8259C738(uVar4);
  return;
}

