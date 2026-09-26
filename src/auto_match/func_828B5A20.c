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
extern int fn_82230360();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_82F6DCE0();


undefined1 * fn_828B5A20(undefined1 *param_1,undefined2 *param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  char acStack_230 [560];
  
  if (*(char *)((int)param_2 + 7) == '\0') {
    if (param_3 == '\0') {
      uVar7 = 0xffffffff82024f10;
    }
    else {
      uVar7 = 0xffffffff82024f24;
    }
    fn_82F6DCE0(acStack_230,0x200,uVar7);
  }
  else {
    if (param_3 == '\0') {
      uVar7 = 0xffffffff82024f50;
    }
    else {
      uVar7 = 0xffffffff82024f68;
    }
    uVar2 = param_2[2];
    uVar3 = param_2[1];
    uVar4 = fn_828A12E8(param_4);
    puVar5 = (undefined4 *)fn_8288DD10(uVar4,uVar3);
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    fn_82F6DCE0(acStack_230,0x200,uVar7,*param_2,puVar5,uVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar6 = acStack_230;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,acStack_230,pcVar6 + (-1 - (int)acStack_230));
  return param_1;
}

