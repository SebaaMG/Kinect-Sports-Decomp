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
extern int fn_82696330();
extern int fn_826BFF48();
extern unsigned int uStack_3f;
extern unsigned int uStack_40;


undefined8 fn_826C0568(int param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  uStack_40 = 0;
  uStack_3f = 0;
  cVar2 = fn_826BFF48(param_1 + 8,param_3,&uStack_40);
  if (cVar2 == '\0') {
    if (param_4 != '\0') {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        uVar3 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x24))(iVar1 + 0x10,param_2,param_3,1);
        goto LAB_826c05ac;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
LAB_826c05ac:
  fn_82696330(&uStack_40);
  return uVar3;
}

