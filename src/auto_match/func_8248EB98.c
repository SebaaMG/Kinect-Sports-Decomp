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
extern int fn_82365BD8();
extern int fn_823F2E20();


ulonglong fn_8248EB98(ulonglong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [56];
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    do {
      uVar4 = param_1;
      param_1 = uVar4 + 8;
      if ((param_1 & 0xffffffff) == (param_2 & 0xffffffff)) {
        return param_2;
      }
      puVar1 = (undefined4 *)fn_82365BD8(auStack_40,param_1);
      puVar2 = (undefined4 *)fn_82365BD8(auStack_38,uVar4);
      cVar3 = (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,*puVar1);
      if (puVar2[1] != 0) {
        fn_822315A0(puVar2[1]);
      }
      if (puVar1[1] != 0) {
        fn_822315A0();
      }
    } while (cVar3 == '\0');
    while (param_1 = param_1 + 8, (param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
      puVar1 = (undefined4 *)fn_82365BD8(auStack_38,param_1);
      puVar2 = (undefined4 *)fn_82365BD8(auStack_40,uVar4);
      cVar3 = (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,*puVar1);
      if (puVar2[1] != 0) {
        fn_822315A0(puVar2[1]);
      }
      if (puVar1[1] != 0) {
        fn_822315A0();
      }
      if (cVar3 == '\0') {
        uVar4 = uVar4 + 8;
        fn_823F2E20(uVar4,param_1);
      }
    }
    param_2 = uVar4 + 8;
  }
  return param_2;
}

