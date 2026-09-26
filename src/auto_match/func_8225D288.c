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
extern unsigned int *auStack_30;
extern int fn_8225DD28();
extern int fn_82526608();
extern int fn_8265C9E0();
extern int fn_828EB518();
extern int fn_828EBF50();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern unsigned int uRam00000404;
extern unsigned int uRam00000408;


undefined4 fn_8225D288(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 auStack_30 [12];
  
  uVar4 = 4;
  while (iVar2 = fn_828EB518(uVar4), iVar2 != 0) {
    uVar4 = uVar4 + 1;
    if (7 < (uVar4 & 0xffffffff)) {
      return 0;
    }
  }
  if ((uVar4 & 0xffffffff) == 0xfe) {
    return 0;
  }
  auStack_30[0] = fn_828EBF50(param_2,uVar4);
  iVar2 = fn_8265C9E0(0x410);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x404) = 0;
    *(undefined4 *)(iVar2 + 0x408) = 0;
    *(undefined4 *)(iVar2 + 0x40c) = 3;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(iVar2,0,1000);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_82A1DD38(0,param_3,1000);
    uRam00000404 = 1;
    uRam00000408 = 1;
  }
  puVar3 = (undefined4 *)fn_82526608(param_1 + 0x48,auStack_30);
  uVar1 = auStack_30[0];
  *puVar3 = 0;
  fn_8225DD28(param_1,uVar4,auStack_30[0]);
  return uVar1;
}

