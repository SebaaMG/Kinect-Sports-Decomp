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
extern int fn_8236D498();
extern int fn_8240D930();
extern int fn_828C3A00();


undefined8 fn_828DC918(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x88);
  if (uVar5 != *(uint *)(param_1 + 0x8c)) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
      uVar3 = fn_8236D498(uVar5);
      uVar2 = *(undefined4 *)(param_1 + 0x84);
      uVar4 = fn_8240D930(uVar5);
      fn_828C3A00(uVar1,*(undefined4 *)(param_1 + 0x80),uVar4,uVar2,uVar3,1);
      uVar5 = uVar5 + 0x34;
    } while ((uVar5 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x8c));
  }
  return 1;
}

