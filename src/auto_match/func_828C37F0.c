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
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828BAB20();
extern int fn_828BCA78();
extern int fn_828C23A8();
extern int fn_828C35A0();
extern unsigned int iStack_3c;
extern unsigned int stack0x00000000;


void fn_828C37F0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 auStack_38 [14];
  
  uVar2 = fn_828C35A0(param_1 + 0xe8);
  uVar3 = fn_8265C9E0(0x24);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828C23A8(uVar3,param_3,param_4);
  }
  puVar5 = (undefined4 *)fn_828BAB20(&stack0x00000000 + -0x40,uVar4);
  puVar6 = (undefined4 *)fn_828BCA78(uVar2,param_4);
  uVar7 = 0;
  uVar8 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x38) != puVar5) {
    uVar8 = puVar5[1];
    puVar5[1] = 0;
    uVar7 = *puVar5;
    *puVar5 = 0;
  }
  iVar1 = puVar6[1];
  puVar6[1] = uVar8;
  *puVar6 = uVar7;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

