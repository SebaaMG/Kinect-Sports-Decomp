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
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696958();


void fn_827215B0(int param_1,uint *param_2,undefined8 param_3)

{
  char cVar3;
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [48];
  
  auStack_30[0] = 0;
  cVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
                    (param_1 + 0x10,param_2,(ulonglong)*param_2 + 0x140,auStack_30);
  if (cVar3 != '\0') {
    iVar1 = fn_82696958(auStack_30,param_3);
    if ((iVar1 == 0) ||
       (iVar2 = (**(code **)(*(int *)(iVar1 + 0x10) + 8))(iVar1 + 0x10), iVar2 != 7)) {
      if (*(int *)(param_1 + 0x38) != 0) {
        fn_826824B0();
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
      if (*(int *)(param_1 + 0x38) != 0) {
        fn_826824B0();
      }
      *(int *)(param_1 + 0x38) = iVar1;
    }
  }
  fn_82696330(auStack_30);
  return;
}

