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
extern int fn_827C9C50();
extern int fn_827C9CE8();
extern int fn_827C9DE0();


void fn_827C9ED8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = param_1[99];
  if (param_2 == 0) {
    if (*(char *)((int)param_1 + 0x4a) != '\0') {
      *(code **)(iVar1 + 4) = fn_827C9C50;
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar2 = (**(code **)(param_1[1] + 0x1c))
                          (param_1,*(undefined4 *)(iVar1 + 8),0,*(undefined4 *)(iVar1 + 0x10),1);
        *(undefined4 *)(iVar1 + 0xc) = uVar2;
      }
      goto LAB_827c9fe4;
    }
    pcVar3 = *(code **)(param_1[0x68] + 4);
  }
  else if (param_2 == 2) {
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
    }
    pcVar3 = fn_827C9DE0;
  }
  else {
    if (param_2 != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
      goto LAB_827c9fe4;
    }
    if (*(int *)(iVar1 + 8) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
    }
    pcVar3 = fn_827C9CE8;
  }
  *(code **)(iVar1 + 4) = pcVar3;
LAB_827c9fe4:
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}

