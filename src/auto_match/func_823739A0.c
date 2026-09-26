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
extern int fn_82359DB8();
extern int fn_8265C9E0();
extern unsigned int iStack_30;
extern unsigned int lbl_82196E94;
extern unsigned int uStack_2c;
extern U64 storeWordConditionalIndexed();


int * fn_823739A0(int *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  int iStack_30;
  uint uStack_2c;
  
  fn_82359DB8(&iStack_30,param_2 + 0x40,*(undefined4 *)(param_2 + 0x54));
  if (iStack_30 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    puVar3 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[3] = 0;
      puVar3[1] = 1;
      *puVar3 = &lbl_82196E94;
      puVar3[2] = 1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    uVar5 = (ulonglong)uStack_2c;
    param_1[1] = (int)puVar3;
    *param_1 = 0;
  }
  else {
    uVar5 = (ulonglong)uStack_2c;
    if (uVar5 != 0) {
      do {
        puVar4 = (uint *)(uVar5 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,uVar5 + 4);
          *puVar4 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = uVar5;
    if (param_1 != &iStack_30) {
      param_1[1] = uStack_2c;
      uVar2 = 0;
      *param_1 = iStack_30;
    }
    if (uVar2 != 0) {
      fn_822315A0();
    }
  }
  if (uVar5 != 0) {
    fn_822315A0(uVar5);
  }
  return param_1;
}

