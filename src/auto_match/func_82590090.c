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
extern int fn_82560690();
extern int fn_82576C08();
extern int fn_82590188();
extern int fn_825904E0();
extern int fn_825F5DF8();
extern int fn_8264C398();
extern unsigned int lbl_831C02C4;
extern unsigned int lbl_8320A898;


void fn_82590090(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  fn_82590188();
  if (*(int *)(param_1 + 0x93c) != 0) {
    fn_82576C08((double)*(float *)(param_1 + 0x828));
  }
  fn_825F5DF8(param_1,param_2);
  fn_825904E0(param_1,param_2);
  iVar1 = fn_82560690(0);
  if ((((iVar1 == 1) && (lbl_831C02C4 != 0)) && (*(int *)(*(int *)(param_1 + 0xb8) + 0x28) == 0)) &&
     (*(char *)(param_1 + 0xb2d) != '\0')) {
    uVar3 = 0;
    piVar2 = (int *)(param_1 + 0xb20);
    do {
      if (*piVar2 == *(int *)(param_1 + 0xb30)) {
        if (*(int *)((uVar3 + 0x33) * 4 + param_1 + 0xa10) == 0) {
          return;
        }
        fn_8264C398(lbl_8320A898);
        return;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < 3);
  }
  return;
}

