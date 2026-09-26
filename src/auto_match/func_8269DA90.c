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
extern int fn_8268D210();
extern int fn_826EFC58();
extern int fn_826F06A8();
extern int fn_826F0768();


void fn_8269DA90(int param_1,undefined4 *param_2)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  cVar3 = fn_826F06A8();
  if (cVar3 != '\0') {
    do {
      uVar1 = fn_8268D210(param_1 + 0xf4,0x50);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_826EFC58(uVar1,param_1,*param_2);
      }
      fn_826F0768(param_1,uVar2,1);
      cVar3 = fn_826F06A8(param_1);
    } while (cVar3 != '\0');
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  return;
}

