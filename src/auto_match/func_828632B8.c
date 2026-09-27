extern int *piRam832116b0;
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
extern int fn_82811700();
extern int fn_8285AF28();
extern int fn_8285AFA0();
extern int memcpy();
extern unsigned int uRam832116a8;
extern unsigned int uRam832116ac;


void fn_828632B8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;

  piVar1 = piRam832116b0;
  iVar2 = 0;
  uVar3 = (uint)uRam832116a8;
  piVar4 = piRam832116b0;
  if (uRam832116a8 != 0) {
    do {
      if (param_1 == *piVar4) {
        fn_8285AF28(piVar4 + 0x2b);
        fn_8285AFA0(piVar4 + 0x31,piVar4 + 0x33,param_3,param_4);
        return;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x35;
    } while (iVar2 < (int)(uint)uRam832116a8);
  }
  if (uVar3 < uRam832116ac) {
    piRam832116b0[uVar3 * 0x35] = param_1;
    uRam832116a8 = uRam832116a8 + 1;
    memcpy(piVar1 + uVar3 * 0x35 + 0x2b,param_2,0x18);
    fn_82811700(param_3,piVar1 + uVar3 * 0x35 + 0x31);
    fn_82811700(param_4,piVar1 + uVar3 * 0x35 + 0x33);
  }
  return;
}
