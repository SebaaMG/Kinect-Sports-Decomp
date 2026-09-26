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
extern int fn_82FA4E40();
extern int fn_82FA4F60();
extern int fn_82FA54B8();
extern int fn_82FA64D0();
extern int iRam8326420c;
extern unsigned int lbl_83264210;


undefined8 fn_82FA57F0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = fn_82FA4F60();
  if ((int)uVar1 == 1) {
    iVar2 = param_1 * 0x50 + lbl_83264210;
    RtlEnterCriticalSection(iVar2 + 0x24);
    if ((*(uint *)(iVar2 + 0x1c) & 8) == 8) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    else {
      fn_82FA64D0(*(undefined4 *)(iVar2 + 0x40));
    }
    if ((*(uint *)(iVar2 + 0x20) & 0x80000000) != 0) {
      fn_82FA54B8(iVar2);
    }
    fn_82FA4E40(iVar2);
    iRam8326420c = iRam8326420c + -1;
    RtlLeaveCriticalSection(iVar2 + 0x24);
  }
  return uVar1;
}

