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
extern int fn_830508A0();
extern int fn_83054288();


void fn_83054920(int param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puStack_40;
  undefined8 *puStack_3c;
  undefined1 auStack_38 [56];
  
  if ((*(uint *)(param_2 + 6) & 0xe0000000) == 0x40000000) {
    puVar4 = *(undefined8 **)(param_1 + 0xbc);
    puVar1 = (undefined8 *)0x0;
    while (puVar3 = puVar4, puVar3 != (undefined8 *)0x0) {
      if (puVar3 == param_2) {
        if (puVar3 == *(undefined8 **)(param_1 + 0xbc)) {
          *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((int)puVar3 + 0xc);
        }
        else {
          *(undefined4 *)((int)puVar1 + 0xc) = *(undefined4 *)((int)puVar3 + 0xc);
        }
        break;
      }
      puVar1 = puVar3;
      puVar4 = *(undefined8 **)((int)puVar3 + 0xc);
    }
  }
  else {
    if (param_4 == '\0') {
      puVar1 = *(undefined8 **)(param_1 + 0xb0);
      if (puVar1 != param_2) {
        puStack_3c = (undefined8 *)0x0;
        puStack_40 = puVar1;
        if (puVar1 != (undefined8 *)0x0) {
          do {
            puStack_40 = puVar1;
            if (puStack_40 == param_2) {
              fn_83054288(auStack_38,param_1 + 0xb0,&puStack_40);
              goto LAB_83054a40;
            }
            puVar1 = *(undefined8 **)((int)puStack_40 + 0xc);
            puStack_3c = puStack_40;
          } while (*(undefined8 **)((int)puStack_40 + 0xc) != (undefined8 *)0x0);
          puStack_40 = (undefined8 *)0x0;
        }
        goto LAB_83054a40;
      }
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar2 + 0xc);
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      }
    }
  }
LAB_83054a40:
  fn_830508A0(param_1,*param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x60);
  iVar5 = iVar2 + 0x10;
  RtlEnterCriticalSection(iVar5);
  if (*(int *)(iVar2 + 0x98) == 0) {
    *(undefined8 **)(iVar2 + 0x98) = param_2;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
    RtlLeaveCriticalSection(iVar5);
  }
  else {
    *(int *)((int)param_2 + 0xc) = *(int *)(iVar2 + 0x98);
    *(undefined8 **)(iVar2 + 0x98) = param_2;
    RtlLeaveCriticalSection(iVar5);
  }
  return;
}

