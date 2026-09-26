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
extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern unsigned int lbl_831C996C;


void fn_82399038(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  
  uVar3 = lbl_831C996C;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  pcVar4 = (char *)fn_8225F670();
  if (*pcVar4 != '\0') {
    iVar5 = fn_8225FDE0(0x1c,1);
    if ((iVar5 == 0) && (cVar6 = fn_82E1CAD0(0x1c), cVar6 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar3);
      fn_8225FCE8(0xffffffff821a6940);
      fn_82E1CB88(0xffffffff821a69b8,uVar2);
      fn_82E1CB88(0xffffffff821a69c0,uVar1);
      fn_82E1CCA8();
    }
  }
  return;
}

