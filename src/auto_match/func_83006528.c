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
extern unsigned int *auStack_3c;
extern int fn_83007E90();
extern int fn_83007EF0();


void fn_83006528(int *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puStack_40;
  undefined1 auStack_3c [60];
  
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    puStack_40 = (uint *)*piVar1;
    if (puStack_40 != (uint *)piVar1[1]) {
      do {
        if (((((ulonglong)*puStack_40 == (param_2 & 0xffffffff)) &&
             ((ulonglong)puStack_40[1] == (param_3 & 0xffffffff))) &&
            (puStack_40[3] == (uint)param_4)) &&
           ((ulonglong)puStack_40[4] == (param_5 & 0xffffffff))) {
          fn_83007E90(puStack_40 + 5);
          puVar2 = (undefined4 *)fn_83007EF0(auStack_3c,param_1[10],&puStack_40);
          puStack_40 = (uint *)*puVar2;
        }
        else {
          puStack_40 = puStack_40 + 8;
        }
      } while (puStack_40 != *(uint **)(param_1[10] + 4));
    }
    (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

