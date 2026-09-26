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
extern int fn_828C24F0();
extern int fn_828C2670();
extern int fn_828EDCF8();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_828B6820(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((*(char *)(param_1 + 0x4c) != '\0') || (bVar2 = true, *(int *)(param_1 + 0x20) != 0)) {
    bVar2 = false;
  }
  uVar1 = 0;
  if (bVar2) {
    fn_828C24F0(&iStack_30,*(undefined4 *)(param_1 + 0x14),param_2);
    fn_828C2670(&iStack_28,iStack_30,param_3);
    uVar1 = fn_828EDCF8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(iStack_30 + 8),
                         *(undefined4 *)(iStack_28 + 4));
    if (iStack_24 != 0) {
      fn_822315A0(iStack_24);
    }
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  return uVar1;
}

