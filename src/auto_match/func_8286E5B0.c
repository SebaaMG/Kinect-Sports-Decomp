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
extern int fn_828647C0();
extern int fn_8287A7A8();


undefined4 fn_8286E5B0(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  while( true ) {
    if (puVar3 == *(undefined4 **)(param_1 + 0x18)) {
      return 0;
    }
    uVar1 = fn_8287A7A8(*puVar3);
    cVar2 = fn_828647C0(uVar1,param_2);
    if (cVar2 != '\0') break;
    puVar3 = puVar3 + 1;
  }
  return *puVar3;
}

