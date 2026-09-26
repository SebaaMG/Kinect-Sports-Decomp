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
extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_83028210();
extern int fn_830288B8();


undefined8 fn_82FFED60(longlong param_1,int param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  puVar2 = (undefined4 *)fn_82FF8ED8(param_1 + 4,*(undefined4 *)(param_2 + 4));
  if (puVar2 == (undefined4 *)0x0) {
    return 2;
  }
  uVar1 = *puVar2;
  piVar3 = (int *)fn_82FAB9C0(param_4,uVar1);
  if (piVar3 == (int *)0x0) {
    RtlEnterCriticalSection(0xffffffff8326434c);
    piVar3 = (int *)fn_830288B8(uVar1);
    if (piVar3 == (int *)0x0) {
      uVar4 = 2;
    }
    else {
      uVar4 = fn_83028210(piVar3,puVar2,*(undefined4 *)(param_2 + 4));
      if ((int)uVar4 != 1) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    RtlLeaveCriticalSection(0xffffffff8326434c);
    if ((int)uVar4 != 1) goto LAB_82ffee40;
  }
  puVar2 = (undefined4 *)fn_830080D8(param_3 + 0x34);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = piVar3;
  }
LAB_82ffee40:
  fn_82FF86A8(param_1 + 4);
  return uVar4;
}

