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
extern char cRam8327f87e;
extern int fn_8259A168();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A1E5B8();


undefined4 fn_8259A230(int param_1)

{
  int iVar2;
  longlong lVar1;
  ulonglong uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (cRam8327f87e == '\0') {
    fn_8259A168();
  }
  iVar2 = 0;
  uVar3 = 0;
  piVar4 = (int *)0x8326f5bc;
  do {
    if (*piVar4 == param_1) {
      return *(undefined4 *)(iVar2 * 0xc + -0x7cd90a40);
    }
    uVar3 = uVar3 + 0xc;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
  } while ((uVar3 & 0xffffffff) < 0x180);
  uVar5 = 0xffffffff;
  iVar2 = fn_82A1BB18();
  if (param_1 == iVar2) {
    fn_82A1E5B8();
    uVar5 = 0xfffffffe;
  }
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(0xffffffff8326f5a8,0,lVar1 + 1);
  uVar6 = 0x1f;
  piVar4 = (int *)0x8326f604;
  iVar2 = 6;
  uVar3 = 0x48;
  do {
    if (*piVar4 == -1) {
      iVar2 = iVar2 * 0xc;
      *(undefined4 *)(iVar2 + -0x7cd90a48) = uVar5;
      *(int *)(iVar2 + -0x7cd90a44) = param_1;
      uVar6 = *(undefined4 *)(iVar2 + -0x7cd90a40);
      break;
    }
    uVar3 = uVar3 + 0xc;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
  } while ((uVar3 & 0xffffffff) < 0x174);
  fn_82A1BB18();
  fn_8259C738(0xffffffff8326f5a8);
  return uVar6;
}

