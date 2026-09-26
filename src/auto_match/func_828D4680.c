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
extern int fn_828AD0F8();
extern int fn_828AD188();
extern int fn_828AD488();
extern int fn_828AD4A0();
extern int fn_828D4600();
extern int fn_828E0338();
extern int fn_828E0390();
extern int fn_828E0B48();
extern int fn_828E0D30();
extern int fn_82BA02A8();


void fn_828D4680(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = fn_828AD0F8(*(undefined4 *)(param_1 + 0x14));
  if (cVar2 == '\x01') {
    cVar2 = fn_828AD0F8(*(undefined4 *)(param_1 + 0x18));
    if (cVar2 == '\0') {
      fn_828AD188(*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    cVar2 = fn_828AD488(*(undefined4 *)(param_1 + 0x14));
    if ((cVar2 == '\x01') && (cVar2 = fn_828AD488(*(undefined4 *)(param_1 + 0x18)), cVar2 == '\0'))
    {
      fn_828AD4A0(*(undefined4 *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_1 + 8) == 3) {
    cVar2 = fn_828D4600(param_1);
    if (cVar2 != '\0') goto code_r0x828d473c;
    uVar3 = 0;
  }
  else {
    cVar2 = fn_828D4600(param_1);
    if (cVar2 == '\0') goto code_r0x828d473c;
    uVar3 = 3;
  }
  fn_828E0390(param_1,uVar3);
code_r0x828d473c:
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      fn_828E0338(param_1);
      return;
    }
    if (uVar1 == 2) {
      fn_828E0D30(param_1);
      return;
    }
    if (uVar1 == 0) {
      fn_828E0B48(param_1);
      return;
    }
    fn_82BA02A8(param_1);
  }
  return;
}

