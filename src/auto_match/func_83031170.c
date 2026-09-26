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
extern int fn_82F68CC0();
extern int fn_830310B8();


longlong fn_83031170(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = fn_830310B8();
  if (cVar2 == '\0') {
    lVar3 = 0;
  }
  else {
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      *param_1 = param_1[2];
    }
    else {
      *(undefined4 *)param_1[1] = param_1[2];
    }
    puVar1 = (undefined4 *)param_1[2];
    param_1[1] = puVar1;
    param_1[2] = *puVar1;
    *puVar1 = 0;
    param_1[5] = param_1[5] + 1;
    lVar3 = (ulonglong)(uint)param_1[1] + 8;
    fn_82F68CC0(lVar3,param_2,0x68);
  }
  return lVar3;
}

