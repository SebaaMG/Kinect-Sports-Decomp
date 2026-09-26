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
extern unsigned int *auStack_1c;
extern int fn_82FAC688();
extern unsigned int uStack_20;


undefined8 fn_82FA8618(int param_1)

{
  char cVar1;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  cVar1 = fn_82FAC688(*(undefined4 *)(param_1 + 400),param_1,&uStack_20,auStack_1c);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) | 0x80;
    *(undefined4 *)(param_1 + 0x134) = uStack_20;
    *(undefined4 *)(param_1 + 0xd0) = auStack_1c[0];
    return 1;
  }
  return 2;
}

