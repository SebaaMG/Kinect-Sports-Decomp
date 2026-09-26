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
extern int fn_830080D8();


undefined8
fn_82FB80D0(undefined8 param_1,int *param_2,ulonglong param_3,int param_4,char *param_5)

{
  undefined4 *puVar2;
  char cVar3;
  undefined8 uVar1;
  
  puVar2 = (undefined4 *)fn_830080D8(param_4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 2;
  }
  else {
    *puVar2 = param_2;
    if ((ulonglong)(uint)param_2[2] == (param_3 & 0xffffffff)) {
      *param_5 = '\x01';
    }
    else {
      cVar3 = (**(code **)(*param_2 + 4))(param_2);
      if (cVar3 == '\0') {
        cVar3 = *param_5;
        for (puVar2 = (undefined4 *)param_2[4];
            (cVar3 == '\0' && (puVar2 != (undefined4 *)param_2[5])); puVar2 = puVar2 + 1) {
          uVar1 = fn_82FB80D0(param_1,*puVar2,param_3,param_4,param_5);
          if ((int)uVar1 != 1) {
            return uVar1;
          }
          cVar3 = *param_5;
        }
      }
    }
    if (*param_5 == '\0') {
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + -4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

