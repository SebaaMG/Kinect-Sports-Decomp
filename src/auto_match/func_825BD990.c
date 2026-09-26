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
extern int fn_82365BD8();
extern int fn_827D98B0();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


undefined8 fn_825BD990(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x21c);
  uVar1 = *(uint *)(param_1 + 0x220);
  while( true ) {
    if ((uVar3 & 0xffffffff) == (ulonglong)uVar1) {
      return 1;
    }
    fn_82365BD8(&uStack_20,uVar3);
    iVar2 = fn_827D98B0(uStack_20);
    if (iVar2 != 0) break;
    uVar3 = uVar3 + 8;
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return 0;
}

