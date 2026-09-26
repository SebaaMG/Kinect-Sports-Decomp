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
extern unsigned int *auStack_30;
extern int fn_82695608();
extern int fn_82696330();


undefined8 fn_82717A90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [24];
  
  iVar3 = (**(code **)(*param_1 + 0x58))();
  auStack_30[0] = 0;
  if (iVar3 != 0) {
    if (((uint)param_1[0x23] >> 4 & 1) != 0) {
      if (param_1[0x2f] == 0) {
        iVar2 = param_1[0x1b];
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 0x10);
          param_1 = (int *)(iVar2 + 0x10);
          goto LAB_82717b00;
        }
      }
      else {
        iVar1 = param_1[0x1a];
        param_1 = param_1 + 0x1a;
LAB_82717b00:
        (**(code **)(iVar1 + 0x2c))
                  (param_1,iVar3 + 0x78,(ulonglong)*(uint *)(iVar3 + 0x78) + 0x1e8,auStack_30);
      }
      cVar4 = fn_82695608(auStack_30,iVar3);
      if (cVar4 != '\0') {
        uVar5 = 1;
        goto LAB_82717b34;
      }
    }
  }
  uVar5 = 0;
LAB_82717b34:
  fn_82696330(auStack_30);
  return uVar5;
}

