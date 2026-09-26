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
extern int fn_828BB5B0();
extern int fn_828BCA78();
extern unsigned int iStack_3c;
extern unsigned int stack0x00000000;


void fn_828BCB88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 auStack_38 [14];
  
  uVar2 = fn_8265C9E0(0x28);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828BB5B0(uVar2,param_2,param_3,param_4);
  }
  puVar4 = (undefined4 *)fn_828BAB20(&stack0x00000000 + -0x40,uVar3);
  puVar5 = (undefined4 *)fn_828BCA78(param_1 + 0xf8,param_4);
  uVar6 = 0;
  uVar7 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x38) != puVar4) {
    uVar7 = puVar4[1];
    puVar4[1] = 0;
    uVar6 = *puVar4;
    *puVar4 = 0;
  }
  iVar1 = puVar5[1];
  puVar5[1] = uVar7;
  *puVar5 = uVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

