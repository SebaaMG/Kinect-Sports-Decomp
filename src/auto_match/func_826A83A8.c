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
extern int fn_826959C8();
extern int fn_826C0330();


ulonglong fn_826A83A8(int param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  
  if (*param_3 == *(int *)(*param_2 + 0x11c)) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0x2a4);
    if (cVar1 == '\0') {
      fn_826959C8(param_4);
      uVar3 = 0;
    }
    else {
      fn_826959C8(param_4);
      uVar3 = 2;
      param_4[4] = cVar1 == '\x01';
    }
    uVar2 = (ulonglong)(cVar1 != '\0');
    *param_4 = uVar3;
  }
  else {
    uVar2 = fn_826C0330();
  }
  return uVar2;
}

