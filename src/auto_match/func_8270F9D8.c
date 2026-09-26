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
extern int fn_82693A98();
extern int fn_8269A1F0();
extern int fn_826A18A8();
extern int fn_826C0330();


bool fn_8270F9D8(longlong param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  char cVar2;
  undefined8 uVar1;
  bool bVar3;
  
  cVar2 = fn_826A18A8((ulonglong)*param_2 + 0x250,param_3,-(6 < *(byte *)(param_2 + 1)) & 1);
  if (cVar2 == '\0') {
    cVar2 = fn_826C0330(param_1,param_2,param_3,param_4);
    bVar3 = cVar2 != '\0';
  }
  else {
    cVar2 = fn_826C0330(param_1,param_2,param_3,param_4);
    if ((cVar2 == '\0') || (*param_4 == '\n')) {
      uVar1 = fn_82693A98(param_1 + 0x20);
      fn_8269A1F0(param_4,uVar1);
    }
    bVar3 = true;
  }
  return bVar3;
}

