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
extern int fn_826F0360();
extern int fn_826F0540();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


void fn_826F16C0(uint *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_3c = param_2[1];
  if (iStack_3c == 0) {
    return;
  }
  pcStack_40 = (char *)*param_2;
  if (pcStack_40 == (char *)0x0) {
    return;
  }
  cVar1 = *pcStack_40;
  if (cVar1 == ' ') {
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x40;
    uVar4 = (uint)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_18;
    iVar5 = *param_2 + uVar4;
    iStack_18 = iVar5;
    iStack_14 = iVar2;
  }
  else if (cVar1 == '#') {
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x10;
    uVar4 = (uint)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_20;
    iVar5 = *param_2 + uVar4;
    iStack_20 = iVar5;
    iStack_1c = iVar2;
  }
  else if (cVar1 == '+') {
    *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) | 1;
    uVar4 = (uint)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_28;
    iVar5 = *param_2 + uVar4;
    iStack_28 = iVar5;
    iStack_24 = iVar2;
  }
  else if (cVar1 == '-') {
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x20;
    uVar4 = (uint)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_30;
    iVar5 = *param_2 + uVar4;
    iStack_30 = iVar5;
    iStack_2c = iVar2;
  }
  else {
    if (cVar1 == '.') {
      *param_1 = *param_1 & 0x7ffffff;
      uVar4 = (uint)(param_2[1] != 0);
      param_2[1] = param_2[1] - uVar4;
      *param_2 = *param_2 + uVar4;
      iVar2 = fn_826F0360(param_2,*param_1 >> 0x1b,0x3a);
      *param_1 = iVar2 << 0x1b | *param_1 & 0x7ffffff;
      return;
    }
    if (cVar1 != '0') {
      fn_826F0540(param_1,&pcStack_40);
      return;
    }
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 1 | 0x60;
    uVar4 = (uint)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_38;
    iVar5 = *param_2 + uVar4;
    iStack_38 = iVar5;
    iStack_34 = iVar2;
  }
  param_2[1] = iVar2;
  *param_2 = iVar5;
  fn_826F16C0(param_1,piVar3);
  return;
}

