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
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_828AD740();
extern int fn_828AFF00();
extern int fn_828AFF88();
extern int fn_828BE158();
extern int fn_828DA5D8();


undefined8 fn_828DA640(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    cVar3 = fn_828AD740(*(undefined4 *)(param_1 + 0x6c));
    if (cVar3 == '\0') {
      fn_828AFF88((ulonglong)*(uint *)(param_1 + 0x6c) + 0x278);
      fn_828AFF00((ulonglong)*(uint *)(param_1 + 0x6c) + 0x278,
                        (((*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88)) / 2 +
                         *(longlong *)(param_1 + 0xa8)) - *(longlong *)(param_1 + 0x90)) * 1000);
    }
  }
  else {
    uVar1 = fn_8265C9E0(0xb0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828DA5D8(uVar1,*(undefined4 *)(param_1 + 0x6c),param_1);
    }
    fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
    fn_828BE158(*(undefined4 *)(param_1 + 0x6c),uVar2,*(undefined4 *)(param_1 + 0x18),0);
  }
  return 1;
}

