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
extern int fn_82529CC0();
extern int fn_82587B68();


undefined8 fn_82529BF0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 1;
  iVar3 = fn_82587B68(param_2);
  iVar4 = (**(code **)(iVar3 + 8))();
  iVar3 = fn_82587B68(param_2);
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    uVar2 = ((int (*)())fn_82529BF0)(param_1,iVar3,param_3,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar3 = fn_82587B68(iVar3);
    iVar3 = (**(code **)(iVar3 + 8))();
    pcVar5 = *(code **)(iVar3 + 4);
  }
  pcVar1 = *(code **)(iVar4 + 4);
  if (((pcVar1 != (code *)0x0) && (pcVar5 != pcVar1)) &&
     (iVar3 = (*pcVar1)(param_1,param_3), iVar3 == 0)) {
    fn_82529CC0(param_1,param_2,0);
    uVar6 = 0;
  }
  return uVar6;
}

