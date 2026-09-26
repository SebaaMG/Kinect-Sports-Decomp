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
extern int fn_822BD338();
extern int fn_82365BD8();


undefined4 * fn_822C8A18(undefined4 *param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  
  puVar1 = *(uint **)(param_2 + 0x14);
  for (puVar3 = *(uint **)(param_2 + 0x10); puVar3 != puVar1; puVar3 = puVar3 + 2) {
    cVar2 = fn_822BD338((ulonglong)*puVar3 + 4,param_3);
    if (cVar2 != '\0') break;
  }
  if (puVar3 == *(uint **)(param_2 + 0x14)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    fn_82365BD8(param_1,puVar3);
  }
  return param_1;
}

