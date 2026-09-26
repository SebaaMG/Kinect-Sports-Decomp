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
extern int fn_8259BB38();
extern int fn_827D96A0();
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


undefined8 fn_825BE108(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  iVar2 = fn_827D96A0(param_1 + 0x1f8);
  iVar3 = fn_827D96A0(param_2);
  if (iVar3 == iVar2) {
    uStack_30 = fn_827D96A0(param_3);
    fn_8259BB38(aiStack_2c,param_1 + 0x5c,&uStack_30);
    if (aiStack_2c[0] != *(int *)((int)param_1 + 0x60)) {
      do {
        puVar4 = (uint *)(param_1 + 0x1dc);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar4 - 1,0,param_1 + 0x1dc);
          *puVar4 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return 1;
    }
  }
  return 0;
}

