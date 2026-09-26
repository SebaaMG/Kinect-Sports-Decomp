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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern unsigned int iStack_3c;
extern unsigned int stack0x0000003c;
extern unsigned int uStack0000003c;


uint * fn_8233C310(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined4 param_6,undefined8 param_7,uint *param_8)

{
  uint uVar1;
  uint *puVar3;
  undefined8 uVar2;
  int iVar4;
  undefined4 uStack0000003c;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [56];
  
  uStack0000003c = param_6;
  puVar3 = (uint *)fn_822EA970(auStack_40,param_3,param_7,*(undefined4 *)(param_2 + 0x80),
                                     param_4,&stack0x0000003c);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  uVar2 = fn_822C7578((ulonglong)*param_1 + 0x40,(ulonglong)*param_8 + 4);
  fn_82230218(uVar2,param_5,0,0xffffffffffffffff);
  uVar1 = *param_1;
  iVar4 = fn_82365BD8(auStack_38,param_8);
  fn_82376640((ulonglong)uVar1 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_2,param_1);
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

