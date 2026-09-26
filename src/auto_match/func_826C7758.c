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
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269EA50();
extern int fn_826A76D0();


undefined8 fn_826C7758(int *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar4;
  undefined8 uVar2;
  longlong lVar3;
  int aiStack_40 [4];
  undefined1 auStack_30 [24];
  
  cVar4 = fn_8269EA50();
  if (cVar4 == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    fn_826A76D0(aiStack_40,param_2,lVar3 + 0x78);
    if (*(int *)(aiStack_40[0] + 0x10) != 0) {
      iVar1 = param_1[0x6c];
      auStack_30[0] = 0;
      if (iVar1 == 0) {
        iVar1 = param_1[0x1b];
      }
      if (iVar1 != 0) {
        cVar4 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x2c))
                          (iVar1 + 0x10,param_1 + 0x52,aiStack_40,auStack_30);
        if (cVar4 != '\0') {
          fn_82696330(auStack_30);
          lVar3 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
          *(int *)(aiStack_40[0] + 8) = (int)lVar3;
          if (lVar3 == 0) {
            fn_826944C8(aiStack_40[0]);
          }
          goto LAB_826c7780;
        }
      }
      fn_82696330(auStack_30);
    }
    lVar3 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
    uVar2 = 0;
  }
  else {
LAB_826c7780:
    uVar2 = 1;
  }
  return uVar2;
}

