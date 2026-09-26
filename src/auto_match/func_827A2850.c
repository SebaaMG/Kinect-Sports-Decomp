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
extern int fn_8267C498();
extern int fn_827226F0();
extern int fn_8272A920();
extern int fn_82773930();
extern int fn_827921B8();
extern int fn_827998E8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_827A2850(int param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x13d) & 0x10) == 0) {
      uVar1 = param_2;
      if ((param_3 & 0xffffffff) < (param_2 & 0xffffffff)) {
        uVar1 = param_3;
        param_3 = param_2;
      }
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      fn_827921B8(*(undefined4 *)(*(int *)(param_1 + 8) + 8),&uStack_40,uVar1,param_3);
      if (param_4 == '\0') {
        uVar1 = (ulonglong)uStack_40;
        if (uVar1 == 0) {
          uVar1 = 0xffffffff820e975c;
        }
        fn_827226F0(*(undefined4 *)(param_1 + 0xc),uVar1,uStack_3c);
      }
      else {
        uVar1 = fn_827998E8(*(undefined4 *)(*(int *)(param_1 + 8) + 8),uVar1,param_3);
        uVar2 = (ulonglong)uStack_40;
        if (uVar2 == 0) {
          uVar2 = 0xffffffff820e975c;
        }
        fn_8272A920(*(undefined4 *)(param_1 + 0xc),uVar2,uStack_3c,uVar1);
        if ((uVar1 & 0xffffffff) != 0) {
          fn_8267C498(uVar1);
        }
      }
      fn_82773930(&uStack_40);
    }
  }
  return;
}

