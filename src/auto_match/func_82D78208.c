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
extern int fn_82D78178();


uint fn_82D78208(int param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 auStack_30 [48];
  
  bVar1 = *(byte *)(param_1 + 0x21);
  uVar3 = (uint)bVar1;
  if (((uVar3 < 9) && (pcVar2 = (char *)fn_82D78178(auStack_30,param_1,param_4), *pcVar2 == '\0'))
     && (bVar1 < 8)) {
    *(undefined2 *)(uVar3 * 4 + param_1) = *param_4;
    *(undefined2 *)(uVar3 * 4 + param_1 + 2) = param_4[1];
    *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + '\x01';
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

