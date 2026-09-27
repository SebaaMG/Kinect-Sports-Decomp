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
extern unsigned int *auStack_3c;
extern int fn_83049320();
extern int fn_830493C8();
extern int fn_8304D6F0();
extern unsigned int uStack_40;


undefined8
fn_83049850(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uStack_40;
  uint auStack_3c;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(byte *)(iVar1 + 0xdb) & 0x80) != 0) {
    fn_8304D6F0(param_1,((ulonglong)*(uint *)(*(int *)(iVar1 + 0x6c) + 0x20) *
                         (ulonglong)*(uint *)(iVar1 + 0xd0)) / 48000 & 0xffffffff,&auStack_3c,
                 param_1 + 0x1c);
    uStack_40 = auStack_3c;
    if ((*(uint *)(param_2 + 0x18) < auStack_3c) ||
       (iVar1 = fn_830493C8(param_1,&uStack_40,param_2,param_4,param_5), iVar1 != 1)) {
      return 2;
    }
    iVar1 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 0x3c) = uStack_40;
    *(uint *)(iVar1 + 0xd0) = auStack_3c - uStack_40;
    *(byte *)(iVar1 + 0xdb) = *(byte *)(iVar1 + 0xdb) & 0x7f;
  }
  fn_83049320(param_1,param_3,*(undefined2 *)(param_1 + 0x1c));
  return 1;
}

