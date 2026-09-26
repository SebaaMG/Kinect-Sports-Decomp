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
extern unsigned int *auStack_40;
extern int fn_82696330();
extern int fn_826C5FD0();


void fn_826C6070(int param_1,undefined8 param_2,undefined4 *param_3,byte param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 auStack_40 [64];
  
  if ((uint)((undefined4 *)*param_3)[4] < 3) {
    return;
  }
  pcVar1 = *(char **)*param_3;
  if (*pcVar1 != 'o') {
    return;
  }
  if (pcVar1[1] != 'n') {
    return;
  }
  auStack_40[0] = 0;
  cVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))(param_1 + 0x10,param_2,param_3,auStack_40);
  if (cVar2 == '\0') {
    if (param_4 != 0) goto LAB_826c6124;
  }
  else if (param_4 == 0) goto LAB_826c6124;
  uVar4 = (ulonglong)param_4;
  bVar3 = fn_826C5FD0(param_2,param_3);
  if (bVar3 != 0) {
    if ((uVar4 & 0xffffffff) == 0) {
      bVar3 = *(byte *)(param_1 + 0x34) | bVar3;
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x34) & ~bVar3;
    }
    *(byte *)(param_1 + 0x34) = bVar3;
  }
LAB_826c6124:
  fn_82696330(auStack_40);
  return;
}

