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
extern int fn_82F6DF30();


undefined8 fn_82C10968(char *param_1,char *param_2)

{
  char cVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  
  cVar1 = *param_1;
  for (; (cVar1 != '\0' && (*param_2 != '\0')); param_2 = param_2 + 1) {
    iVar3 = fn_82F6DF30(*param_2);
    iVar4 = fn_82F6DF30(cVar1);
    if (iVar4 != iVar3) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  cVar1 = *param_1;
  if ((cVar1 == '\0') && (*param_2 == '\0')) {
    uVar2 = 0;
  }
  else {
    iVar3 = fn_82F6DF30(*param_2);
    iVar4 = fn_82F6DF30(cVar1);
    uVar2 = 0xffffffffffffffff;
    if (iVar3 <= iVar4) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

