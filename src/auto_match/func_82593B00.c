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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_8255BB98();
extern int fn_828AD0F8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82593B00(int param_1)

{
  bool bVar1;
  int *piVar3;
  undefined8 uVar2;
  bool bVar4;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  bVar4 = false;
  uStack_30 = 0;
  if (param_1 != 0) {
    bVar4 = true;
    piVar3 = (int *)fn_8255BB98(&uStack_30,*(undefined4 *)(param_1 + 0xd48));
    bVar1 = true;
    if (*piVar3 != 0) goto LAB_82593b4c;
  }
  bVar1 = false;
LAB_82593b4c:
  if ((bVar4) && (iStack_2c != 0)) {
    fn_822315A0();
  }
  if (bVar1) {
    piVar3 = (int *)fn_8255BB98(auStack_28,*(undefined4 *)(param_1 + 0xd48));
    uVar2 = fn_828AD0F8(*(undefined4 *)(*piVar3 + 8));
    if (iStack_24 != 0) {
      fn_822315A0(iStack_24);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

