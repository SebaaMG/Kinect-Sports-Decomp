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
extern int fn_83018DD8();
extern int fn_83027FB0();
extern unsigned int lbl_832642FC;


undefined8 fn_82FF0798(undefined4 param_1,undefined8 param_2)

{
  int *piVar2;
  undefined8 uVar1;
  int iVar3;
  
  piVar2 = (int *)fn_83027FB0(param_2);
  if ((piVar2 == (int *)0x0) || (iVar3 = *piVar2, iVar3 == piVar2[1])) {
    uVar1 = 1;
  }
  else {
    do {
      uVar1 = fn_83018DD8(lbl_832642FC,param_1,*(undefined4 *)(iVar3 + 8),
                                *(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                                *(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x14),
                                *(undefined4 *)(iVar3 + 0x18));
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      iVar3 = iVar3 + 0x20;
    } while (iVar3 != piVar2[1]);
  }
  return uVar1;
}

