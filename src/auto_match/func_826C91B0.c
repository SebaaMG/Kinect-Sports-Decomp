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
extern int fn_8269F500();
extern int fn_826C8D90();


undefined8 fn_826C91B0(int *param_1,undefined8 param_2,longlong param_3)

{
  char cVar3;
  undefined8 uVar1;
  int iVar2;
  uint auStack_30 [12];
  
  auStack_30[0] = 0xffffffff;
  cVar3 = (**(code **)(*(int *)param_1[0x27] + 0x34))((int *)param_1[0x27],param_2,auStack_30,0);
  if (cVar3 == '\0') {
    iVar2 = param_1[0x20];
    if (iVar2 == 0) {
      iVar2 = fn_8269F500(param_1);
    }
    fn_826C8D90(param_1 + 3,0xffffffff8200bdd4,**(undefined4 **)(iVar2 + 0xc),param_2);
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x120))(param_1,(ulonglong)auStack_30[0] + param_3);
    uVar1 = 1;
  }
  return uVar1;
}

